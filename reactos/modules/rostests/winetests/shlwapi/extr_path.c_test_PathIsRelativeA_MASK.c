
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expect; int path; } ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    BOOL VAR_1;
    int VAR_2, VAR_3;

    if (!&FUNC_2) {
        FUNC_3("PathIsRelativeA not available\n");
        return;
    }

    VAR_3 = FUNC_0(VAR_0);
    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
        VAR_1 = FUNC_2(VAR_0[VAR_2].path);
        FUNC_1(VAR_1 == VAR_0[VAR_2].expect,
          "PathIsRelativeA(\"%s\") expects %d, got %d.\n",
          VAR_0[VAR_2].path, VAR_0[VAR_2].expect, VAR_1);
    }
}
