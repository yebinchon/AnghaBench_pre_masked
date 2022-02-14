
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; } ;
struct iaddr {int iabuf; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;

char *FUNC_2( struct iaddr VAR_0 ) {
    struct sockaddr_in VAR_1;
    FUNC_1(&VAR_1.sin_addr,VAR_0.iabuf,sizeof(VAR_1.sin_addr));
    return FUNC_0( VAR_1.sin_addr );
}
