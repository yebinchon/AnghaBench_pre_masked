
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* name; int * desc; } ;
struct TYPE_7__ {TYPE_1__ name; } ;
struct TYPE_8__ {TYPE_2__ _; } ;
typedef TYPE_3__ OSSL_STORE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (int ,int *) ;

OSSL_STORE_INFO *FUNC_2(char *VAR_3)
{
    OSSL_STORE_INFO *VAR_4 = FUNC_1(VAR_2, ((void*)0));

    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_1,
                      VAR_0);
        return ((void*)0);
    }

    VAR_4->_.name.name = VAR_3;
    VAR_4->_.name.desc = ((void*)0);

    return VAR_4;
}
