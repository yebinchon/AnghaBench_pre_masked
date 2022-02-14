
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {int Sid; } ;
struct TYPE_7__ {TYPE_1__ User; } ;
typedef TYPE_2__ TOKEN_USER ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ,TYPE_2__*,int,int*) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static WCHAR *FUNC_8(void)
{
    HANDLE VAR_3;
    DWORD VAR_4 = 256;
    TOKEN_USER *VAR_5;
    WCHAR *VAR_6;

    if (!FUNC_5( FUNC_2(), VAR_1, &VAR_3 )) return ((void*)0);
    if (!(VAR_5 = FUNC_6( VAR_4 )))
    {
        FUNC_0( VAR_3 );
        return ((void*)0);
    }
    if (!FUNC_4( VAR_3, VAR_2, VAR_5, VAR_4, &VAR_4 ))
    {
        FUNC_7( VAR_5 );
        if (FUNC_3() != VAR_0 || !(VAR_5 = FUNC_6( VAR_4 )))
        {
            FUNC_0( VAR_3 );
            return ((void*)0);
        }
        FUNC_4( VAR_3, VAR_2, VAR_5, VAR_4, &VAR_4 );
    }
    FUNC_0( VAR_3 );
    if (!FUNC_1( VAR_5->User.Sid, &VAR_6 ))
    {
        FUNC_7( VAR_5 );
        return ((void*)0);
    }
    FUNC_7( VAR_5 );
    return VAR_6;
}
