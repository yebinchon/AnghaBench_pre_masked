
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ NET_API_STATUS ;
typedef int * LPBYTE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,int **,int ,scalar_t__*,scalar_t__*,int *) ;

__attribute__((used)) static void FUNC_4(void)
{
    LPBYTE VAR_8;
    NET_API_STATUS VAR_9;
    DWORD VAR_10, VAR_11;


    VAR_9 = FUNC_3(((void*)0), 1, ((void*)0), VAR_3,
        ((void*)0), &VAR_11, ((void*)0));
    FUNC_1(VAR_9 == VAR_0 || VAR_9 == VAR_1,
       "NetWkstaTransportEnum returned %d\n", VAR_9);


    VAR_9 = FUNC_3(((void*)0), 0, ((void*)0), VAR_3,
        ((void*)0), &VAR_11, ((void*)0));


    if (VAR_9 == VAR_2)
        return;

    FUNC_1(VAR_9 == VAR_7 || VAR_9 == VAR_1,
       "NetWkstaTransportEnum returned %d\n", VAR_9);


    VAR_9 = FUNC_3(((void*)0), 0, ((void*)0), VAR_3,
        ((void*)0), ((void*)0), ((void*)0));
    FUNC_1(VAR_9 == VAR_7 || VAR_9 == VAR_6 || VAR_9 == VAR_1,
       "NetWkstaTransportEnum returned %d\n", VAR_9);


    VAR_9 = FUNC_3(((void*)0), 0, &VAR_8, VAR_3,
        &VAR_10, ((void*)0), ((void*)0));
    FUNC_1(VAR_9 == VAR_6,
       "NetWkstaTransportEnum returned %d\n", VAR_9);


    VAR_9 = FUNC_3(((void*)0), 0, &VAR_8, VAR_3,
        &VAR_10, &VAR_11, ((void*)0));
    FUNC_1(VAR_9 == VAR_4 || VAR_9 == VAR_2 || VAR_9 == VAR_5,
       "NetWkstaTransportEnum returned %d\n", VAR_9);
    if (VAR_9 == VAR_4) {


        FUNC_1(VAR_8 != ((void*)0), "got data back\n");
        FUNC_1(VAR_10 > 0, "read at least one transport\n");
        FUNC_1(VAR_11 > 0 || FUNC_0(VAR_11 == 0) ,
           "at least one transport\n");
        FUNC_2(VAR_8);
    }
}
