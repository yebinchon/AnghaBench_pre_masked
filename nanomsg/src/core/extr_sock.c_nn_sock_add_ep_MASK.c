
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_transport {int dummy; } ;
struct nn_sock {int eid; int ctx; int eps; } ;
struct nn_ep {int item; } ;


 int VAR_0 ;
 struct nn_ep* FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nn_ep*,int ,struct nn_sock*,int,struct nn_transport const*,int,char const*) ;
 int FUNC_4 (struct nn_ep*) ;
 int FUNC_5 (struct nn_ep*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9 (struct nn_sock *VAR_1, const struct nn_transport *VAR_2,
    int VAR_3, const char *VAR_4)
{
    int VAR_5;
    struct nn_ep *VAR_6;
    int VAR_7;

    FUNC_1 (&VAR_1->ctx);


    VAR_6 = FUNC_0 (sizeof (struct nn_ep), "endpoint");
    VAR_5 = FUNC_3 (VAR_6, VAR_0, VAR_1, VAR_1->eid, VAR_2,
        VAR_3, VAR_4);
    if (FUNC_8 (VAR_5 < 0)) {
        FUNC_5 (VAR_6);
        FUNC_2 (&VAR_1->ctx);
        return VAR_5;
    }
    FUNC_4 (VAR_6);


    VAR_7 = VAR_1->eid;
    ++VAR_1->eid;


    FUNC_7 (&VAR_1->eps, &VAR_6->item, FUNC_6 (&VAR_1->eps));

    FUNC_2 (&VAR_1->ctx);

    return VAR_7;
}
