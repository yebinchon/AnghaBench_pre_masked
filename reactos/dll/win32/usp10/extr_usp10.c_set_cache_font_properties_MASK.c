
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_6__ {int cBytes; int wgBlank; int wgInvalid; int wgKashida; scalar_t__ iKashidaWidth; scalar_t__ wgDefault; } ;
struct TYPE_5__ {int tmBreakChar; scalar_t__ tmDefaultChar; } ;
struct TYPE_7__ {TYPE_2__ sfp; TYPE_1__ tm; int sfnt; } ;
typedef TYPE_3__ ScriptCache ;
typedef int HDC ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const,int const*,int,int*,int ) ;
 int VAR_3 ;

__attribute__((used)) static inline BOOL FUNC_1(const HDC VAR_4, ScriptCache *VAR_5)
{
    VAR_5->sfp.cBytes = sizeof(VAR_5->sfp);

    if (!VAR_5->sfnt)
    {
        VAR_5->sfp.wgBlank = VAR_5->tm.tmBreakChar;
        VAR_5->sfp.wgDefault = VAR_5->tm.tmDefaultChar;
        VAR_5->sfp.wgInvalid = VAR_5->sfp.wgBlank;
        VAR_5->sfp.wgKashida = 0xFFFF;
        VAR_5->sfp.iKashidaWidth = 0;
    }
    else
    {
        static const WCHAR VAR_6[4] = {0x0020, 0x200B, 0xF71B, 0x0640};




        WORD VAR_7[4];

        if (FUNC_0(VAR_4, VAR_6, 4, VAR_7, VAR_2) != VAR_1)
        {
            if(VAR_7[0] != 0xFFFF)
                VAR_5->sfp.wgBlank = VAR_7[0];
            else
                VAR_5->sfp.wgBlank = 0;

            VAR_5->sfp.wgDefault = 0;

            if (VAR_7[2] != 0xFFFF)
                VAR_5->sfp.wgInvalid = VAR_7[2];
            else if (VAR_7[1] != 0xFFFF)
                VAR_5->sfp.wgInvalid = VAR_7[1];
            else if (VAR_7[0] != 0xFFFF)
                VAR_5->sfp.wgInvalid = VAR_7[0];
            else
                VAR_5->sfp.wgInvalid = 0;

            VAR_5->sfp.wgKashida = VAR_7[3];

            VAR_5->sfp.iKashidaWidth = 0;
        }
        else
            return VAR_0;
    }
    return VAR_3;
}
