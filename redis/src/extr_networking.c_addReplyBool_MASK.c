
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int resp; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {int czero; int cone; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 TYPE_2__ VAR_0 ;

void FUNC_2(client *VAR_1, int VAR_2) {
    if (VAR_1->resp == 2) {
        FUNC_0(VAR_1, VAR_2 ? VAR_0.cone : VAR_0.czero);
    } else {
        FUNC_1(VAR_1, VAR_2 ? "#t\r\n" : "#f\r\n",4);
    }
}
