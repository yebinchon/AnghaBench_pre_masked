
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tm {int tm_wday; int tm_yday; } ;
typedef int d ;
struct TYPE_2__ {int wd; int yd; int d; int m; int y; } ;
typedef int ASN1_TIME ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct tm*) ;
 int FUNC_4 (char*,int,char*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_8(int VAR_1)
{
    char VAR_2[16];
    ASN1_TIME *VAR_3 = ((void*)0);
    struct tm VAR_4;
    int VAR_5;

    FUNC_4(VAR_2, sizeof(VAR_2), "%04d%02d%02d050505Z",
                 VAR_0[VAR_1].y, VAR_0[VAR_1].m,
                 VAR_0[VAR_1].d);

    if (!FUNC_6(VAR_3 = FUNC_1()))
        return 0;

    VAR_5 = FUNC_7(FUNC_2(VAR_3, VAR_2))
        && FUNC_7(FUNC_3(VAR_3, &VAR_4))
        && FUNC_5(VAR_4.tm_yday, VAR_0[VAR_1].yd)
        && FUNC_5(VAR_4.tm_wday, VAR_0[VAR_1].wd);

    FUNC_0(VAR_3);
    return VAR_5;
}
