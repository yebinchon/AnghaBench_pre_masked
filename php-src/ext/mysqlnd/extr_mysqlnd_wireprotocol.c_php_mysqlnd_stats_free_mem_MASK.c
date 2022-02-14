
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * s; } ;
struct TYPE_4__ {TYPE_1__ message; } ;
typedef TYPE_2__ MYSQLND_PACKET_STATS ;


 int FUNC_0 (int *) ;

__attribute__((used)) static
void FUNC_1(void * VAR_0)
{
 MYSQLND_PACKET_STATS *VAR_1= (MYSQLND_PACKET_STATS *) VAR_0;
 if (VAR_1->message.s) {
  FUNC_0(VAR_1->message.s);
  VAR_1->message.s = ((void*)0);
 }
}
