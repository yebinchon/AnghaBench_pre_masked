
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int robj ;
typedef int client ;
struct TYPE_2__ {int * bulkhdr; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,size_t,char) ;
 TYPE_1__ VAR_1 ;
 size_t FUNC_2 (int *) ;

void FUNC_3(client *VAR_2, robj *VAR_3) {
    size_t VAR_4 = FUNC_2(VAR_3);

    if (VAR_4 < VAR_0)
        FUNC_0(VAR_2,VAR_1.bulkhdr[VAR_4]);
    else
        FUNC_1(VAR_2,VAR_4,'$');
}
