
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {void* page; void* chapter; } ;
typedef TYPE_1__ fz_location ;


 TYPE_1__ FUNC_0 (int ,void*) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,int,int) ;

__attribute__((used)) static fz_location FUNC_5(js_State *VAR_0)
{
 fz_location VAR_1;
 if (FUNC_2(VAR_0, -1))
  VAR_1 = FUNC_0(0, FUNC_4(VAR_0, -1, 1) - 1);
 else
 {
  FUNC_1(VAR_0, -1, 0);
  VAR_1.chapter = FUNC_4(VAR_0, -1, 1) - 1;
  FUNC_3(VAR_0, 1);
  FUNC_1(VAR_0, -1, 1);
  VAR_1.page = FUNC_4(VAR_0, -1, 1) - 1;
  FUNC_3(VAR_0, 1);
 }
 return VAR_1;
}
