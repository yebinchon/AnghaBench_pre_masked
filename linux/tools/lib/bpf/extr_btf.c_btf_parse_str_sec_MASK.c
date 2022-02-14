
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_header {int str_off; int str_len; } ;
struct btf {char* nohdr_data; char const* strings; struct btf_header* hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct btf *VAR_2)
{
 const struct btf_header *VAR_3 = VAR_2->hdr;
 const char *VAR_4 = VAR_2->nohdr_data + VAR_3->str_off;
 const char *VAR_5 = VAR_4 + VAR_2->hdr->str_len;

 if (!VAR_3->str_len || VAR_3->str_len - 1 > VAR_0 ||
     VAR_4[0] || VAR_5[-1]) {
  FUNC_0("Invalid BTF string section\n");
  return -VAR_1;
 }

 VAR_2->strings = VAR_4;

 return 0;
}
