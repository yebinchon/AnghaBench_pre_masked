
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sign; } ;
typedef TYPE_1__ numeric ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int VAR_4 ;

int
FUNC_1(numeric *VAR_5, numeric *VAR_6)
{



 if (VAR_5->sign == VAR_2 && VAR_6->sign == VAR_2)
  return FUNC_0(VAR_5, VAR_6);


 if (VAR_5->sign == VAR_1 && VAR_6->sign == VAR_1)
 {



  return FUNC_0(VAR_6, VAR_5);
 }


 if (VAR_5->sign == VAR_2 && VAR_6->sign == VAR_1)
  return 1;
 if (VAR_5->sign == VAR_1 && VAR_6->sign == VAR_2)
  return -1;

 VAR_4 = VAR_3;
 return VAR_0;

}
