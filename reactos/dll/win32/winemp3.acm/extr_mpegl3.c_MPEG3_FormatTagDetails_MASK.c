
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int dwFormatTagIndex; int dwFormatTag; int cbFormatSize; int szFormatTag; int cStandardFormats; int fdwSupport; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_1__* PACMFORMATTAGDETAILSW ;
typedef int MPEGLAYER3WAVEFORMAT ;
typedef int MPEG1WAVEFORMAT ;
typedef int LRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;



 int VAR_5 ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static LRESULT FUNC_2(PACMFORMATTAGDETAILSW VAR_6, DWORD VAR_7)
{
    static const WCHAR VAR_8[]={'P','C','M',0};
    static const WCHAR VAR_9[]={'M','P','e','g','3',0};
    static const WCHAR VAR_10[]={'M','P','e','g',0};

    switch (VAR_7)
    {
    case 132:
 if (VAR_6->dwFormatTagIndex > 2) return VAR_1;
 break;
    case 131:
 if (VAR_6->dwFormatTag == VAR_5)
        {
            VAR_6->dwFormatTagIndex = 2;
     break;
 }

    case 133:
 switch (VAR_6->dwFormatTag)
        {
 case 128: VAR_6->dwFormatTagIndex = 0; break;
 case 129: VAR_6->dwFormatTagIndex = 1; break;
 case 130: VAR_6->dwFormatTagIndex = 2; break;
 default: return VAR_1;
 }
 break;
    default:
 FUNC_0("Unsupported query %08x\n", VAR_7);
 return VAR_3;
    }

    VAR_6->fdwSupport = VAR_0;
    switch (VAR_6->dwFormatTagIndex)
    {
    case 0:
 VAR_6->dwFormatTag = 128;
 VAR_6->cbFormatSize = sizeof(PCMWAVEFORMAT);
 VAR_6->cStandardFormats = VAR_4;
        FUNC_1(VAR_6->szFormatTag, VAR_8);
        break;
    case 1:
 VAR_6->dwFormatTag = 129;
 VAR_6->cbFormatSize = sizeof(MPEGLAYER3WAVEFORMAT);
        VAR_6->cStandardFormats = 0;
        FUNC_1(VAR_6->szFormatTag, VAR_9);
 break;
    case 2:
 VAR_6->dwFormatTag = 130;
 VAR_6->cbFormatSize = sizeof(MPEG1WAVEFORMAT);
        VAR_6->cStandardFormats = 0;
        FUNC_1(VAR_6->szFormatTag, VAR_10);
 break;
    }
    return VAR_2;
}
