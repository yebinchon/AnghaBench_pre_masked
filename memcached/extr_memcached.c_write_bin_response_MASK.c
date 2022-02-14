
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cmd; int write_and_go; int noreply; } ;
typedef TYPE_1__ conn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_1 (TYPE_1__*,void*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(conn *VAR_4, void *VAR_5, int VAR_6, int VAR_7, int VAR_8) {
    if (!VAR_4->noreply || VAR_4->cmd == VAR_0 ||
        VAR_4->cmd == VAR_1) {
        FUNC_0(VAR_4, 0, VAR_6, VAR_7, VAR_8);
        if(VAR_8 > 0) {
            FUNC_1(VAR_4, VAR_5, VAR_8);
        }
        FUNC_2(VAR_4, VAR_2);
        VAR_4->write_and_go = VAR_3;
    } else {
        FUNC_2(VAR_4, VAR_3);
    }
}
