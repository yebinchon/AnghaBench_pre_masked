
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* lsa; } ;
struct link_socket {int mode; TYPE_2__ info; int sd; } ;
struct TYPE_3__ {int actual; int bind_local; } ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int *,char const*,int ,int,int,int volatile*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct link_socket *VAR_1, const char *VAR_2,
                  volatile int *VAR_3)
{
    switch (VAR_1->mode)
    {
        case 130:
            VAR_1->sd = FUNC_4(VAR_1->sd,
                                            &VAR_1->info.lsa->actual,
                                            VAR_2,
                                            VAR_1->info.lsa->bind_local,
                                            1,
                                            0,
                                            VAR_3);
            break;

        case 128:
            FUNC_3(VAR_1->sd,
                             VAR_1->info.lsa->bind_local,
                             1,
                             0);
            break;

        case 129:
            VAR_1->sd = FUNC_2(VAR_1->sd,
                                        &VAR_1->info.lsa->actual,
                                        0);
            if (!FUNC_1(VAR_1->sd))
            {
                *VAR_3 = VAR_0;
                return;
            }
            FUNC_5(&VAR_1->info.lsa->actual);
            break;

        default:
            FUNC_0(0);
    }
}
