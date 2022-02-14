
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_chunkref {int dummy; } ;
struct nn_msg {struct nn_chunkref body; } ;


 int FUNC_0 (struct nn_chunkref*) ;

void FUNC_1 (struct nn_msg *VAR_0, struct nn_chunkref VAR_1)
{
    FUNC_0 (&VAR_0->body);
    VAR_0->body = VAR_1;
}
