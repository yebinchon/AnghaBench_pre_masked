
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf_header {int type_off; int str_off; } ;
struct btf {void* nohdr_data; struct btf_header* hdr; } ;


 int FUNC_0 (struct btf*,struct btf_type*) ;
 int FUNC_1 (struct btf_type*) ;

__attribute__((used)) static int FUNC_2(struct btf *VAR_0)
{
 struct btf_header *VAR_1 = VAR_0->hdr;
 void *VAR_2 = VAR_0->nohdr_data;
 void *VAR_3 = VAR_2 + VAR_1->type_off;
 void *VAR_4 = VAR_2 + VAR_1->str_off;

 while (VAR_3 < VAR_4) {
  struct btf_type *VAR_5 = VAR_3;
  int VAR_6;
  int VAR_7;

  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_3 += VAR_6;
  VAR_7 = FUNC_0(VAR_0, VAR_5);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
