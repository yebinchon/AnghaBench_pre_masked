
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int dwFormatTagIndex; int dwFormatTag; int cbFormatSize; int szFormatTag; void* cStandardFormats; int fdwSupport; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_1__* PACMFORMATTAGDETAILSW ;
typedef int LRESULT ;
typedef int GSM610WAVEFORMAT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;



 void* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static LRESULT FUNC_3(PACMFORMATTAGDETAILSW VAR_6, DWORD VAR_7)
{
    static const WCHAR VAR_8[]={'P','C','M',0};
    static const WCHAR VAR_9[]={'G','S','M',' ','6','.','1','0',0};

    switch (VAR_7)
    {
    case 131:
 if (VAR_6->dwFormatTagIndex > 1) return VAR_1;
 break;
    case 130:
 if (VAR_6->dwFormatTag == VAR_4)
        {
            VAR_6->dwFormatTagIndex = 1;
     break;
 }

    case 132:
 switch (VAR_6->dwFormatTag)
        {
 case 128: VAR_6->dwFormatTagIndex = 0; break;
 case 129: VAR_6->dwFormatTagIndex = 1; break;
 default: return VAR_1;
 }
 break;
    default:
 FUNC_1("Unsupported query %08x\n", VAR_7);
 return VAR_3;
    }

    VAR_6->fdwSupport = VAR_0;
    switch (VAR_6->dwFormatTagIndex)
    {
    case 0:
 VAR_6->dwFormatTag = 128;
 VAR_6->cbFormatSize = sizeof(PCMWAVEFORMAT);
 VAR_6->cStandardFormats = FUNC_0(VAR_5);
        FUNC_2(VAR_6->szFormatTag, VAR_8);
        break;
    case 1:
 VAR_6->dwFormatTag = 129;
 VAR_6->cbFormatSize = sizeof(GSM610WAVEFORMAT);
 VAR_6->cStandardFormats = FUNC_0(VAR_5);
        FUNC_2(VAR_6->szFormatTag, VAR_9);
 break;
    }
    return VAR_2;
}
