
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 (TYPE_1__*,int ,int,int (*) (void const*,void const*)) ;

void FUNC_1(list_t *VAR_0, int VAR_1(const void *VAR_2, const void *VAR_3)) {
 if (VAR_0->length > 1) {
  FUNC_0(VAR_0, 0, VAR_0->length - 1, VAR_1);
 }
}
