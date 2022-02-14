
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expect; int path; } ;
typedef scalar_t__ BOOL ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int,char*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
    size_t VAR_1;
    BOOL VAR_2;

    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
        VAR_2 = FUNC_1(VAR_0[VAR_1].path);
        FUNC_2(VAR_2 == VAR_0[VAR_1].expect,
           "returned %d from path %s, expected %d\n", VAR_2, VAR_0[VAR_1].path,
           VAR_0[VAR_1].expect);
    }
}
