
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_header {scalar_t__ magic; scalar_t__ version; int type_off; int str_off; scalar_t__ flags; } ;
struct btf {int data_size; struct btf_header* hdr; struct btf_header* nohdr_data; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(struct btf *VAR_4)
{
 const struct btf_header *VAR_5 = VAR_4->hdr;
 __u32 VAR_6;

 if (VAR_4->data_size < sizeof(struct btf_header)) {
  FUNC_0("BTF header not found\n");
  return -VAR_2;
 }

 if (VAR_5->magic != VAR_0) {
  FUNC_0("Invalid BTF magic:%x\n", VAR_5->magic);
  return -VAR_2;
 }

 if (VAR_5->version != VAR_1) {
  FUNC_0("Unsupported BTF version:%u\n", VAR_5->version);
  return -VAR_3;
 }

 if (VAR_5->flags) {
  FUNC_0("Unsupported BTF flags:%x\n", VAR_5->flags);
  return -VAR_3;
 }

 VAR_6 = VAR_4->data_size - sizeof(*VAR_5);
 if (!VAR_6) {
  FUNC_0("BTF has no data\n");
  return -VAR_2;
 }

 if (VAR_6 < VAR_5->type_off) {
  FUNC_0("Invalid BTF type section offset:%u\n", VAR_5->type_off);
  return -VAR_2;
 }

 if (VAR_6 < VAR_5->str_off) {
  FUNC_0("Invalid BTF string section offset:%u\n", VAR_5->str_off);
  return -VAR_2;
 }

 if (VAR_5->type_off >= VAR_5->str_off) {
  FUNC_0("BTF type section offset >= string section offset. No type?\n");
  return -VAR_2;
 }

 if (VAR_5->type_off & 0x02) {
  FUNC_0("BTF type section is not aligned to 4 bytes\n");
  return -VAR_2;
 }

 VAR_4->nohdr_data = VAR_4->hdr + 1;

 return 0;
}
