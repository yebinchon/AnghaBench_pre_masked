
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_ext_sec_setup_param {scalar_t__ len; int off; int min_rec_size; struct btf_ext_info* ext_info; int desc; } ;
struct btf_ext_info_sec {int num_info; } ;
struct btf_ext_info {int len; int rec_size; void* info; } ;
struct btf_ext {void* data; int data_size; TYPE_1__* hdr; } ;
typedef int __u64 ;
typedef int __u32 ;
struct TYPE_2__ {int hdr_len; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;

__attribute__((used)) static int FUNC_1(struct btf_ext *VAR_1,
         struct btf_ext_sec_setup_param *VAR_2)
{
 const struct btf_ext_info_sec *VAR_3;
 struct btf_ext_info *VAR_4;
 __u32 VAR_5, VAR_6;

 void *VAR_7;

 if (VAR_2->len == 0)
  return 0;

 if (VAR_2->off & 0x03) {
  FUNC_0(".BTF.ext %s section is not aligned to 4 bytes\n",
       VAR_2->desc);
  return -VAR_0;
 }

 VAR_7 = VAR_1->data + VAR_1->hdr->hdr_len + VAR_2->off;
 VAR_5 = VAR_2->len;

 if (VAR_1->data + VAR_1->data_size < VAR_7 + VAR_2->len) {
  FUNC_0("%s section (off:%u len:%u) is beyond the end of the ELF section .BTF.ext\n",
    VAR_2->desc, VAR_2->off, VAR_2->len);
  return -VAR_0;
 }


 if (VAR_5 < sizeof(__u32)) {
  FUNC_0(".BTF.ext %s record size not found\n", VAR_2->desc);
  return -VAR_0;
 }


 VAR_6 = *(__u32 *)VAR_7;
 if (VAR_6 < VAR_2->min_rec_size ||
     VAR_6 & 0x03) {
  FUNC_0("%s section in .BTF.ext has invalid record size %u\n",
    VAR_2->desc, VAR_6);
  return -VAR_0;
 }

 VAR_3 = VAR_7 + sizeof(__u32);
 VAR_5 -= sizeof(__u32);


 if (!VAR_5) {
  FUNC_0("%s section in .BTF.ext has no records", VAR_2->desc);
  return -VAR_0;
 }

 while (VAR_5) {
  unsigned int VAR_8 = sizeof(struct btf_ext_info_sec);
  __u64 VAR_9;
  __u32 VAR_10;

  if (VAR_5 < VAR_8) {
   FUNC_0("%s section header is not found in .BTF.ext\n",
        VAR_2->desc);
   return -VAR_0;
  }

  VAR_10 = VAR_3->num_info;
  if (VAR_10 == 0) {
   FUNC_0("%s section has incorrect num_records in .BTF.ext\n",
        VAR_2->desc);
   return -VAR_0;
  }

  VAR_9 = VAR_8 +
        (__u64)VAR_10 * VAR_6;
  if (VAR_5 < VAR_9) {
   FUNC_0("%s section has incorrect num_records in .BTF.ext\n",
        VAR_2->desc);
   return -VAR_0;
  }

  VAR_5 -= VAR_9;
  VAR_3 = (void *)VAR_3 + VAR_9;
 }

 VAR_4 = VAR_2->ext_info;
 VAR_4->len = VAR_2->len - sizeof(__u32);
 VAR_4->rec_size = VAR_6;
 VAR_4->info = VAR_7 + sizeof(__u32);

 return 0;
}
