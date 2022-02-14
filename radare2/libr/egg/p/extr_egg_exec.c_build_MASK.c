
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
 int FUNC_1 (char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int const*,scalar_t__) ;
 int FUNC_4 (int *,int,int const*,scalar_t__) ;
 char* FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static RBuffer *FUNC_7 (REgg *VAR_6) {
 RBuffer *VAR_7 = FUNC_2 ();
 const ut8 *VAR_8 = ((void*)0);
 int VAR_9 = 0;
 char *VAR_10 = FUNC_5 (VAR_6, "cmd");
 char *VAR_11 = FUNC_5 (VAR_6, "suid");

 if (VAR_11 && *VAR_11=='f') {
  FUNC_1 (VAR_11);
  VAR_11 = ((void*)0);
 }
 switch (VAR_6->os) {
 case 130:
 case 132:
  switch (VAR_6->arch) {
  case 128:
   if (VAR_11) {
    VAR_8 = VAR_5;
    VAR_9 = 7+36;
   } else {
    VAR_8 = VAR_4;
    VAR_9 = 36;
   }
  case 129:

   break;
  }
  break;
 case 131:
  if (VAR_11) {
   FUNC_0 ("no suid for this platform\n");
  }
  VAR_11 = 0;
  switch (VAR_6->arch) {
  case 128:
   switch (VAR_6->bits) {
   case 32:
    VAR_8 = VAR_3;
    break;
   case 64:
    VAR_8 = VAR_2;
    break;
   default:
    FUNC_0 ("Unsupported arch %d bits\n", VAR_6->bits);
   }
   break;
  case 129:
   switch (VAR_6->bits) {
   case 16:
    VAR_8 = VAR_1;
    break;
   case 32:
    VAR_8 = VAR_0;
    break;
   default:
    FUNC_0 ("Unsupported arch %d bits\n", VAR_6->bits);
   }
   break;
  }
  break;
 default:
  FUNC_0 ("Unsupported os %x\n", VAR_6->os);
  break;
 }

 if (VAR_8) {
  FUNC_3 (VAR_7, VAR_8, FUNC_6 ((const char *)VAR_8));
  if (VAR_10 && *VAR_10) {
   if (VAR_9) {
    FUNC_4 (VAR_7, VAR_9, (const ut8 *)VAR_10, FUNC_6 (VAR_10) + 1);
   } else {
    FUNC_0 ("Cannot set shell\n");
   }
  }
 }
 FUNC_1 (VAR_11);
 FUNC_1 (VAR_10);
 return VAR_7;
}
