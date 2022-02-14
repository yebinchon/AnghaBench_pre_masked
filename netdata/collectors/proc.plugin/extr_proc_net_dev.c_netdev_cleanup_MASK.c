
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev {struct netdev* next; scalar_t__ updated; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct netdev*) ;
 struct netdev* VAR_2 ;
 struct netdev* VAR_3 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3() {
    if(FUNC_0(VAR_1 == VAR_0)) return;

    VAR_0 = 0;
    struct netdev *VAR_4 = VAR_3, *VAR_5 = ((void*)0);
    while(VAR_4) {
        if(FUNC_2(!VAR_4->updated)) {


            if(VAR_2 == VAR_4)
                VAR_2 = VAR_5;

            struct netdev *VAR_6 = VAR_4;

            if(VAR_4 == VAR_3 || !VAR_5)
                VAR_3 = VAR_4 = VAR_4->next;

            else
                VAR_5->next = VAR_4 = VAR_4->next;

            VAR_6->next = ((void*)0);
            FUNC_1(VAR_6);
        }
        else {
            VAR_0++;
            VAR_5 = VAR_4;
            VAR_4->updated = 0;
            VAR_4 = VAR_4->next;
        }
    }
}
