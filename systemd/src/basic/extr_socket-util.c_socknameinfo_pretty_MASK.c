
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sockaddr_union {int sa; } ;
typedef int socklen_t ;
typedef int host ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,char*,int,int *,int ,int ) ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (int *,int ,int,int,char**) ;
 char* FUNC_4 (char*) ;

int FUNC_5(union sockaddr_union *VAR_4, socklen_t VAR_5, char **VAR_6) {
        int VAR_7;
        char VAR_8[VAR_2], *VAR_9;

        FUNC_0(VAR_6);

        VAR_7 = FUNC_1(&VAR_4->sa, VAR_5, VAR_8, sizeof(VAR_8), ((void*)0), 0, VAR_1);
        if (VAR_7 != 0) {
                int VAR_10 = VAR_3;

                VAR_7 = FUNC_3(&VAR_4->sa, VAR_5, 1, 1, &VAR_9);
                if (VAR_7 < 0)
                        return VAR_7;

                FUNC_2(VAR_10, "getnameinfo(%s) failed: %m", VAR_9);
        } else {
                VAR_9 = FUNC_4(VAR_8);
                if (!VAR_9)
                        return -VAR_0;
        }

        *VAR_6 = VAR_9;
        return 0;
}
