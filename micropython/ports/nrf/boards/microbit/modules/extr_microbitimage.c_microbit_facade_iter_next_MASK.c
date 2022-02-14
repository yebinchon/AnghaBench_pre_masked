
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ mp_obj_t ;
struct TYPE_2__ {size_t index; scalar_t__ image; int string; } ;
typedef TYPE_1__ facade_iterator_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char const) ;
 char* FUNC_1 (int ,size_t*) ;

__attribute__((used)) static mp_obj_t FUNC_2(mp_obj_t VAR_1) {
    facade_iterator_t *VAR_2 = (facade_iterator_t *)VAR_1;
    size_t VAR_3;
    const char *VAR_4 = FUNC_1(VAR_2->string, &VAR_3);
    if (VAR_2->index >= VAR_3) {
        return VAR_0;
    }
    FUNC_0(VAR_2->image, VAR_4[VAR_2->index]);
    VAR_2->index++;
    return VAR_2->image;
}
