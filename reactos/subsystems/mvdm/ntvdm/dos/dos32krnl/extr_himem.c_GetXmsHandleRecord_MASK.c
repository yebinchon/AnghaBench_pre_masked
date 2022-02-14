
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {scalar_t__ Size; } ;
typedef TYPE_1__* PXMS_HANDLE ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline PXMS_HANDLE FUNC_0(WORD VAR_2)
{
    PXMS_HANDLE VAR_3;
    if (VAR_2 == 0 || VAR_2 >= VAR_1) return ((void*)0);

    VAR_3 = &VAR_0[VAR_2 - 1];
    return VAR_3->Size ? VAR_3 : ((void*)0);
}
