
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_family; int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; struct addrinfo* ai_next; int ai_flags; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int ,int ,int) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (struct addrinfo*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (int,int ,int ) ;

__attribute__((used)) static int FUNC_11(char *VAR_5, int VAR_6, char *VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10 = -1, VAR_11;
    char VAR_12[6];
    struct addrinfo VAR_13, *VAR_14, *VAR_15;

    FUNC_9(VAR_12,6,"%d",VAR_6);
    FUNC_8(&VAR_13,0,sizeof(VAR_13));
    VAR_13.ai_family = VAR_8;
    VAR_13.ai_socktype = VAR_3;
    VAR_13.ai_flags = VAR_1;

    if ((VAR_11 = FUNC_7(VAR_7,VAR_12,&VAR_13,&VAR_14)) != 0) {
        FUNC_1(VAR_5, "%s", FUNC_6(VAR_11));
        return VAR_2;
    }
    for (VAR_15 = VAR_14; VAR_15 != ((void*)0); VAR_15 = VAR_15->ai_next) {
        if ((VAR_10 = FUNC_10(VAR_15->ai_family,VAR_15->ai_socktype,VAR_15->ai_protocol)) == -1)
            continue;

        if (VAR_8 == VAR_0 && FUNC_3(VAR_5,VAR_10) == VAR_2) goto error;
        if (FUNC_2(VAR_5,VAR_10) == VAR_2) goto error;
        if (FUNC_0(VAR_5,VAR_10,VAR_15->ai_addr,VAR_15->ai_addrlen,VAR_9) == VAR_2) VAR_10 = VAR_2;
        goto end;
    }
    if (VAR_15 == ((void*)0)) {
        FUNC_1(VAR_5, "unable to bind socket, errno: %d", VAR_4);
        goto error;
    }

error:
    if (VAR_10 != -1) FUNC_4(VAR_10);
    VAR_10 = VAR_2;
end:
    FUNC_5(VAR_14);
    return VAR_10;
}
