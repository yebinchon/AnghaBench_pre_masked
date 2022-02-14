
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int,int ,int ,int*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_5, int VAR_6) {
    int VAR_7 = 1;
    if (FUNC_2(VAR_6,VAR_2,VAR_3,&VAR_7,sizeof(VAR_7)) == -1) {
        FUNC_0(VAR_5, "setsockopt: %s", FUNC_3(VAR_4));
        FUNC_1(VAR_6);
        return VAR_0;
    }
    return VAR_1;
}
