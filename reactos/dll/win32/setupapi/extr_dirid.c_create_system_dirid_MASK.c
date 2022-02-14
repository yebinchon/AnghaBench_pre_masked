
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef char WCHAR ;
typedef int LPBYTE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char const*,char*,int ) ;
 int FUNC_2 (int *,int *,int,int ,int,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 char* FUNC_6 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;
 char const* FUNC_8 (int ) ;
 char const* FUNC_9 () ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static const WCHAR *FUNC_13( int VAR_2 )
{
    static const WCHAR VAR_3[] = {0};
    static const WCHAR VAR_4[] = {'C',':','\\',0};
    static const WCHAR VAR_5[] = {'\\','d','r','i','v','e','r','s',0};
    static const WCHAR VAR_6[] = {'\\','i','n','f',0};
    static const WCHAR VAR_7[] = {'\\','h','e','l','p',0};
    static const WCHAR VAR_8[] = {'\\','f','o','n','t','s',0};
    static const WCHAR VAR_9[] = {'\\','v','i','e','w','e','r','s',0};
    static const WCHAR VAR_10[] = {'\\','s','y','s','t','e','m',0};
    static const WCHAR VAR_11[] = {'\\','s','p','o','o','l',0};
    static const WCHAR VAR_12[] = {'U','S','E','R','P','R','O','F','I','L','E',0};

    WCHAR VAR_13[VAR_1+32], *VAR_14;
    int VAR_15;
    DWORD VAR_16;

    switch(VAR_2)
    {
    case 137:
        return VAR_3;
    case 128:
        FUNC_5( VAR_13, VAR_1 );
        break;
    case 132:
        FUNC_4( VAR_13, VAR_1 );
        break;
    case 142:
        FUNC_4( VAR_13, VAR_1 );
        FUNC_11( VAR_13, VAR_5 );
        break;
    case 139:
        FUNC_5( VAR_13, VAR_1 );
        FUNC_11( VAR_13, VAR_6 );
        break;
    case 140:
        FUNC_5( VAR_13, VAR_1 );
        FUNC_11( VAR_13, VAR_7 );
        break;
    case 141:
        FUNC_5( VAR_13, VAR_1 );
        FUNC_11( VAR_13, VAR_8 );
        break;
    case 129:
        FUNC_4( VAR_13, VAR_1 );
        FUNC_11( VAR_13, VAR_9 );
        break;
    case 145:
        return VAR_4;
    case 135:
        FUNC_5( VAR_13, VAR_1 );
        break;
    case 144:
        return VAR_4;
    case 131:
        FUNC_5( VAR_13, VAR_1 );
        FUNC_11( VAR_13, VAR_10 );
        break;
    case 134:
    case 133:
        FUNC_5( VAR_13, VAR_1 );
        FUNC_11( VAR_13, VAR_11 );
        break;
    case 130:
        if (FUNC_1( VAR_12, VAR_13, VAR_1 )) break;
        return FUNC_8(VAR_0);
    case 138:
        return VAR_4;
    case 136:
        if (!FUNC_2(((void*)0), ((void*)0), 1, (LPBYTE)VAR_13, sizeof(VAR_13), &VAR_16))
        {
            FUNC_7( "cannot retrieve print processor directory\n" );
            return FUNC_9();
        }
        break;
    case 143:
    default:
        FUNC_0( "unknown dirid %d\n", VAR_2 );
        return FUNC_9();
    }
    VAR_15 = (FUNC_12(VAR_13) + 1) * sizeof(WCHAR);
    if ((VAR_14 = FUNC_6( FUNC_3(), 0, VAR_15 ))) FUNC_10( VAR_14, VAR_13, VAR_15 );
    return VAR_14;
}
