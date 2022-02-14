
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
typedef int WAVEFORMATEX ;
struct TYPE_3__ {int dwFormatTagIndex; int dwFormatTag; int cbFormatSize; int szFormatTag; void* cStandardFormats; int fdwSupport; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_1__* PACMFORMATTAGDETAILSW ;
typedef int LRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int) ;



 int VAR_7 ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static LRESULT FUNC_3(PACMFORMATTAGDETAILSW VAR_8, DWORD VAR_9)
{
    static const WCHAR VAR_10[]={'P','C','M',0};
    static const WCHAR VAR_11[]={'A','-','L','a','w',0};
    static const WCHAR VAR_12[]={'U','-','L','a','w',0};

    switch (VAR_9)
    {
    case 132:
 if (VAR_8->dwFormatTagIndex >= 3) return VAR_1;
 break;
    case 131:
 if (VAR_8->dwFormatTag == VAR_7)
        {
            VAR_8->dwFormatTagIndex = 1;
     break;
 }

    case 133:
 switch (VAR_8->dwFormatTag)
        {
 case 128: VAR_8->dwFormatTagIndex = 0; break;
 case 130: VAR_8->dwFormatTagIndex = 1; break;
 case 129: VAR_8->dwFormatTagIndex = 2; break;
 default: return VAR_1;
 }
 break;
    default:
 FUNC_1("Unsupported query %08x\n", VAR_9);
 return VAR_4;
    }

    VAR_8->fdwSupport = VAR_0;
    switch (VAR_8->dwFormatTagIndex)
    {
    case 0:
 VAR_8->dwFormatTag = 128;
 VAR_8->cbFormatSize = sizeof(PCMWAVEFORMAT);
 VAR_8->cStandardFormats = FUNC_0(VAR_5);
        FUNC_2(VAR_8->szFormatTag, VAR_10);
        break;
    case 1:
 VAR_8->dwFormatTag = 130;
 VAR_8->cbFormatSize = sizeof(WAVEFORMATEX);
 VAR_8->cStandardFormats = FUNC_0(VAR_2);
        FUNC_2(VAR_8->szFormatTag, VAR_11);
 break;
    case 2:
 VAR_8->dwFormatTag = 129;
 VAR_8->cbFormatSize = sizeof(WAVEFORMATEX);
 VAR_8->cStandardFormats = FUNC_0(VAR_6);
        FUNC_2(VAR_8->szFormatTag, VAR_12);
 break;
    }
    return VAR_3;
}
