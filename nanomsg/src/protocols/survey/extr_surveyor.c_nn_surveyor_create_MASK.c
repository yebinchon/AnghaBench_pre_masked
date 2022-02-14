
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_sockbase {int dummy; } ;
struct TYPE_2__ {struct nn_sockbase sockbase; } ;
struct nn_surveyor {TYPE_1__ xsurveyor; } ;


 int FUNC_0 (struct nn_surveyor*) ;
 struct nn_surveyor* FUNC_1 (int,char*) ;
 int FUNC_2 (struct nn_surveyor*,int *,void*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3 (void *VAR_1, struct nn_sockbase **VAR_2)
{
    struct nn_surveyor *VAR_3;

    VAR_3 = FUNC_1 (sizeof (struct nn_surveyor), "socket (surveyor)");
    FUNC_0 (VAR_3);
    FUNC_2 (VAR_3, &VAR_0, VAR_1);
    *VAR_2 = &VAR_3->xsurveyor.sockbase;

    return 0;
}
