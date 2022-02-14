
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sds ;
struct TYPE_6__ {char* ptr; } ;
typedef TYPE_1__ robj ;
typedef int buf ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*) ;

sds FUNC_5(sds VAR_0, int VAR_1, robj **VAR_2) {
    char VAR_3[32];
    int VAR_4, VAR_5;
    robj *VAR_6;

    VAR_3[0] = '*';
    VAR_4 = 1+FUNC_2(VAR_3+1,sizeof(VAR_3)-1,VAR_1);
    VAR_3[VAR_4++] = '\r';
    VAR_3[VAR_4++] = '\n';
    VAR_0 = FUNC_3(VAR_0,VAR_3,VAR_4);

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        VAR_6 = FUNC_1(VAR_2[VAR_5]);
        VAR_3[0] = '$';
        VAR_4 = 1+FUNC_2(VAR_3+1,sizeof(VAR_3)-1,FUNC_4(VAR_6->ptr));
        VAR_3[VAR_4++] = '\r';
        VAR_3[VAR_4++] = '\n';
        VAR_0 = FUNC_3(VAR_0,VAR_3,VAR_4);
        VAR_0 = FUNC_3(VAR_0,VAR_6->ptr,FUNC_4(VAR_6->ptr));
        VAR_0 = FUNC_3(VAR_0,"\r\n",2);
        FUNC_0(VAR_6);
    }
    return VAR_0;
}
