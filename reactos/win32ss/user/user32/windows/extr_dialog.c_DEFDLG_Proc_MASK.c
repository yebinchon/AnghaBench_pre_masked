
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_6__ {int flags; int hUserFont; int idResult; int hMenu; } ;
typedef int RECT ;
typedef int LRESULT ;
typedef int LPPOINT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int DWORD ;
typedef TYPE_1__ DIALOGINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;



 int FUNC_8 (int ,int ,int) ;
 int VAR_5 ;
 int FUNC_9 (int ,int,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 int FUNC_12 (int ,int *,int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 (int ,int ,TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int ,int ,int ) ;
 int FUNC_27 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_28 (int ,int ,int ) ;
 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
__attribute__((used)) static LRESULT FUNC_29( HWND VAR_11, UINT VAR_12, WPARAM VAR_13,
                            LPARAM VAR_14, DIALOGINFO *VAR_15 )
{
    switch(VAR_12)
    {
        case 135:
        {
            HBRUSH VAR_16 = FUNC_14( VAR_11, VAR_11, (HDC)VAR_13, VAR_10);
            if (VAR_16)
            {
                RECT VAR_17;
                HDC VAR_18 = (HDC)VAR_13;
                FUNC_13( VAR_11, &VAR_17 );
                FUNC_8( VAR_18, (LPPOINT)&VAR_17, 2 );
                FUNC_12( VAR_18, &VAR_17, VAR_16 );
            }
            return 1;
        }
        case 132:

            if ((VAR_15 = (DIALOGINFO *)FUNC_28( VAR_11, VAR_5, 0 )))
            {
                if (VAR_15->hUserFont) FUNC_10( VAR_15->hUserFont );
                if (VAR_15->hMenu) FUNC_11( VAR_15->hMenu );
                FUNC_21( FUNC_20(), 0, VAR_15 );
                FUNC_24(0,VAR_3);
                FUNC_25( VAR_11, 0 );
            }

            return FUNC_9( VAR_11, VAR_12, VAR_13, VAR_14 );

        case 128:
            if (!VAR_13) FUNC_3( VAR_11 );
            return FUNC_9( VAR_11, VAR_12, VAR_13, VAR_14 );

        case 138:
            {
               DWORD VAR_19;
               HWND VAR_20 = FUNC_7( VAR_11 );

               VAR_19 = VAR_13 ? VAR_3 : 0;
               if (VAR_20 != VAR_11) FUNC_24(VAR_19, VAR_3);
            }
            if (VAR_13) FUNC_2( VAR_11, VAR_8 );
            else FUNC_3( VAR_11 );
            return 0;

        case 129:
            FUNC_2( VAR_11, VAR_6 );
            return 0;

        case 139:
            if (VAR_15 && !(VAR_15->flags & VAR_4))
                FUNC_5( VAR_11, VAR_15, VAR_13 );
            return 1;

        case 141:
            if (VAR_15 && !(VAR_15->flags & VAR_4))
            {
                HWND VAR_21;
                if (VAR_15->idResult)
                    return FUNC_22( VAR_15->idResult, VAR_2 );
                if ((VAR_21 = FUNC_0( VAR_11 )))
                    return FUNC_22( FUNC_15( VAR_21 ), VAR_2);
            }
            return 0;






        case 130:
            if (VAR_15)
            {
                HWND VAR_22 = (HWND)VAR_13;
                if (!VAR_14)
                    VAR_22 = FUNC_18(VAR_11, FUNC_17(), VAR_13);
                if (VAR_22) FUNC_6( VAR_22 );
                FUNC_4( VAR_11, VAR_15, VAR_22 );
            }
            return 0;

        case 136:
        case 133:
        case 131:
            {
                HWND VAR_23 = FUNC_17();
                if (VAR_23)
                {

                    if (!FUNC_27( VAR_23, VAR_1, VAR_6, 0 ))
                        FUNC_27( FUNC_19(VAR_23), VAR_1, VAR_6, 0 );
                }
            }
            return FUNC_9( VAR_11, VAR_12, VAR_13, VAR_14 );

        case 134:
            return VAR_15 ? (LRESULT)VAR_15->hUserFont : 0;

        case 137:
            FUNC_26( VAR_11, VAR_9, FUNC_23(VAR_7, VAR_0),
                            (LPARAM)FUNC_16( VAR_11, VAR_7 ) );
            return 0;
    }
    return 0;
}
