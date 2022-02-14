
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mypopen {struct mypopen* next; } ;


 int FUNC_0 (struct mypopen*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mypopen* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void) {
    struct mypopen *VAR_3, *VAR_4;

    if (VAR_1 == 0)
        return;

    FUNC_1(&VAR_0);
    for (VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_4) {
        VAR_4 = VAR_3->next;
        FUNC_0(VAR_3);
    }

    VAR_2 = ((void*)0);
    VAR_1 = 0;
    FUNC_2(&VAR_0);
}
