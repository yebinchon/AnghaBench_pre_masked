
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int server_version; int server_name; } ;
typedef TYPE_1__ pa_server_info ;
typedef void pa_context ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(pa_context *VAR_1, const pa_server_info *VAR_2,
       void *VAR_3)
{
 FUNC_0(VAR_1);
 FUNC_0(VAR_3);

 FUNC_1(VAR_0, "Server name: '%s %s'", VAR_2->server_name,
      VAR_2->server_version);

 FUNC_2(0);
}
