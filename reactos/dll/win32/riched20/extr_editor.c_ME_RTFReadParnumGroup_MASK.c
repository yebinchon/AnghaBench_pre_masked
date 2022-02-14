
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* WORD ;
typedef char WCHAR ;
struct TYPE_8__ {int dwMask; int wNumbering; void* wNumberingTab; int wNumberingStyle; void* wNumberingStart; } ;
struct TYPE_9__ {int rtfMinor; scalar_t__ rtfClass; char rtfMajor; TYPE_1__ fmt; void* rtfParam; } ;
typedef TYPE_2__ RTF_Info ;


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
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int,void*,void*,char,char) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;







 int VAR_21 ;
 int VAR_22 ;



 scalar_t__ VAR_23 ;

__attribute__((used)) static void FUNC_5( RTF_Info *VAR_24 )
{
    int VAR_25 = 1, VAR_26 = -1;
    WORD VAR_27 = 0, VAR_28 = 1;
    WCHAR VAR_29 = 0, VAR_30 = 0;

    for (;;)
    {
        FUNC_2( VAR_24 );

        if (FUNC_1( VAR_24, VAR_15, VAR_16, VAR_22 ) ||
            FUNC_1( VAR_24, VAR_15, VAR_16, VAR_21 ))
        {
            int VAR_31 = VAR_24->rtfMinor;

            FUNC_2( VAR_24 );
            if (VAR_24->rtfClass == VAR_23)
            {
                if (VAR_31 == VAR_22)
                    VAR_29 = VAR_24->rtfMajor;
                else
                    VAR_30 = VAR_24->rtfMajor;
                continue;
            }

        }

        if (VAR_24->rtfClass == VAR_17)
            return;

        if (FUNC_0( VAR_24, VAR_19, VAR_18 ))
        {
            if (--VAR_25 == 0) break;
            continue;
        }

        if (FUNC_0( VAR_24, VAR_19, VAR_14 ))
        {
            VAR_25++;
            continue;
        }


        if (!FUNC_0( VAR_24, VAR_15, VAR_20 ))
            continue;

        switch (VAR_24->rtfMinor)
        {
        case 136:
        case 128:
            break;
        case 137:
            VAR_26 = VAR_9;
            break;

        case 135:
            VAR_26 = VAR_8;
            break;
        case 130:
            VAR_26 = VAR_12;
            break;
        case 129:
            VAR_26 = VAR_13;
            break;
        case 133:
            VAR_26 = VAR_10;
            break;
        case 132:
            VAR_26 = VAR_11;
            break;

        case 134:
            VAR_27 = VAR_24->rtfParam;
            break;
        case 131:
            VAR_28 = VAR_24->rtfParam;
            break;
        }
    }

    if (VAR_26 != -1)
    {
        VAR_24->fmt.dwMask |= (VAR_0 | VAR_1 | VAR_2 | VAR_3);
        VAR_24->fmt.wNumbering = VAR_26;
        VAR_24->fmt.wNumberingStart = VAR_28;
        VAR_24->fmt.wNumberingStyle = VAR_4;
        if (VAR_26 != VAR_9)
        {
            if (VAR_29 == 0 && VAR_30 == 0)
                VAR_24->fmt.wNumberingStyle = VAR_7;
            else if (VAR_30 == '.')
                VAR_24->fmt.wNumberingStyle = VAR_6;
            else if (VAR_29 == '(' && VAR_30 == ')')
                VAR_24->fmt.wNumberingStyle = VAR_5;
        }
        VAR_24->fmt.wNumberingTab = VAR_27;
    }

    FUNC_4("type %d indent %d start %d txt before %04x txt after %04x\n",
          VAR_26, VAR_27, VAR_28, VAR_29, VAR_30);

    FUNC_3( VAR_24 );
}
