
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* write_and_free; char* wcurr; int wbytes; int write_and_go; } ;
typedef TYPE_1__ conn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_2(conn *VAR_2, char *VAR_3, int VAR_4) {
    if (VAR_3) {
        VAR_2->write_and_free = VAR_3;
        VAR_2->wcurr = VAR_3;
        VAR_2->wbytes = VAR_4;
        FUNC_0(VAR_2, VAR_1);
        VAR_2->write_and_go = VAR_0;
    } else {
        FUNC_1(VAR_2, "SERVER_ERROR out of memory writing stats");
    }
}
