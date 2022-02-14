
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
struct TYPE_2__ {scalar_t__* fp_nodes; } ;
typedef int Page ;
typedef TYPE_1__* FSMPage ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool
FUNC_3(Page VAR_3, int VAR_4)
{
 FSMPage VAR_5 = (FSMPage) FUNC_1(VAR_3);
 uint8 *VAR_6;
 bool VAR_7 = 0;

 FUNC_0(VAR_4 >= 0 && VAR_4 < VAR_0);


 VAR_6 = &VAR_5->fp_nodes[VAR_2 + VAR_4];
 for (; VAR_6 < &VAR_5->fp_nodes[VAR_1]; VAR_6++)
 {
  if (*VAR_6 != 0)
   VAR_7 = 1;
  *VAR_6 = 0;
 }


 if (VAR_7)
  FUNC_2(VAR_3);

 return VAR_7;
}
