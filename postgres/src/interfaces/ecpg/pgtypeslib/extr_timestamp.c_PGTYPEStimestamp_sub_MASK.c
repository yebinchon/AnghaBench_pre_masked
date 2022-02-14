
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ timestamp ;
struct TYPE_3__ {scalar_t__ month; scalar_t__ time; } ;
typedef TYPE_1__ interval ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

int
FUNC_1(timestamp * VAR_1, timestamp * VAR_2, interval * VAR_3)
{
 if (FUNC_0(*VAR_1) || FUNC_0(*VAR_2))
  return VAR_0;
 else
  VAR_3->time = (*VAR_1 - *VAR_2);

 VAR_3->month = 0;

 return 0;
}
