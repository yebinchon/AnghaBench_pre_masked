
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_protocol; int ai_socktype; int ai_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct addrinfo *VAR_3) {
    int VAR_4;
    int VAR_5;

    if ((VAR_4 = FUNC_3(VAR_3->ai_family, VAR_3->ai_socktype, VAR_3->ai_protocol)) == -1) {
        return -1;
    }

    if ((VAR_5 = FUNC_1(VAR_4, VAR_0, 0)) < 0 ||
        FUNC_1(VAR_4, VAR_1, VAR_5 | VAR_2) < 0) {
        FUNC_2("setting O_NONBLOCK");
        FUNC_0(VAR_4);
        return -1;
    }
    return VAR_4;
}
