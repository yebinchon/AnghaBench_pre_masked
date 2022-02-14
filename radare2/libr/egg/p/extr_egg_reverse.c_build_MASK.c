
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int os; int bits; int arch; } ;
typedef TYPE_1__ REgg ;
typedef int RBuffer ;







 int * VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int const*,int ) ;
 int FUNC_4 (int *,int,int const*,int ) ;
 char* FUNC_5 (TYPE_1__*,char*) ;
 char const* VAR_1 ;
 int FUNC_6 (char const*) ;
 char const* VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static RBuffer *FUNC_7 (REgg *VAR_4) {
 RBuffer *VAR_5 = FUNC_2 ();
 const ut8 *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 char *VAR_8 = FUNC_5 (VAR_4, "port");

 switch (VAR_4->os) {
 case 130:
 case 132:
  switch (VAR_4->arch) {
  case 129:
   VAR_6 = VAR_0;
   VAR_7 = 7+36;
   break;
  }
  break;
 case 131:
  switch (VAR_4->arch) {
  case 128:
   switch (VAR_4->bits) {
   case 32: VAR_6 = VAR_3; break;
   default: FUNC_0 ("Unsupportted\n");
   }
   break;
  }
  break;
 default:
  FUNC_0 ("unsupported os %x\n", VAR_4->os);
  break;
 }
 if (VAR_6) {
  FUNC_3 (VAR_5, VAR_6, FUNC_6 ((const char *)VAR_6));
  if (VAR_1 && *VAR_1) {
   if (VAR_7) FUNC_4 (VAR_5, VAR_7, (const ut8*)VAR_1, FUNC_6 (VAR_1)+1);
   else FUNC_0 ("Cannot set shell\n");
  }
 }
 FUNC_1 (VAR_2);
 FUNC_1 (VAR_1);
 return VAR_5;
}
