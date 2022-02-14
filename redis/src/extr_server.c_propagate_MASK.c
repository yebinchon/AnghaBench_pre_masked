
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct redisCommand {int dummy; } ;
typedef int robj ;
struct TYPE_2__ {scalar_t__ aof_state; int slaves; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct redisCommand*,int,int **,int) ;
 int FUNC_1 (int ,int,int **,int) ;
 TYPE_1__ VAR_3 ;

void FUNC_2(struct redisCommand *VAR_4, int VAR_5, robj **VAR_6, int VAR_7,
               int VAR_8)
{
    if (VAR_3.aof_state != VAR_0 && VAR_8 & VAR_1)
        FUNC_0(VAR_4,VAR_5,VAR_6,VAR_7);
    if (VAR_8 & VAR_2)
        FUNC_1(VAR_3.slaves,VAR_5,VAR_6,VAR_7);
}
