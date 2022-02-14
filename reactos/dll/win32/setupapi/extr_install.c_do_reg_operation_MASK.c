
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dw ;
typedef scalar_t__ const WCHAR ;
typedef int INT ;
typedef int INFCONTEXT ;
typedef int HKEY ;
typedef int DWORD ;
typedef scalar_t__ const BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 () ;
 scalar_t__ const* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__ const*) ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int ,scalar_t__ const*) ;
 int FUNC_5 (int ,scalar_t__ const*,int *,int *,int *,int *) ;
 int FUNC_6 (int ,scalar_t__ const*,int ,int,scalar_t__ const*,int) ;
 int FUNC_7 (int *,int,scalar_t__ const*,int,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,scalar_t__ const*,int,int*) ;
 int FUNC_10 (int *,int,scalar_t__ const*,int,int*) ;
 int FUNC_11 (char*,int,int) ;
 int VAR_18 ;
 int FUNC_12 (int ,scalar_t__ const*,scalar_t__ const*,int) ;
 int FUNC_13 (scalar_t__ const*) ;
 int FUNC_14 (int ,scalar_t__ const*,scalar_t__ const*) ;
 int FUNC_15 (scalar_t__ const*,int *,int ) ;

__attribute__((used)) static BOOL FUNC_16( HKEY VAR_19, const WCHAR *VAR_20, INFCONTEXT *VAR_21, INT VAR_22 )
{
    DWORD VAR_23, VAR_24;

    if (VAR_22 & (VAR_3 | VAR_4))
    {
        if (*VAR_20 && !(VAR_22 & VAR_10))
        {
            if ((VAR_22 & VAR_11) == VAR_11)
            {
                WCHAR *VAR_25;

                if (!FUNC_10( VAR_21, 5, ((void*)0), 0, &VAR_24 ) || !VAR_24) return VAR_18;
                if (!(VAR_25 = FUNC_1( FUNC_0(), 0, VAR_24 * sizeof(WCHAR) ))) return VAR_0;
                FUNC_10( VAR_21, 5, VAR_25, VAR_24, ((void*)0) );
                FUNC_14( VAR_19, VAR_20, VAR_25 );
                FUNC_2( FUNC_0(), 0, VAR_25 );
            }
            else FUNC_4( VAR_19, VAR_20 );
        }
        else FUNC_3( VAR_19 );
        return VAR_18;
    }

    if (VAR_22 & (VAR_5|VAR_6)) return VAR_18;

    if (VAR_22 & (VAR_7|VAR_8))
    {
        BOOL VAR_26 = !FUNC_5( VAR_19, VAR_20, ((void*)0), ((void*)0), ((void*)0), ((void*)0) );
        if (VAR_26 && (VAR_22 & VAR_7)) return VAR_18;
        if (!VAR_26 && (VAR_22 & VAR_8)) return VAR_18;
    }

    switch(VAR_22 & VAR_9)
    {
    case 128: VAR_23 = VAR_17; break;
    case 130: VAR_23 = VAR_15; break;
    case 131: VAR_23 = VAR_14; break;
    case 133: VAR_23 = VAR_12; break;
    case 132: VAR_23 = VAR_13; break;
    case 129: VAR_23 = VAR_16; break;
    default: VAR_23 = VAR_22 >> 16; break;
    }

    if (!(VAR_22 & VAR_2) ||
        (VAR_23 == VAR_13 && FUNC_8(VAR_21) == 5))
    {
        static const WCHAR VAR_27;
        WCHAR *VAR_28 = ((void*)0);

        if (VAR_23 == VAR_15)
        {
            if (!FUNC_9( VAR_21, 5, ((void*)0), 0, &VAR_24 )) VAR_24 = 0;
            if (VAR_24)
            {
                if (!(VAR_28 = FUNC_1( FUNC_0(), 0, VAR_24 * sizeof(WCHAR) ))) return VAR_0;
                FUNC_9( VAR_21, 5, VAR_28, VAR_24, ((void*)0) );
            }
            if (VAR_22 & VAR_1)
            {
                if (!VAR_28) return VAR_18;
                FUNC_12( VAR_19, VAR_20, VAR_28, VAR_24 );
                FUNC_2( FUNC_0(), 0, VAR_28 );
                return VAR_18;
            }

        }
        else
        {
            if (!FUNC_10( VAR_21, 5, ((void*)0), 0, &VAR_24 )) VAR_24 = 0;
            if (VAR_24)
            {
                if (!(VAR_28 = FUNC_1( FUNC_0(), 0, VAR_24 * sizeof(WCHAR) ))) return VAR_0;
                FUNC_10( VAR_21, 5, VAR_28, VAR_24, ((void*)0) );
            }
        }

        if (VAR_23 == VAR_13)
        {
            DWORD VAR_29 = VAR_28 ? FUNC_15( VAR_28, ((void*)0), 0 ) : 0;
            FUNC_11( "setting dword %s to %x\n", FUNC_13(VAR_20), VAR_29 );
            FUNC_6( VAR_19, VAR_20, 0, VAR_23, (BYTE *)&VAR_29, sizeof(VAR_29) );
        }
        else
        {
            FUNC_11( "setting value %s to %s\n", FUNC_13(VAR_20), FUNC_13(VAR_28) );
            if (VAR_28) FUNC_6( VAR_19, VAR_20, 0, VAR_23, (BYTE *)VAR_28, VAR_24 * sizeof(WCHAR) );
            else FUNC_6( VAR_19, VAR_20, 0, VAR_23, (const BYTE *)&VAR_27, sizeof(WCHAR) );
        }
        FUNC_2( FUNC_0(), 0, VAR_28 );
        return VAR_18;
    }
    else
    {
        BYTE *VAR_30 = ((void*)0);

        if (!FUNC_7( VAR_21, 5, ((void*)0), 0, &VAR_24 )) VAR_24 = 0;
        if (VAR_24)
        {
            if (!(VAR_30 = FUNC_1( FUNC_0(), 0, VAR_24 ))) return VAR_0;
            FUNC_11( "setting binary data %s len %d\n", FUNC_13(VAR_20), VAR_24 );
            FUNC_7( VAR_21, 5, VAR_30, VAR_24, ((void*)0) );
        }
        FUNC_6( VAR_19, VAR_20, 0, VAR_23, VAR_30, VAR_24 );
        FUNC_2( FUNC_0(), 0, VAR_30 );
        return VAR_18;
    }
}
