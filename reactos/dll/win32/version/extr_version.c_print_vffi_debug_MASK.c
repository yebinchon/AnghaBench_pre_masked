
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int dwFileType; scalar_t__ dwFileSubtype; int dwFileVersionMS; int dwProductVersionMS; int dwStrucVersion; int dwFileVersionLS; int dwProductVersionLS; int dwFileFlags; int dwFileOS; int dwFileDateMS; int dwFileDateLS; int dwFileFlagsMask; } ;
typedef TYPE_1__ VS_FIXEDFILEINFO ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5(const VS_FIXEDFILEINFO *VAR_8)
{
    BOOL VAR_9 = VAR_0;

    if((VAR_8->dwFileType == 143) || (VAR_8->dwFileType == 142))
    {
        if(VAR_8->dwFileSubtype == 149)

            VAR_9 = VAR_1;
        else if( (VAR_8->dwFileSubtype == 152) &&
                 (VAR_8->dwFileVersionMS != VAR_8->dwProductVersionMS) &&
                 (VAR_8->dwFileVersionMS > 0) &&
                 (VAR_8->dwFileVersionMS <= 3) )

            VAR_9 = VAR_1;
    }

    FUNC_4("structversion=%u.%u, ",
            FUNC_1(VAR_8->dwStrucVersion),FUNC_3(VAR_8->dwStrucVersion));
    if(VAR_9)
    {
        WORD VAR_10 = FUNC_3(VAR_8->dwFileVersionMS);
        WORD VAR_11 = FUNC_1(VAR_8->dwFileVersionLS);
        FUNC_4("fileversion=%u.%u.%u.%u (%s.major.minor.release), ",
            (VAR_8->dwFileVersionMS),
            FUNC_0(VAR_11), FUNC_2(VAR_11), FUNC_3(VAR_8->dwFileVersionLS),
            (VAR_10 == 3) ? "Usermode" : ((VAR_10 <= 2) ? "Kernelmode" : "?") );
    }
    else
    {
        FUNC_4("fileversion=%u.%u.%u.%u, ",
            FUNC_1(VAR_8->dwFileVersionMS),FUNC_3(VAR_8->dwFileVersionMS),
            FUNC_1(VAR_8->dwFileVersionLS),FUNC_3(VAR_8->dwFileVersionLS));
    }
    FUNC_4("productversion=%u.%u.%u.%u\n",
          FUNC_1(VAR_8->dwProductVersionMS),FUNC_3(VAR_8->dwProductVersionMS),
          FUNC_1(VAR_8->dwProductVersionLS),FUNC_3(VAR_8->dwProductVersionLS));

    FUNC_4("flagmask=0x%x, flags=0x%x %s%s%s%s%s%s\n",
          VAR_8->dwFileFlagsMask, VAR_8->dwFileFlags,
          (VAR_8->dwFileFlags & VAR_2) ? "DEBUG," : "",
          (VAR_8->dwFileFlags & VAR_5) ? "PRERELEASE," : "",
          (VAR_8->dwFileFlags & VAR_4) ? "PATCHED," : "",
          (VAR_8->dwFileFlags & VAR_6) ? "PRIVATEBUILD," : "",
          (VAR_8->dwFileFlags & VAR_3) ? "INFOINFERRED," : "",
          (VAR_8->dwFileFlags & VAR_7) ? "SPECIALBUILD," : "");

    FUNC_4("(");

    FUNC_4("OS=0x%x.0x%x ", FUNC_1(VAR_8->dwFileOS), FUNC_3(VAR_8->dwFileOS));

    switch (VAR_8->dwFileOS&0xFFFF0000)
    {
    case 137:FUNC_4("DOS,");break;
    case 135:FUNC_4("OS/2-16,");break;
    case 134:FUNC_4("OS/2-32,");break;
    case 136:FUNC_4("NT,");break;
    case 133:
    default:
        FUNC_4("UNKNOWN(0x%x),",VAR_8->dwFileOS&0xFFFF0000);break;
    }

    switch (FUNC_3(VAR_8->dwFileOS))
    {
    case 132:FUNC_4("BASE");break;
    case 129:FUNC_4("WIN16");break;
    case 128:FUNC_4("WIN32");break;
    case 131:FUNC_4("PM16");break;
    case 130:FUNC_4("PM32");break;
    default:
        FUNC_4("UNKNOWN(0x%x)",FUNC_3(VAR_8->dwFileOS));break;
    }

    FUNC_4(")\n");

    switch (VAR_8->dwFileType)
    {
    case 144:FUNC_4("filetype=APP");break;
    case 143:
        FUNC_4("filetype=DLL");
        if(VAR_8->dwFileSubtype != 0)
        {
            if(VAR_9)
                FUNC_4(",PRINTER");
            FUNC_4(" (subtype=0x%x)", VAR_8->dwFileSubtype);
        }
        break;
    case 142:
        FUNC_4("filetype=DRV,");
        switch(VAR_8->dwFileSubtype)
        {
        case 152:FUNC_4("PRINTER");break;
        case 156:FUNC_4("KEYBOARD");break;
        case 155:FUNC_4("LANGUAGE");break;
        case 159:FUNC_4("DISPLAY");break;
        case 154:FUNC_4("MOUSE");break;
        case 153:FUNC_4("NETWORK");break;
        case 150:FUNC_4("SYSTEM");break;
        case 157:FUNC_4("INSTALLABLE");break;
        case 151:FUNC_4("SOUND");break;
        case 160:FUNC_4("COMM");break;
        case 158:FUNC_4("INPUTMETHOD");break;
        case 149:FUNC_4("VERSIONED_PRINTER");break;
        case 145:
        default:
            FUNC_4("UNKNOWN(0x%x)",VAR_8->dwFileSubtype);break;
        }
        break;
    case 141:
        FUNC_4("filetype=FONT,");
        switch (VAR_8->dwFileSubtype)
        {
        case 148:FUNC_4("RASTER");break;
        case 146:FUNC_4("VECTOR");break;
        case 147:FUNC_4("TRUETYPE");break;
        default:FUNC_4("UNKNOWN(0x%x)",VAR_8->dwFileSubtype);break;
        }
        break;
    case 138:FUNC_4("filetype=VXD");break;
    case 140:FUNC_4("filetype=STATIC_LIB");break;
    case 139:
    default:
        FUNC_4("filetype=Unknown(0x%x)",VAR_8->dwFileType);break;
    }

    FUNC_4("\n");
    FUNC_4("filedate=0x%x.0x%x\n",VAR_8->dwFileDateMS,VAR_8->dwFileDateLS);
}
