
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ stdinarg; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,char**) ;
 char* FUNC_1 () ;
 char** FUNC_2 (char**,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, char **VAR_2) {
    int VAR_3 = 0;
    if (VAR_0.stdinarg) {
        VAR_2 = FUNC_2(VAR_2, (VAR_1+1)*sizeof(char*));
        VAR_2[VAR_1] = FUNC_1();
        VAR_3 = FUNC_0(VAR_1+1, VAR_2);
    } else {
        VAR_3 = FUNC_0(VAR_1, VAR_2);
    }
    return VAR_3;
}
