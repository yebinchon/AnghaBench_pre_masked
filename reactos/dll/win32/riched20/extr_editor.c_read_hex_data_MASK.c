
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rtfClass; int rtfMajor; } ;
typedef TYPE_1__ RTF_Info ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int*) ;
 int* FUNC_5 (int ,int ,int*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static DWORD FUNC_8( RTF_Info *VAR_3, BYTE **VAR_4 )
{
    DWORD VAR_5 = 0, VAR_6 = 1024;
    BYTE *VAR_7, VAR_8;
    BOOL VAR_9;

    *VAR_4 = ((void*)0);

    if (VAR_3->rtfClass != VAR_2)
    {
        FUNC_0("Called with incorrect token\n");
        return 0;
    }

    VAR_7 = FUNC_3( FUNC_2(), 0, VAR_6 );
    if (!VAR_7) return 0;

    VAR_8 = VAR_3->rtfMajor;
    for (VAR_9 = VAR_0;; VAR_9 = !VAR_9)
    {
        FUNC_7( VAR_3 );
        if (VAR_3->rtfClass == VAR_1)
        {
            FUNC_4( FUNC_2(), 0, VAR_7 );
            return 0;
        }
        if (VAR_3->rtfClass != VAR_2) break;
        if (VAR_9)
        {
            if (VAR_5 >= VAR_6)
            {
                VAR_6 *= 2;
                VAR_7 = FUNC_5( FUNC_2(), 0, VAR_7, VAR_6 );
                if (!VAR_7) return 0;
            }
            VAR_7[VAR_5++] = FUNC_6(VAR_8) * 16 + FUNC_6(VAR_3->rtfMajor);
        }
        else
            VAR_8 = VAR_3->rtfMajor;
    }
    if (VAR_9) FUNC_1("wrong hex string\n");

    *VAR_4 = VAR_7;
    return VAR_5;
}
