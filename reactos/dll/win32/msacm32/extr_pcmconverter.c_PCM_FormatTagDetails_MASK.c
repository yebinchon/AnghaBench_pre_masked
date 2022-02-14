
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwFormatTagIndex; int cbFormatSize; scalar_t__* szFormatTag; int cStandardFormats; int fdwSupport; int dwFormatTag; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_1__* PACMFORMATTAGDETAILSW ;
typedef int LRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,TYPE_1__*,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static LRESULT FUNC_3(PACMFORMATTAGDETAILSW VAR_7, DWORD VAR_8)
{
    FUNC_1("(%p, %08x)\n", VAR_7, VAR_8);

    switch (VAR_8) {
    case 129:
 if (VAR_7->dwFormatTagIndex != 0) {
            FUNC_2("not possible\n");
            return VAR_1;
        }
 break;
    case 130:
 if (VAR_7->dwFormatTag != VAR_5) {
            FUNC_2("not possible\n");
            return VAR_1;
        }
 break;
    case 128:
 if (VAR_7->dwFormatTag != VAR_6 &&
     VAR_7->dwFormatTag != VAR_5) {
            FUNC_2("not possible\n");
     return VAR_1;
        }
 break;
    default:
 FUNC_2("Unsupported query %08x\n", VAR_8);
 return VAR_3;
    }

    VAR_7->dwFormatTagIndex = 0;
    VAR_7->dwFormatTag = VAR_5;
    VAR_7->cbFormatSize = sizeof(PCMWAVEFORMAT);
    VAR_7->fdwSupport = VAR_0;
    VAR_7->cStandardFormats = FUNC_0(VAR_4);
    VAR_7->szFormatTag[0] = 0;

    return VAR_2;
}
