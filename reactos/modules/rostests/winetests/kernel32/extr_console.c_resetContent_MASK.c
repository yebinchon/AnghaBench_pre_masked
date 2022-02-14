
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_6__ {scalar_t__ X; scalar_t__ Y; } ;
typedef int HANDLE ;
typedef int DWORD ;
typedef TYPE_1__ COORD ;
typedef scalar_t__ BOOL ;


 char FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int,TYPE_1__,int *) ;
 int FUNC_2 (int ,char*,int,TYPE_1__,int *) ;

__attribute__((used)) static void FUNC_3(HANDLE VAR_1, COORD VAR_2, BOOL VAR_3)
{
    COORD VAR_4;
    WORD VAR_5 = VAR_0;
    char VAR_6;
    DWORD VAR_7;

    for (VAR_4.X = 0; VAR_4.X < VAR_2.X; VAR_4.X++)
    {
        for (VAR_4.Y = 0; VAR_4.Y < VAR_2.Y; VAR_4.Y++)
        {
            VAR_6 = (VAR_3) ? FUNC_0(VAR_4) : ' ';
            FUNC_1(VAR_1, &VAR_5, 1, VAR_4, &VAR_7);
            FUNC_2(VAR_1, &VAR_6, 1, VAR_4, &VAR_7);
        }
    }
}
