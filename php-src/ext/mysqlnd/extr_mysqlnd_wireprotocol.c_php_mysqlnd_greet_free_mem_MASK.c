
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * s; } ;
struct TYPE_4__ {int * auth_protocol; TYPE_1__ authentication_plugin_data; int * intern_auth_plugin_data; int * server_version; } ;
typedef TYPE_2__ MYSQLND_PACKET_GREET ;


 int FUNC_0 (int *) ;

__attribute__((used)) static
void FUNC_1(void * VAR_0)
{
 MYSQLND_PACKET_GREET *VAR_1= (MYSQLND_PACKET_GREET *) VAR_0;
 if (VAR_1->server_version) {
  FUNC_0(VAR_1->server_version);
  VAR_1->server_version = ((void*)0);
 }
 if (VAR_1->authentication_plugin_data.s && VAR_1->authentication_plugin_data.s != VAR_1->intern_auth_plugin_data) {
  FUNC_0(VAR_1->authentication_plugin_data.s);
  VAR_1->authentication_plugin_data.s = ((void*)0);
 }
 if (VAR_1->auth_protocol) {
  FUNC_0(VAR_1->auth_protocol);
  VAR_1->auth_protocol = ((void*)0);
 }
}
