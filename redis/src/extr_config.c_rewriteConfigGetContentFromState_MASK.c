
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rewriteConfigState {int numlines; int * lines; } ;
typedef int sds ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;

sds FUNC_4(struct rewriteConfigState *VAR_0) {
    sds VAR_1 = FUNC_2();
    int VAR_2, VAR_3 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_0->numlines; VAR_2++) {

        if (FUNC_3(VAR_0->lines[VAR_2]) == 0) {
            if (VAR_3) continue;
            VAR_3 = 1;
        } else {
            VAR_3 = 0;
        }
        VAR_1 = FUNC_1(VAR_1,VAR_0->lines[VAR_2]);
        VAR_1 = FUNC_0(VAR_1,"\n",1);
    }
    return VAR_1;
}
