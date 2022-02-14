
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int socket_t ;
typedef int csin ;
typedef int SOCKADDR_IN ;
typedef int SOCKADDR ;


 int FUNC_0 (int ,int *,int*) ;

socket_t
FUNC_1(socket_t VAR_0) {
    SOCKADDR_IN VAR_1;
    socklen_t VAR_2 = sizeof(VAR_1);
    return FUNC_0(VAR_0, (SOCKADDR *) &VAR_1, &VAR_2);
}
