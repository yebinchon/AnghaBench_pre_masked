
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* plat; } ;
typedef TYPE_2__ gs_device_t ;
struct TYPE_4__ {int * display; } ;
typedef int Display ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,int ,int *) ;

extern void FUNC_2(gs_device_t *VAR_2)
{
 Display *VAR_3 = VAR_2->plat->display;

 if (!FUNC_1(VAR_3, VAR_1, VAR_1, ((void*)0))) {
  FUNC_0(VAR_0, "Failed to reset current context.");
 }
}
