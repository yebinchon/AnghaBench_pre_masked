
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expect; int path; } ;
typedef int LPWSTR ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    BOOL VAR_1;
    int VAR_2, VAR_3;
    LPWSTR VAR_4;

    if (!&FUNC_4) {
        FUNC_5("PathIsRelativeW not available\n");
        return;
    }

    VAR_3 = FUNC_0(VAR_0);
    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
        VAR_4 = FUNC_2(VAR_0[VAR_2].path);

        VAR_1 = FUNC_4(VAR_4);
        FUNC_3(VAR_1 == VAR_0[VAR_2].expect,
          "PathIsRelativeW(\"%s\") expects %d, got %d.\n",
          VAR_0[VAR_2].path, VAR_0[VAR_2].expect, VAR_1);

        FUNC_1(VAR_4);
    }
}
