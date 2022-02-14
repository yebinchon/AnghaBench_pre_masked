
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_hour; int tm_min; int tm_sec; } ;
typedef scalar_t__ fsec_t ;
typedef scalar_t__ TimeADT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(struct pg_tm *VAR_3, fsec_t VAR_4, TimeADT *VAR_5)
{
 *VAR_5 = ((((VAR_3->tm_hour * VAR_0 + VAR_3->tm_min) * VAR_1) + VAR_3->tm_sec)
      * VAR_2) + VAR_4;
 return 0;
}
