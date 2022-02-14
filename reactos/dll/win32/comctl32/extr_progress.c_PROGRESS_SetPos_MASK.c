
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int CurVal; int Self; } ;
typedef TYPE_1__ PROGRESS_INFO ;
typedef int INT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static UINT FUNC_6 (PROGRESS_INFO *VAR_2, INT VAR_3)
{
    DWORD VAR_4 = FUNC_0(VAR_2->Self, VAR_0);

    if (VAR_4 & VAR_1)
    {
        FUNC_3(VAR_2);
        return 1;
    }
    else
    {
        UINT VAR_5;
        VAR_5 = VAR_2->CurVal;
        if (VAR_5 != VAR_3) {
     VAR_2->CurVal = VAR_3;
     FUNC_1(VAR_2);
     FUNC_4("PBM_SETPOS: current pos changed from %d to %d\n", VAR_5, VAR_2->CurVal);
            FUNC_2( VAR_2, VAR_5, VAR_2->CurVal );
            FUNC_5( VAR_2->Self );
        }
        return VAR_5;
    }
}
