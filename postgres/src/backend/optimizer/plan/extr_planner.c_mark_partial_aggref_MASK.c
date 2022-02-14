
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ aggtranstype; scalar_t__ aggsplit; scalar_t__ aggtype; } ;
typedef TYPE_1__ Aggref ;
typedef scalar_t__ AggSplit ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(Aggref *VAR_3, AggSplit VAR_4)
{

 FUNC_0(FUNC_3(VAR_3->aggtranstype));

 FUNC_0(VAR_3->aggsplit == VAR_0);


 VAR_3->aggsplit = VAR_4;






 if (FUNC_2(VAR_4))
 {
  if (VAR_3->aggtranstype == VAR_2 && FUNC_1(VAR_4))
   VAR_3->aggtype = VAR_1;
  else
   VAR_3->aggtype = VAR_3->aggtranstype;
 }
}
