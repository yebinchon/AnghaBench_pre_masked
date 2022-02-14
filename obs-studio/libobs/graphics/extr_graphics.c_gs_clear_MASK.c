
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct vec4 {int dummy; } ;
struct TYPE_4__ {int (* device_clear ) (int ,int ,struct vec4 const*,float,int ) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,struct vec4 const*,float,int ) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(uint32_t VAR_1, const struct vec4 *VAR_2, float VAR_3,
       uint8_t VAR_4)
{
 graphics_t *VAR_5 = VAR_0;

 if (!FUNC_0("gs_clear"))
  return;

 VAR_5->exports.device_clear(VAR_5->device, VAR_1, VAR_2,
           VAR_3, VAR_4);
}
