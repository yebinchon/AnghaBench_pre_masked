
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int timestamp ;
struct TYPE_4__ {int time; int month; } ;
typedef TYPE_1__ interval ;


 int FUNC_0 (int *,TYPE_1__*,int *) ;

int
FUNC_1(timestamp * VAR_0, interval * VAR_1, timestamp * VAR_2)
{
 interval VAR_3;

 VAR_3.month = -VAR_1->month;
 VAR_3.time = -VAR_1->time;


 return FUNC_0(VAR_0, &VAR_3, VAR_2);
}
