
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sds ;
struct TYPE_2__ {int currentline; } ;


 TYPE_1__ VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*,int,char*) ;
 int FUNC_4 () ;

void FUNC_5(int VAR_1) {
    char *VAR_2 = FUNC_0(VAR_1);
    char *VAR_3;
    int VAR_4 = FUNC_1(VAR_1);
    int VAR_5 = VAR_0.currentline == VAR_1;

    if (VAR_5 && VAR_4)
        VAR_3 = "->#";
    else if (VAR_5)
        VAR_3 = "-> ";
    else if (VAR_4)
        VAR_3 = "  #";
    else
        VAR_3 = "   ";
    sds VAR_6 = FUNC_3(FUNC_4(),"%s%-3d %s", VAR_3, VAR_1, VAR_2);
    FUNC_2(VAR_6);
}
