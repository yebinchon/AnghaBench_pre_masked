
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int MinVal; int MaxVal; int Self; } ;
typedef TYPE_1__ PROGRESS_INFO ;
typedef int DWORD ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static DWORD FUNC_4 (PROGRESS_INFO *VAR_1, int VAR_2, int VAR_3)
{
    DWORD VAR_4 = FUNC_2(FUNC_1(VAR_1->MinVal), FUNC_1(VAR_1->MaxVal));


    if(VAR_1->MinVal == VAR_2 && VAR_1->MaxVal == VAR_3) return VAR_4;

    VAR_1->MinVal = VAR_2;
    VAR_1->MaxVal = VAR_3;
    FUNC_3(VAR_1);
    FUNC_0(VAR_1->Self, ((void*)0), VAR_0);
    return VAR_4;
}
