
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(void) {
    int VAR_5;
    int VAR_6;

    if ((VAR_5 = FUNC_3(VAR_0, VAR_4, 0)) == -1) {
        FUNC_2("socket()");
        return -1;
    }

    if ((VAR_6 = FUNC_1(VAR_5, VAR_1, 0)) < 0 ||
        FUNC_1(VAR_5, VAR_2, VAR_6 | VAR_3) < 0) {
        FUNC_2("setting O_NONBLOCK");
        FUNC_0(VAR_5);
        return -1;
    }
    return VAR_5;
}
