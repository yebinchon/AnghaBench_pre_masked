
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_dns_result {char addr; size_t addrlen; int error; } ;
struct nn_dns {int fsm; struct nn_dns_result* result; } ;
struct addrinfo {char const* ai_addr; size_t ai_addrlen; int ai_socktype; int ai_flags; int ai_family; } ;
typedef int query ;
typedef int hostname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (struct addrinfo*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct nn_dns*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,size_t,int,char*,size_t*) ;

void FUNC_9 (struct nn_dns *VAR_7, const char *VAR_8, size_t VAR_9,
    int VAR_10, struct nn_dns_result *VAR_11)
{
    int VAR_12;
    struct addrinfo VAR_13;
    struct addrinfo *VAR_14;
    char VAR_15 [VAR_5];

    FUNC_6 (VAR_7, VAR_4);

    VAR_7->result = VAR_11;



    VAR_12 = FUNC_8 (VAR_8, VAR_9, VAR_10, &VAR_7->result->addr,
        &VAR_7->result->addrlen);
    if (VAR_12 == 0) {
        VAR_7->result->error = 0;
        FUNC_7 (&VAR_7->fsm);
        return;
    }
    FUNC_0 (VAR_12 == -VAR_3, -VAR_12);


    FUNC_4 (&VAR_13, 0, sizeof (VAR_13));
    if (VAR_10)
        VAR_13.ai_family = VAR_0;
    else {
        VAR_13.ai_family = VAR_1;



    }
    FUNC_5 (sizeof (VAR_15) > VAR_9);
    VAR_13.ai_socktype = VAR_6;
    FUNC_3 (VAR_15, VAR_8, VAR_9);
    VAR_15 [VAR_9] = 0;


    VAR_7->result->error = FUNC_2 (VAR_15, ((void*)0), &VAR_13, &VAR_14);
    if (VAR_7->result->error) {
        FUNC_7 (&VAR_7->fsm);
        return;
    }




    VAR_7->result->error = 0;
    FUNC_3 (&VAR_7->result->addr, VAR_14->ai_addr, VAR_14->ai_addrlen);
    VAR_7->result->addrlen = VAR_14->ai_addrlen;
    FUNC_1 (VAR_14);

    FUNC_7 (&VAR_7->fsm);
}
