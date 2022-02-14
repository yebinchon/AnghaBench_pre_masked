
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sds ;
struct TYPE_4__ {int height; int width; } ;
typedef TYPE_1__ lwCanvas ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 () ;

__attribute__((used)) static sds FUNC_4(lwCanvas *VAR_0) {
    sds VAR_1 = FUNC_3();
    for (int VAR_2 = 0; VAR_2 < VAR_0->height; VAR_2++) {
        for (int VAR_3 = 0; VAR_3 < VAR_0->width; VAR_3++) {
            int VAR_4 = FUNC_0(VAR_0,VAR_3,VAR_2);
            char *VAR_5;




            switch(VAR_4) {
            case 0: VAR_5 = "0;30;40m"; break;
            case 1: VAR_5 = "0;90;100m"; break;
            case 2: VAR_5 = "0;37;47m"; break;
            case 3: VAR_5 = "0;97;107m"; break;
            default: VAR_5 = "0;30;40m"; break;
            }
            VAR_1 = FUNC_2(VAR_1,"\033[%s \033[0m",VAR_5);
        }
        if (VAR_2 != VAR_0->height-1) VAR_1 = FUNC_1(VAR_1,"\n",1);
    }
    return VAR_1;
}
