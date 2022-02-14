
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
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

bool
FUNC_6(Page VAR_3, int VAR_4, uint8 VAR_5)
{
 int VAR_6 = VAR_2 + VAR_4;
 FSMPage VAR_7 = (FSMPage) FUNC_2(VAR_3);
 uint8 VAR_8;

 FUNC_0(VAR_4 < VAR_0);

 VAR_8 = VAR_7->fp_nodes[VAR_6];


 if (VAR_8 == VAR_5 && VAR_5 <= VAR_7->fp_nodes[0])
  return 0;

 VAR_7->fp_nodes[VAR_6] = VAR_5;





 do
 {
  uint8 VAR_9 = 0;
  int VAR_10;
  int VAR_11;

  VAR_6 = FUNC_5(VAR_6);
  VAR_10 = FUNC_4(VAR_6);
  VAR_11 = VAR_10 + 1;

  VAR_9 = VAR_7->fp_nodes[VAR_10];
  if (VAR_11 < VAR_1)
   VAR_9 = FUNC_1(VAR_9,
         VAR_7->fp_nodes[VAR_11]);

  VAR_8 = VAR_7->fp_nodes[VAR_6];
  if (VAR_8 == VAR_9)
   break;

  VAR_7->fp_nodes[VAR_6] = VAR_9;
 } while (VAR_6 > 0);





 if (VAR_5 > VAR_7->fp_nodes[0])
  FUNC_3(VAR_3);

 return 1;
}
