
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bio; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(int VAR_3)
{
    if (VAR_3 < 0 || VAR_3 >= VAR_1)
        return -1;
    if (VAR_2[VAR_3].bio != ((void*)0))
        return VAR_3;
    return VAR_0;
}
