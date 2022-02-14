
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct sortslot {int * J; TYPE_1__ v; } ;
typedef TYPE_1__ js_Value ;
typedef int js_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__ const) ;
 int FUNC_6 (int *,int) ;
 char* FUNC_7 (int *,int) ;
 int FUNC_8 (char const*,char const*) ;

__attribute__((used)) static int FUNC_9(const void *VAR_1, const void *VAR_2)
{
 const struct sortslot *VAR_3 = VAR_1, *VAR_4 = VAR_2;
 const js_Value *VAR_5 = &VAR_3->v, *VAR_6 = &VAR_4->v;
 js_State *VAR_7 = VAR_3->J;
 const char *VAR_8, *VAR_9;
 int VAR_10;

 int VAR_11 = (VAR_5->type == VAR_0);
 int VAR_12 = (VAR_6->type == VAR_0);
 if (VAR_11) return !VAR_12;
 if (VAR_12) return -1;

 if (FUNC_2(VAR_7, 1)) {
  FUNC_1(VAR_7, 1);
  FUNC_4(VAR_7);
  FUNC_5(VAR_7, *VAR_5);
  FUNC_5(VAR_7, *VAR_6);
  FUNC_0(VAR_7, 2);
  VAR_10 = FUNC_6(VAR_7, -1);
  FUNC_3(VAR_7, 1);
 } else {
  FUNC_5(VAR_7, *VAR_5);
  FUNC_5(VAR_7, *VAR_6);
  VAR_8 = FUNC_7(VAR_7, -2);
  VAR_9 = FUNC_7(VAR_7, -1);
  VAR_10 = FUNC_8(VAR_8, VAR_9);
  FUNC_3(VAR_7, 2);
 }
 return VAR_10;
}
