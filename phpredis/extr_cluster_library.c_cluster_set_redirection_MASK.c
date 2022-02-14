
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int redir_host_len; unsigned short redir_slot; unsigned short redir_port; int redir_host; int redir_type; } ;
typedef TYPE_1__ redisCluster ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (int ,char*,int) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static int FUNC_4(redisCluster* VAR_4, char *VAR_5, int VAR_6)
{
    char *VAR_7, *VAR_8;


    VAR_5 += VAR_6 ? VAR_1 : VAR_0;


    if ((VAR_7 = FUNC_1(VAR_5, ' ')) == ((void*)0)) return -1;
    *VAR_7++ = '\0';


    if ((VAR_8 = FUNC_3(VAR_7, ':')) == ((void*)0)) return -1;
    *VAR_8++ = '\0';


    VAR_4->redir_type = VAR_6 ? VAR_3 : VAR_2;
    FUNC_2(VAR_4->redir_host, VAR_7, sizeof(VAR_4->redir_host) - 1);
    VAR_4->redir_host_len = VAR_8 - VAR_7 - 1;
    VAR_4->redir_slot = (unsigned short)FUNC_0(VAR_5);
    VAR_4->redir_port = (unsigned short)FUNC_0(VAR_8);

    return 0;
}
