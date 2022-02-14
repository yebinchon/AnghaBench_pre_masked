
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * peername; int hostflags; int hosts; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;
typedef int X509 ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,int ,int ,int **) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(X509 *VAR_0, X509_VERIFY_PARAM *VAR_1)
{
    int VAR_2;
    int VAR_3 = FUNC_2(VAR_1->hosts);
    char *VAR_4;

    if (VAR_1->peername != ((void*)0)) {
        FUNC_0(VAR_1->peername);
        VAR_1->peername = ((void*)0);
    }
    for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
        VAR_4 = FUNC_3(VAR_1->hosts, VAR_2);
        if (FUNC_1(VAR_0, VAR_4, 0, VAR_1->hostflags, &VAR_1->peername) > 0)
            return 1;
    }
    return VAR_3 == 0;
}
