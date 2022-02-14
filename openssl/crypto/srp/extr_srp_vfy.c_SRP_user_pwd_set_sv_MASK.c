
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_3__ {int * v; int * s; } ;
typedef TYPE_1__ SRP_user_pwd ;


 void* FUNC_0 (unsigned char*,int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (unsigned char*,int,char const*) ;

__attribute__((used)) static int FUNC_3(SRP_user_pwd *VAR_1, const char *VAR_2,
                               const char *VAR_3)
{
    unsigned char VAR_4[VAR_0];
    int VAR_5;

    VAR_1->v = ((void*)0);
    VAR_1->s = ((void*)0);

    VAR_5 = FUNC_2(VAR_4, sizeof(VAR_4), VAR_3);
    if (VAR_5 < 0)
        return 0;
    if (((void*)0) == (VAR_1->v = FUNC_0(VAR_4, VAR_5, ((void*)0))))
        return 0;
    VAR_5 = FUNC_2(VAR_4, sizeof(VAR_4), VAR_2);
    if (VAR_5 < 0)
        goto err;
    VAR_1->s = FUNC_0(VAR_4, VAR_5, ((void*)0));
    if (VAR_1->s == ((void*)0))
        goto err;
    return 1;
 err:
    FUNC_1(VAR_1->v);
    VAR_1->v = ((void*)0);
    return 0;
}
