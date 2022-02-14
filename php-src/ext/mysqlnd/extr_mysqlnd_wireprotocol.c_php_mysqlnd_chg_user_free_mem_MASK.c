
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ new_auth_protocol_data_len; int * new_auth_protocol_data; scalar_t__ new_auth_protocol_len; int * new_auth_protocol; } ;
typedef TYPE_1__ MYSQLND_PACKET_CHG_USER_RESPONSE ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void * VAR_0)
{
 MYSQLND_PACKET_CHG_USER_RESPONSE * VAR_1 = (MYSQLND_PACKET_CHG_USER_RESPONSE *) VAR_0;

 if (VAR_1->new_auth_protocol) {
  FUNC_0(VAR_1->new_auth_protocol);
  VAR_1->new_auth_protocol = ((void*)0);
 }
 VAR_1->new_auth_protocol_len = 0;

 if (VAR_1->new_auth_protocol_data) {
  FUNC_0(VAR_1->new_auth_protocol_data);
  VAR_1->new_auth_protocol_data = ((void*)0);
 }
 VAR_1->new_auth_protocol_data_len = 0;
}
