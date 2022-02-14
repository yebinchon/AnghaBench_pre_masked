
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
struct TYPE_2__ {scalar_t__* fp_nodes; } ;
typedef int Page ;
typedef TYPE_1__* FSMPage ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

bool
FUNC_3(Page VAR_2)
{
 FSMPage VAR_3 = (FSMPage) FUNC_1(VAR_2);
 bool VAR_4 = 0;
 int VAR_5;





 for (VAR_5 = VAR_1 - 1; VAR_5 >= 0; VAR_5--)
 {
  int VAR_6 = FUNC_2(VAR_5);
  int VAR_7 = VAR_6 + 1;
  uint8 VAR_8 = 0;


  if (VAR_6 < VAR_0)
   VAR_8 = VAR_3->fp_nodes[VAR_6];

  if (VAR_7 < VAR_0)
   VAR_8 = FUNC_0(VAR_8,
         VAR_3->fp_nodes[VAR_7]);

  if (VAR_3->fp_nodes[VAR_5] != VAR_8)
  {
   VAR_3->fp_nodes[VAR_5] = VAR_8;
   VAR_4 = 1;
  }
 }

 return VAR_4;
}
