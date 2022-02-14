
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int username ;
typedef int user ;


 int * FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned char*,int ,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char*) ;

user *FUNC_5(void) {
    char VAR_1[64];
    for (int VAR_2 = 0; ; VAR_2++) {
        FUNC_3(VAR_1,sizeof(VAR_1),"__fakeuser:%d__",VAR_2);
        user *VAR_3 = FUNC_0(VAR_1,FUNC_4(VAR_1));
        if (VAR_3 == ((void*)0)) continue;
        int VAR_4 = FUNC_1(VAR_0,(unsigned char*) VAR_1,
                               FUNC_4(VAR_1),((void*)0));
        FUNC_2(VAR_4 != 0);
        return VAR_3;
    }
}
