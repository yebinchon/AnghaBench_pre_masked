
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_3__ {int type; } ;
typedef int GENERAL_NAMES ;
typedef TYPE_1__ GENERAL_NAME ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ,int *,int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(X509 *VAR_1, int VAR_2)
{
    int VAR_3;
    int VAR_4 = 0;
    GENERAL_NAMES *VAR_5 = FUNC_1(VAR_1, VAR_0, ((void*)0), ((void*)0));

    if (VAR_5 == ((void*)0))
        return 0;

    for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_5); VAR_3++) {
        GENERAL_NAME *VAR_6 = FUNC_3(VAR_5, VAR_3);

        if (VAR_6->type == VAR_2) {
            VAR_4 = 1;
            break;
        }
    }
    FUNC_0(VAR_5);
    return VAR_4;
}
