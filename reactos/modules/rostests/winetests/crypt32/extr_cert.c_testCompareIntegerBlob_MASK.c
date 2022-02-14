
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ areEqual; int blob2; int blob1; } ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int,char*,size_t,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    DWORD VAR_1;
    BOOL VAR_2;

    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++)
    {
        VAR_2 = FUNC_1(&VAR_0[VAR_1].blob1, &VAR_0[VAR_1].blob2);
        FUNC_2(VAR_2 == VAR_0[VAR_1].areEqual,
         "%d: expected blobs %s compare\n", VAR_1, VAR_0[VAR_1].areEqual ?
         "to" : "not to");
    }
}
