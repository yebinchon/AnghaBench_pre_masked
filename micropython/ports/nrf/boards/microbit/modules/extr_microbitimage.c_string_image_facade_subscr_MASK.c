
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct TYPE_4__ {scalar_t__ image; TYPE_1__ base; int string; } ;
typedef TYPE_2__ string_image_facade_t ;
typedef size_t mp_uint_t ;
typedef scalar_t__ mp_obj_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,char const) ;
 size_t FUNC_1 (int ,size_t,scalar_t__,int) ;
 char* FUNC_2 (int ,size_t*) ;

__attribute__((used)) static mp_obj_t FUNC_3(mp_obj_t VAR_2, mp_obj_t VAR_3, mp_obj_t VAR_4) {
    if (VAR_4 == VAR_1) {

        string_image_facade_t *VAR_5 = (string_image_facade_t *)VAR_2;
        size_t VAR_6;
        const char *VAR_7 = FUNC_2(VAR_5->string, &VAR_6);
        mp_uint_t VAR_8 = FUNC_1(VAR_5->base.type, VAR_6, VAR_3, 0);
        FUNC_0(VAR_5->image, VAR_7[VAR_8]);
        return VAR_5->image;
    } else {
        return VAR_0;
    }
}
