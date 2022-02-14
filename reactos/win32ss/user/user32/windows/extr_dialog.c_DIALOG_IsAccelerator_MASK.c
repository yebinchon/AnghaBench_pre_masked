
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef char WPARAM ;
typedef char WCHAR ;
typedef char* LPWSTR ;
typedef int INT ;
typedef scalar_t__ HWND ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int) ;
 int FUNC_4 (scalar_t__,int ,char,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char) ;

__attribute__((used)) static BOOL FUNC_7( HWND VAR_13, HWND VAR_14, WPARAM VAR_15 )
{
    HWND VAR_16 = VAR_13;
    HWND VAR_17;
    INT VAR_18;
    WCHAR VAR_19[128];

    do
    {
        DWORD VAR_20 = FUNC_2( VAR_16, VAR_5 );
        if ((VAR_20 & (VAR_12 | VAR_11)) == VAR_12)
        {
            VAR_18 = FUNC_4( VAR_16, VAR_9, 0, 0 );
            if ( (VAR_18 & (VAR_2 | VAR_3)) &&
                 FUNC_3( VAR_16, VAR_19, sizeof(VAR_19)/sizeof(WCHAR) ))
            {

                LPWSTR VAR_21 = VAR_19 - 2;

                do
                {
                    VAR_21 = FUNC_5( VAR_21 + 2, '&' );
                }
                while (VAR_21 != ((void*)0) && VAR_21[1] == '&');


                if (VAR_21 != ((void*)0) && FUNC_6( VAR_21[1] ) == FUNC_6( VAR_15 ) )
                {
                    if ((VAR_18 & VAR_3) || (VAR_20 & 0x0f) == VAR_1 )
                    {

                        FUNC_4( VAR_14, VAR_10, (WPARAM)VAR_16, 1);

                        FUNC_4( VAR_14, VAR_10, 0, 0);
                    }
                    else if (VAR_18 & VAR_2)
                    {

                        FUNC_4( VAR_16, VAR_0, 0, 0 );
                    }
                    return VAR_8;
                }
            }
            VAR_17 = FUNC_1( VAR_16, VAR_6 );
        }
        else VAR_17 = 0;

        if (!VAR_17) VAR_17 = FUNC_1( VAR_16, VAR_7 );

        while (!VAR_17 && VAR_16)
        {
            VAR_16 = FUNC_0( VAR_16 );
            if (VAR_16 == VAR_14)
            {
                if(VAR_13==VAR_14)
                {
                    VAR_17=VAR_13;
                    break;
                }
                VAR_17 = FUNC_1( VAR_14, VAR_6 );
            }
            else
                VAR_17 = FUNC_1( VAR_16, VAR_7 );
        }
        VAR_16 = VAR_17;
    }
    while (VAR_16 && (VAR_16 != VAR_13));

    return VAR_4;
}
