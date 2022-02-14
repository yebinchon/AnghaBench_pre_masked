
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {int function_table; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int *,int *,int ,int *) ;
 TYPE_1__* VAR_1 ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

void
FUNC_7(zval *VAR_2, zval *VAR_3, int VAR_4) {

    zval VAR_5, VAR_6, *VAR_7;


    FUNC_1(&VAR_5, "EXEC", 4);
    FUNC_4(&VAR_1->function_table, VAR_2, &VAR_5, &VAR_6, 0, ((void*)0));
    FUNC_6(&VAR_5);


    if(FUNC_3(VAR_6) == VAR_0) {
        if(VAR_3) {
                if(VAR_4) {
                    VAR_7 = &VAR_6;
                    FUNC_0(VAR_7, 1, 0);
                } else if ((VAR_7 = FUNC_5(FUNC_2(VAR_6), 0)) != ((void*)0)) {
                    FUNC_0(VAR_7, 1, 0);
                }
        }
    }
    FUNC_6(&VAR_6);



}
