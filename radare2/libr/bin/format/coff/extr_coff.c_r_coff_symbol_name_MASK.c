
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_2__ {int f_symptr; int f_nsyms; } ;
struct r_bin_coff_obj {int size; int b; TYPE_1__ hdr; } ;
struct coff_symbol {int dummy; } ;
typedef int n ;


 int FUNC_0 (int ,int,int *,int) ;
 char* FUNC_1 (char*,int) ;
 char* FUNC_2 (char*) ;

char *FUNC_3(struct r_bin_coff_obj *VAR_0, void *VAR_1) {
 char VAR_2[256] = {0};
 int VAR_3 = 0, VAR_4 = 0;
 union {
  char name[8];
  struct {
   ut32 zero;
   ut32 offset;
  };
 } *VAR_5 = VAR_1;
 if (!VAR_1) {
  return ((void*)0);
 }
 if (VAR_5->zero) {
  return FUNC_1 (VAR_5->name, 8);
 }
 VAR_4 = VAR_0->hdr.f_symptr + VAR_0->hdr.f_nsyms * sizeof (struct coff_symbol) + VAR_5->offset;
 if (VAR_4 > VAR_0->size) {
  return ((void*)0);
 }
 VAR_3 = FUNC_0 (VAR_0->b, VAR_4, (ut8*)VAR_2, sizeof (VAR_2));
 if (VAR_3 < 1) {
  return ((void*)0);
 }

 VAR_2[sizeof (VAR_2) - 1] = 0;
 return FUNC_2 (VAR_2);
}
