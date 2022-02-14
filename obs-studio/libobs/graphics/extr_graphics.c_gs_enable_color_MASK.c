
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* device_enable_color ) (int ,int,int,int,int) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int,int,int) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(bool VAR_1, bool VAR_2, bool VAR_3, bool VAR_4)
{
 graphics_t *VAR_5 = VAR_0;

 if (!FUNC_0("gs_enable_color"))
  return;

 VAR_5->exports.device_enable_color(VAR_5->device, VAR_1, VAR_2,
           VAR_3, VAR_4);
}
