
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Control_Block {int tcpstate; int port_them; int ip_them; } ;


 int FUNC_0 (int,int ,int ,char*,int ,char const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct TCP_Control_Block *VAR_0, const char *VAR_1)
{
    if (VAR_0 == ((void*)0))
        return;
    FUNC_0(5, VAR_0->ip_them, VAR_0->port_them, "=%s : --->> %s                  \n",
          FUNC_1(VAR_0->tcpstate),
          VAR_1);
}
