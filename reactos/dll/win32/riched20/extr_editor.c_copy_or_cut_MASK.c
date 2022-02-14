
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int styleFlags; int * pCursors; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int ME_Cursor ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (TYPE_1__*,int*,int*) ;
 int FUNC_3 (TYPE_1__*,int *,int,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_6(ME_TextEditor *VAR_4, BOOL VAR_5)
{
    BOOL VAR_6;
    int VAR_7, VAR_8;
    int VAR_9 = FUNC_2(VAR_4, &VAR_7, &VAR_8);
    ME_Cursor *VAR_10 = &VAR_4->pCursors[VAR_9];

    if (VAR_5 && (VAR_4->styleFlags & VAR_0))
    {
        FUNC_5(VAR_2);
        return VAR_1;
    }

    VAR_8 -= VAR_7;
    VAR_6 = FUNC_1(VAR_4, VAR_10, VAR_8);
    if (VAR_6 && VAR_5)
    {
        FUNC_3(VAR_4, VAR_10, VAR_8, VAR_1);
        FUNC_0(VAR_4);
        FUNC_4(VAR_4, VAR_3);
    }
    return VAR_6;
}
