
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * message; } ;
typedef TYPE_1__ MYSQLND_PACKET_OK ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void * VAR_0)
{
 MYSQLND_PACKET_OK *VAR_1= (MYSQLND_PACKET_OK *) VAR_0;
 if (VAR_1->message) {
  FUNC_0(VAR_1->message);
  VAR_1->message = ((void*)0);
 }
}
