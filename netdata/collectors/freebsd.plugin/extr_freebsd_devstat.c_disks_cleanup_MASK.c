
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk {struct disk* next; scalar_t__ updated; } ;


 int FUNC_0 (struct disk*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct disk* VAR_2 ;
 struct disk* VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3() {
    if (FUNC_1(VAR_1 == VAR_0)) return;

    struct disk *VAR_4 = VAR_3, *VAR_5 = ((void*)0);
    while(VAR_4) {
        if (FUNC_2(!VAR_4->updated)) {


            if (VAR_2 == VAR_4)
                VAR_2 = VAR_5;

            struct disk *VAR_6 = VAR_4;

            if (VAR_4 == VAR_3 || !VAR_5)
                VAR_3 = VAR_4 = VAR_4->next;

            else
                VAR_5->next = VAR_4 = VAR_4->next;

            VAR_6->next = ((void*)0);
            FUNC_0(VAR_6);
        }
        else {
            VAR_5 = VAR_4;
            VAR_4->updated = 0;
            VAR_4 = VAR_4->next;
        }
    }
}
