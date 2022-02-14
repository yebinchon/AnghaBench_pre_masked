
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int dwContext; } ;
struct TYPE_10__ {TYPE_8__ hdr; TYPE_3__* netconn; } ;
typedef TYPE_2__ http_request_t ;
typedef int WCHAR ;
struct TYPE_11__ {scalar_t__ keep_until; int pool_entry; TYPE_1__* server; scalar_t__ keep_alive; } ;
struct TYPE_9__ {int conn_pool; } ;
typedef scalar_t__ HMODULE ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD64 ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ,int *,int ,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (int ,int const*,scalar_t__*) ;
 scalar_t__ FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_8__*,int ,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,TYPE_2__*,TYPE_3__*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static void FUNC_12(http_request_t *VAR_10, BOOL VAR_11)
{
    FUNC_8("%p %p %x\n",VAR_10, VAR_10->netconn, VAR_11);

    if(!FUNC_10(VAR_10->netconn))
        return;


    if(VAR_11 && VAR_10->netconn->keep_alive) {
        BOOL VAR_12;

        FUNC_2(&VAR_9);

        FUNC_11(&VAR_10->netconn->server->conn_pool, &VAR_10->netconn->pool_entry);
        VAR_10->netconn->keep_until = (DWORD64)FUNC_5() + VAR_0;
        VAR_10->netconn = ((void*)0);

        VAR_12 = !VAR_8;
        VAR_8 = VAR_5;

        FUNC_7(&VAR_9);

        if(VAR_12) {
            HANDLE VAR_13 = ((void*)0);
            HMODULE VAR_14;

            FUNC_4(VAR_2, (const WCHAR*)VAR_6, &VAR_14);
            if(VAR_14)
                VAR_13 = FUNC_1(((void*)0), 0, VAR_7, ((void*)0), 0, ((void*)0));
            if(!VAR_13) {
                FUNC_2(&VAR_9);
                VAR_8 = VAR_1;
                FUNC_7(&VAR_9);

                if(VAR_14)
                    FUNC_3(VAR_14);
            }
            else
                FUNC_0(VAR_13);
        }
        return;
    }





    FUNC_6(&VAR_10->hdr, VAR_10->hdr.dwContext,
                          VAR_3, 0, 0);

    FUNC_9(VAR_10->netconn);

    FUNC_6(&VAR_10->hdr, VAR_10->hdr.dwContext,
                          VAR_4, 0, 0);
}
