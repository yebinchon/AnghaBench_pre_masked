
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int server_rdp_version; int server_depth; scalar_t__ use_rdp5; } ;
typedef int STREAM ;
typedef TYPE_1__ RDPCLIENT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(RDPCLIENT * VAR_0, STREAM VAR_1)
{
 FUNC_1(VAR_1, VAR_0->server_rdp_version);
 FUNC_0(("Server RDP version is %d\n", VAR_0->server_rdp_version));
 if (1 == VAR_0->server_rdp_version)
 {
  VAR_0->use_rdp5 = 0;
  VAR_0->server_depth = 8;
 }
}
