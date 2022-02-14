
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t uNumItem; size_t* order; } ;
typedef size_t INT ;
typedef TYPE_1__ HEADER_INFO ;



__attribute__((used)) static INT
FUNC_0(const HEADER_INFO *VAR_0, INT VAR_1)
{
    if ((VAR_1 <0) || VAR_1 >= VAR_0->uNumItem)
      return VAR_1;
    return VAR_0->order[VAR_1];
}
