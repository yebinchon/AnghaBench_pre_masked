
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* prefix; int type; int * bio; } ;
typedef int BIO ;


 int FUNC_0 (int *,int ,int ,char*) ;
 int FUNC_1 (int *,char*) ;

 int FUNC_2 (int ) ;
 int VAR_0 ;

 int * VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

BIO *FUNC_5(int VAR_4)
{
    BIO *VAR_5 = ((void*)0);

    char *VAR_6 = ((void*)0);

    VAR_4 = FUNC_3(VAR_4);
    if (VAR_4 < 0)
        return ((void*)0);

    VAR_5 = VAR_2[VAR_4].bio;
    VAR_6 = VAR_2[VAR_4].prefix;

    if (VAR_5 != ((void*)0)) {
        FUNC_2(VAR_3);
        VAR_1 = VAR_5;
        switch (VAR_2[VAR_4].type) {
        case 128:
            if (VAR_6 != ((void*)0)) {
                (void)FUNC_1(VAR_5, VAR_6);
                (void)FUNC_1(VAR_5, "\n");
            }
            break;
        case 129:
            (void)FUNC_0(VAR_5, VAR_0,
                           VAR_6 == ((void*)0) ? 0 : FUNC_4(VAR_6), VAR_6);
            break;
        }
    }

    return VAR_5;
}
