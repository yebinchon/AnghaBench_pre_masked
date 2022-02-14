
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {double number; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ js_Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (int *,char*,double) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int) ;
 TYPE_2__* FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int,double) ;

__attribute__((used)) static void FUNC_9(js_State *VAR_1)
{
 js_Object *VAR_2 = FUNC_6(VAR_1, 0);
 int VAR_3 = FUNC_5(VAR_1, 1);
 char VAR_4[32];
 double VAR_5;
 if (VAR_2->type != VAR_0) FUNC_7(VAR_1, "not a number");
 if (VAR_3 < 0) FUNC_4(VAR_1, "precision %d out of range", VAR_3);
 if (VAR_3 > 20) FUNC_4(VAR_1, "precision %d out of range", VAR_3);
 VAR_5 = VAR_2->u.number;
 if (FUNC_1(VAR_5) || FUNC_0(VAR_5) || VAR_5 <= -1e21 || VAR_5 >= 1e21)
  FUNC_3(VAR_1, FUNC_2(VAR_1, VAR_4, VAR_5));
 else
  FUNC_8(VAR_1, "%.*f", VAR_3, VAR_5);
}
