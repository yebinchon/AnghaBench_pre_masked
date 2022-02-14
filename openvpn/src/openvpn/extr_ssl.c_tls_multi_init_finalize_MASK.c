
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int single_session; int frame; } ;
struct tls_multi {int * session; TYPE_1__ opt; } ;
struct frame {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct frame const*,int *) ;
 int FUNC_1 (struct tls_multi*,int *) ;

void
FUNC_2(struct tls_multi *VAR_2, const struct frame *VAR_3)
{
    FUNC_0(VAR_3, &VAR_2->opt.frame);



    FUNC_1(VAR_2, &VAR_2->session[VAR_0]);

    if (!VAR_2->opt.single_session)
    {
        FUNC_1(VAR_2, &VAR_2->session[VAR_1]);
    }
}
