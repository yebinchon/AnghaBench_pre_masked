
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_direction_state {int out_key; int in_key; int need_keys; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct key_direction_state) ;




void
FUNC_2(struct key_direction_state *VAR_0, int VAR_1)
{
    FUNC_1(*VAR_0);
    switch (VAR_1)
    {
        case 128:
            VAR_0->out_key = 0;
            VAR_0->in_key = 1;
            VAR_0->need_keys = 2;
            break;

        case 129:
            VAR_0->out_key = 1;
            VAR_0->in_key = 0;
            VAR_0->need_keys = 2;
            break;

        case 130:
            VAR_0->out_key = 0;
            VAR_0->in_key = 0;
            VAR_0->need_keys = 1;
            break;

        default:
            FUNC_0(0);
    }
}
