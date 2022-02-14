
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** dcb; } ;
typedef TYPE_1__ RTF_Info ;
typedef int * RTFFuncPtr ;


 int VAR_0 ;

__attribute__((used)) static RTFFuncPtr FUNC_0(const RTF_Info *VAR_1, int VAR_2)
{
 if (VAR_2 >= 0 && VAR_2 < VAR_0)
  return VAR_1->dcb[VAR_2];
 return ((void*)0);
}
