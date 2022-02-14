
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ public_key_len; int * public_key; } ;
typedef TYPE_1__ MYSQLND_PACKET_SHA256_PK_REQUEST_RESPONSE ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void * VAR_0)
{
 MYSQLND_PACKET_SHA256_PK_REQUEST_RESPONSE * VAR_1 = (MYSQLND_PACKET_SHA256_PK_REQUEST_RESPONSE *) VAR_0;
 if (VAR_1->public_key) {
  FUNC_0(VAR_1->public_key);
  VAR_1->public_key = ((void*)0);
 }
 VAR_1->public_key_len = 0;
}
