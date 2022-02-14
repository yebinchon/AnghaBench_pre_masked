
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* scheme; int * close; int * eof; int * load; int * open; } ;
typedef TYPE_1__ OSSL_STORE_LOADER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

OSSL_STORE_LOADER *FUNC_6(const char *VAR_7)
{
    OSSL_STORE_LOADER VAR_8;
    OSSL_STORE_LOADER *VAR_9 = ((void*)0);

    VAR_8.scheme = VAR_7;
    VAR_8.open = ((void*)0);
    VAR_8.load = ((void*)0);
    VAR_8.eof = ((void*)0);
    VAR_8.close = ((void*)0);

    if (!FUNC_4(&VAR_5, VAR_3)) {
        FUNC_3(VAR_1,
                      VAR_0);
        return ((void*)0);
    }
    FUNC_1(VAR_6);

    VAR_9 = FUNC_5(VAR_4, &VAR_8);

    if (VAR_9 == ((void*)0)) {
        FUNC_3(VAR_1,
                      VAR_2);
        FUNC_2(2, "scheme=", VAR_7);
    }

    FUNC_0(VAR_6);

    return VAR_9;
}
