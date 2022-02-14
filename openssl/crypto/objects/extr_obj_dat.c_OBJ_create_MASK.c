
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* sn; char* ln; int nid; } ;
typedef TYPE_1__ ASN1_OBJECT ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (char const*) ;
 TYPE_1__* FUNC_6 (char const*,int) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(const char *VAR_3, const char *VAR_4, const char *VAR_5)
{
    ASN1_OBJECT *VAR_6 = ((void*)0);
    int VAR_7 = 0;


    if ((VAR_4 != ((void*)0) && FUNC_5(VAR_4) != VAR_0)
            || (VAR_5 != ((void*)0) && FUNC_2(VAR_5) != VAR_0)) {
        FUNC_7(VAR_1, VAR_2);
        return 0;
    }


    VAR_6 = FUNC_6(VAR_3, 1);
    if (VAR_6 == ((void*)0))
        return 0;


    if (FUNC_4(VAR_6) != VAR_0) {
        FUNC_7(VAR_1, VAR_2);
        goto err;
    }

    VAR_6->nid = FUNC_3(1);
    VAR_6->sn = (char *)VAR_4;
    VAR_6->ln = (char *)VAR_5;

    VAR_7 = FUNC_1(VAR_6);

    VAR_6->sn = ((void*)0);
    VAR_6->ln = ((void*)0);

 err:
    FUNC_0(VAR_6);
    return VAR_7;
}
