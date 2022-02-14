
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {scalar_t__ chapter; scalar_t__ page; } ;
typedef TYPE_1__ fz_location ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static void FUNC_3(js_State *VAR_0, fz_location VAR_1)
{
 if (VAR_1.chapter == 0)
  FUNC_1(VAR_0, VAR_1.page+1);
 else
 {
  FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_1.chapter+1);
  FUNC_2(VAR_0, -2, 0);
  FUNC_1(VAR_0, VAR_1.page+1);
  FUNC_2(VAR_0, -2, 1);
 }
}
