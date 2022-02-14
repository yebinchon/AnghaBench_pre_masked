
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char def_fc; TYPE_3__* ref; } ;
struct TYPE_8__ {TYPE_1__ pointer; } ;
struct TYPE_9__ {int * attrs; TYPE_2__ details; } ;
typedef TYPE_3__ type_t ;
typedef int attr_list_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;

type_t *FUNC_1(unsigned char VAR_1, type_t *VAR_2, attr_list_t *VAR_3)
{
    type_t *VAR_4 = FUNC_0(VAR_0);
    VAR_4->details.pointer.def_fc = VAR_1;
    VAR_4->details.pointer.ref = VAR_2;
    VAR_4->attrs = VAR_3;
    return VAR_4;
}
