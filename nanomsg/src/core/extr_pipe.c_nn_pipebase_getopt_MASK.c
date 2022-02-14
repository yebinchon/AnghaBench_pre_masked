
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sndprio; int rcvprio; int ipv4only; } ;
struct nn_pipebase {int sock; TYPE_1__ options; } ;





 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (void*,int*,size_t) ;
 int FUNC_2 (int ,int,int,void*,size_t*) ;

void FUNC_3 (struct nn_pipebase *VAR_1, int VAR_2, int VAR_3,
    void *VAR_4, size_t *VAR_5)
{
    int VAR_6;
    int VAR_7;

    if (VAR_2 == VAR_0) {
        switch (VAR_3) {


        case 128:
            VAR_7 = VAR_1->options.sndprio;
            break;
        case 129:
            VAR_7 = VAR_1->options.rcvprio;
            break;
        case 130:
            VAR_7 = VAR_1->options.ipv4only;
            break;


        default:
            VAR_6 = FUNC_2 (VAR_1->sock, VAR_2,
                VAR_3, VAR_4, VAR_5);
            FUNC_0 (VAR_6 == 0, -VAR_6);
            return;
        }

        FUNC_1 (VAR_4, &VAR_7,
            *VAR_5 < sizeof (int) ? *VAR_5 : sizeof (int));
        *VAR_5 = sizeof (int);

        return;
    }

    VAR_6 = FUNC_2 (VAR_1->sock, VAR_2, VAR_3, VAR_4, VAR_5);
    FUNC_0 (VAR_6 == 0, -VAR_6);
}
