
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* suffix; int type; } ;
typedef int BIO ;


 int FUNC_0 (int *,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;

 int FUNC_3 (int ) ;
 int VAR_0 ;

 int * VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

void FUNC_7(int VAR_4, BIO * VAR_5)
{

    char *VAR_6 = ((void*)0);

    VAR_4 = FUNC_5(VAR_4);
    VAR_6 = VAR_2[VAR_4].suffix;
    if (VAR_5 != ((void*)0)
        && FUNC_4(VAR_5 == VAR_1)) {
        (void)FUNC_1(VAR_5);
        switch (VAR_2[VAR_4].type) {
        case 128:
            if (VAR_6 != ((void*)0)) {
                (void)FUNC_2(VAR_5, VAR_6);
                (void)FUNC_2(VAR_5, "\n");
            }
            break;
        case 129:
            (void)FUNC_0(VAR_5, VAR_0,
                           VAR_6 == ((void*)0) ? 0 : FUNC_6(VAR_6), VAR_6);
            break;
        }
        VAR_1 = ((void*)0);
        FUNC_3(VAR_3);
    }

}
