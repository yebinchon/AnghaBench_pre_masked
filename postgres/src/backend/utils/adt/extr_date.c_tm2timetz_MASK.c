
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pg_tm {int tm_hour; int tm_min; int tm_sec; } ;
typedef scalar_t__ fsec_t ;
struct TYPE_3__ {int zone; scalar_t__ time; } ;
typedef TYPE_1__ TimeTzADT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(struct pg_tm *VAR_3, fsec_t VAR_4, int VAR_5, TimeTzADT *VAR_6)
{
 VAR_6->time = ((((VAR_3->tm_hour * VAR_0 + VAR_3->tm_min) * VAR_1) + VAR_3->tm_sec) *
     VAR_2) + VAR_4;
 VAR_6->zone = VAR_5;

 return 0;
}
