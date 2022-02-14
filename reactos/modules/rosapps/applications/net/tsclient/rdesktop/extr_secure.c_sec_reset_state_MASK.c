
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ decrypt_use_count; scalar_t__ encrypt_use_count; } ;
struct TYPE_6__ {TYPE_1__ secure; scalar_t__ server_rdp_version; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(RDPCLIENT * VAR_0)
{
 VAR_0->server_rdp_version = 0;
 VAR_0->secure.encrypt_use_count = 0;
 VAR_0->secure.decrypt_use_count = 0;
 FUNC_0(VAR_0);
}
