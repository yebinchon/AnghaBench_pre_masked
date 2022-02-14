
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t _allocedCount; int * array; } ;
typedef TYPE_1__* MMPointArrayRef ;
typedef int MMPointArray ;
typedef int MMPoint ;


 TYPE_1__* FUNC_0 (int,int) ;
 int * FUNC_1 (int) ;

MMPointArrayRef FUNC_2(size_t VAR_0)
{
 MMPointArrayRef VAR_1 = FUNC_0(1, sizeof(MMPointArray));

 if (VAR_0 == 0) VAR_0 = 1;

 VAR_1->_allocedCount = VAR_0;
 VAR_1->array = FUNC_1(VAR_1->_allocedCount * sizeof(MMPoint));
 if (VAR_1->array == ((void*)0)) return ((void*)0);

 return VAR_1;
}
