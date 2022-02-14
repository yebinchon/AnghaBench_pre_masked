
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct web_client {char* origin; char* cookie1; char* cookie2; int * user_agent; int ifd; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct web_client*) ;
 int FUNC_6 (struct web_client*) ;
 int FUNC_7 (struct web_client*) ;
 int FUNC_8 (struct web_client*,char*) ;

void FUNC_9(struct web_client *VAR_5) {
    int VAR_6 = 1;

    if(FUNC_3(FUNC_5(VAR_5) && FUNC_2(VAR_5->ifd, VAR_1, VAR_4, (char *) &VAR_6, sizeof(int)) != 0))
        FUNC_0(VAR_0, "%llu: failed to enable TCP_NODELAY on socket fd %d.", VAR_5->id, VAR_5->ifd);

    VAR_6 = 1;
    if(FUNC_3(FUNC_2(VAR_5->ifd, VAR_2, VAR_3, (char *) &VAR_6, sizeof(int)) != 0))
        FUNC_0(VAR_0, "%llu: failed to enable SO_KEEPALIVE on socket fd %d.", VAR_5->id, VAR_5->ifd);

    FUNC_7(VAR_5);

    VAR_5->origin[0] = '*'; VAR_5->origin[1] = '\0';
    VAR_5->cookie1[0] = '\0'; VAR_5->cookie2[0] = '\0';
    FUNC_1(VAR_5->user_agent); VAR_5->user_agent = ((void*)0);

    FUNC_6(VAR_5);

    FUNC_8(VAR_5, "CONNECTED");

    FUNC_4(0);
}
