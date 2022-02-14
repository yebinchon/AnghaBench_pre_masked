
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct graphics_subsystem {int dummy; } ;
struct TYPE_8__ {int (* device_create ) (int *,int ) ;} ;
struct TYPE_7__ {int device; TYPE_2__ exports; int module; int effect_mutex; int mutex; } ;
typedef TYPE_1__ graphics_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int ,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

int FUNC_7(graphics_t **VAR_3, const char *VAR_4, uint32_t VAR_5)
{
 int VAR_6 = VAR_0;

 graphics_t *VAR_7 = FUNC_0(sizeof(struct graphics_subsystem));
 FUNC_5(&VAR_7->mutex);
 FUNC_5(&VAR_7->effect_mutex);

 VAR_7->module = FUNC_4(VAR_4);
 if (!VAR_7->module) {
  VAR_6 = VAR_1;
  goto error;
 }

 if (!FUNC_3(&VAR_7->exports, VAR_7->module,
       VAR_4))
  goto error;

 VAR_6 = VAR_7->exports.device_create(&VAR_7->device, VAR_5);
 if (VAR_6 != VAR_2)
  goto error;

 if (!FUNC_1(VAR_7)) {
  VAR_6 = VAR_0;
  goto error;
 }

 *VAR_3 = VAR_7;
 return VAR_6;

error:
 FUNC_2(VAR_7);
 return VAR_6;
}
