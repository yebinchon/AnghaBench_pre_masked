
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_entry {scalar_t__ proto; scalar_t__ af; scalar_t__ remote_port; scalar_t__ remote; } ;
struct connection_entry {scalar_t__ proto; scalar_t__ af; scalar_t__ remote_port; scalar_t__ remote; } ;



__attribute__((used)) static void
FUNC_0(struct connection_entry *VAR_0, const struct remote_entry *VAR_1)
{
    if (VAR_1->remote)
    {
        VAR_0->remote = VAR_1->remote;
    }
    if (VAR_1->remote_port)
    {
        VAR_0->remote_port = VAR_1->remote_port;
    }
    if (VAR_1->proto >= 0)
    {
        VAR_0->proto = VAR_1->proto;
    }
    if (VAR_1->af > 0)
    {
        VAR_0->af = VAR_1->af;
    }
}
