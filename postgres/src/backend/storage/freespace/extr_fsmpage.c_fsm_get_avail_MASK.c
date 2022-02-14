
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_2__ {int * fp_nodes; } ;
typedef int Page ;
typedef TYPE_1__* FSMPage ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

uint8
FUNC_2(Page VAR_2, int VAR_3)
{
 FSMPage VAR_4 = (FSMPage) FUNC_1(VAR_2);

 FUNC_0(VAR_3 < VAR_0);

 return VAR_4->fp_nodes[VAR_1 + VAR_3];
}
