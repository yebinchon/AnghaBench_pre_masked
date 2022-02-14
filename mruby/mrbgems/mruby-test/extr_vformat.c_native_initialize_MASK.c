
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
struct TYPE_3__ {int type; int d; char* s; int C; int n; scalar_t__ i; int f; int c; } ;
typedef TYPE_1__ VFNative ;
typedef int VFArgumentType ;
 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*,scalar_t__*,int *) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int ) ;
 int VAR_1 ;

__attribute__((used)) static mrb_value
FUNC_11(mrb_state *VAR_2, mrb_value VAR_3)
{
  VFNative VAR_4, *VAR_5;
  mrb_int VAR_6;
  mrb_value VAR_7;

  FUNC_7(VAR_2, "io", &VAR_6, &VAR_7);
  VAR_4.type = (VFArgumentType)VAR_6;
  switch (VAR_4.type) {
    case 133: VAR_4.c = FUNC_1(VAR_7)[0]; break;
    case 132: VAR_4.d = (int)FUNC_5(VAR_7); break;
    case 131: VAR_4.f = FUNC_6(VAR_7); break;
    case 130: VAR_4.i = FUNC_5(VAR_7); break;

    case 129: VAR_4.n = FUNC_10(VAR_7); break;
    case 128: VAR_4.s = (char*)FUNC_8(VAR_2, FUNC_0(VAR_7) + 1);
                FUNC_2(VAR_4.s, FUNC_1(VAR_7), FUNC_0(VAR_7));
                VAR_4.s[FUNC_0(VAR_7)] = '\0'; break;
    case 134: VAR_4.C = FUNC_3(VAR_7); break;
    default: FUNC_9(VAR_2, VAR_0, "unknown type");
  }
  VAR_5 = (VFNative*)FUNC_8(VAR_2, sizeof(VFNative));
  *VAR_5 = VAR_4;
  FUNC_4(VAR_3, VAR_5, &VAR_1);
  return VAR_3;
}
