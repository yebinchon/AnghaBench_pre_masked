
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_cws {int state; int dns_result; int remote_hostname_len; int dns; int remote_host; int ep; } ;
typedef int ipv4only ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,int,int *) ;
 int FUNC_3 (int ,int ,int ,int*,size_t*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5 (struct nn_cws *VAR_3)
{
    int VAR_4;
    size_t VAR_5;
    char *VAR_6;


    VAR_5 = sizeof (VAR_4);
    FUNC_3 (VAR_3->ep, VAR_2, VAR_1,
        &VAR_4, &VAR_5);
    FUNC_0 (VAR_5 == sizeof (VAR_4));

    VAR_6 = FUNC_1 (&VAR_3->remote_host);
    FUNC_0 (FUNC_4 (VAR_6) > 0);

    FUNC_2 (&VAR_3->dns, VAR_6, VAR_3->remote_hostname_len, VAR_4,
        &VAR_3->dns_result);

    VAR_3->state = VAR_0;
}
