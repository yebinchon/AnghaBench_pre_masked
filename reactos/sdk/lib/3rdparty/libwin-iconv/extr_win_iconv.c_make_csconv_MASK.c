
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int codepage; int * compat; int * mblen; void* wctomb; void* mbtowc; int * flush; scalar_t__ mode; } ;
typedef TYPE_1__ csconv_t ;
struct TYPE_6__ {int MaxCharSize; } ;
typedef TYPE_2__ CPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_3 (char*) ;
 int * VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 scalar_t__ FUNC_4 () ;
 int * VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_5 (char*) ;
 int * VAR_21 ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (char*,char*) ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 int * VAR_26 ;
 char* FUNC_8 (char const*,int ) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_27, csconv_t *VAR_28)
{
    CPINFO VAR_29;
    int VAR_30 = VAR_5;
    int VAR_31 = 0;
    char *VAR_32;
    char *VAR_33;

    VAR_32 = FUNC_8(VAR_27, FUNC_6(VAR_27));
    if (VAR_32 == ((void*)0))
        return VAR_1;


    while ((VAR_33 = FUNC_7(VAR_32, "//")) != ((void*)0))
    {
        if (FUNC_2(VAR_33 + 2, "nocompat") == 0)
            VAR_30 = VAR_1;
        else if (FUNC_2(VAR_33 + 2, "translit") == 0)
            VAR_31 |= VAR_3;
        else if (FUNC_2(VAR_33 + 2, "ignore") == 0)
            VAR_31 |= VAR_2;
        *VAR_33 = 0;
    }

    VAR_28->mode = 0;
    VAR_28->flags = VAR_31;
    VAR_28->mblen = ((void*)0);
    VAR_28->flush = ((void*)0);
    VAR_28->compat = ((void*)0);
    VAR_28->codepage = FUNC_5(VAR_32);
    if (VAR_28->codepage == 1200 || VAR_28->codepage == 1201)
    {
        VAR_28->mbtowc = VAR_22;
        VAR_28->wctomb = VAR_23;
        if (FUNC_2(VAR_32, "UTF-16") == 0 || FUNC_2(VAR_32, "UTF16") == 0 ||
          FUNC_2(VAR_32, "UCS-2") == 0 || FUNC_2(VAR_32, "UCS2") == 0)
            VAR_28->flags |= VAR_4;
    }
    else if (VAR_28->codepage == 12000 || VAR_28->codepage == 12001)
    {
        VAR_28->mbtowc = VAR_24;
        VAR_28->wctomb = VAR_25;
        if (FUNC_2(VAR_32, "UTF-32") == 0 || FUNC_2(VAR_32, "UTF32") == 0 ||
          FUNC_2(VAR_32, "UCS-4") == 0 || FUNC_2(VAR_32, "UCS4") == 0)
            VAR_28->flags |= VAR_4;
    }
    else if (VAR_28->codepage == 65001)
    {
        VAR_28->mbtowc = VAR_16;
        VAR_28->wctomb = VAR_17;
        VAR_28->mblen = VAR_26;
    }
    else if ((VAR_28->codepage == 50220 || VAR_28->codepage == 50221 || VAR_28->codepage == 50222) && FUNC_4())
    {
        VAR_28->mbtowc = VAR_14;
        VAR_28->wctomb = VAR_15;
        VAR_28->flush = VAR_13;
    }
    else if (VAR_28->codepage == 51932 && FUNC_4())
    {
        VAR_28->mbtowc = VAR_19;
        VAR_28->wctomb = VAR_20;
        VAR_28->mblen = VAR_12;
    }
    else if (FUNC_1(VAR_28->codepage)
      && FUNC_0(VAR_28->codepage, &VAR_29) != 0)
    {
        VAR_28->mbtowc = VAR_16;
        VAR_28->wctomb = VAR_17;
        if (VAR_29.MaxCharSize == 1)
            VAR_28->mblen = VAR_21;
        else if (VAR_29.MaxCharSize == 2)
            VAR_28->mblen = VAR_10;
        else
     VAR_28->mblen = VAR_18;
    }
    else
    {

        FUNC_3(VAR_32);
        VAR_11 = VAR_0;
        return VAR_1;
    }

    if (VAR_30)
    {
        switch (VAR_28->codepage)
        {
        case 932: VAR_28->compat = VAR_9; break;
        case 20932: VAR_28->compat = VAR_6; break;
        case 51932: VAR_28->compat = VAR_8; break;
        case 50220: case 50221: case 50222: VAR_28->compat = VAR_7; break;
        }
    }

    FUNC_3(VAR_32);

    return VAR_5;
}
