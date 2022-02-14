
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 () ;
 int VAR_0 ;

__attribute__((used)) static sds FUNC_6(void) {
    char VAR_1[1024];
    sds VAR_2 = FUNC_5();

    while(1) {
        int VAR_3 = FUNC_3(FUNC_1(VAR_0),VAR_1,1024);

        if (VAR_3 == 0) break;
        else if (VAR_3 == -1) {
            FUNC_2("Reading from standard input");
            FUNC_0(1);
        }
        VAR_2 = FUNC_4(VAR_2,VAR_1,VAR_3);
    }
    return VAR_2;
}
