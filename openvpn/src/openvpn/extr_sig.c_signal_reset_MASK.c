
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signal_info {int source; int * signal_text; scalar_t__ signal_received; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct signal_info *VAR_1)
{
    if (VAR_1)
    {
        VAR_1->signal_received = 0;
        VAR_1->signal_text = ((void*)0);
        VAR_1->source = VAR_0;
    }
}
