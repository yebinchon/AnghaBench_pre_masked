
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_10__ {scalar_t__* fsCsb; } ;
struct TYPE_12__ {scalar_t__ ciACP; TYPE_2__ fs; int ciCharset; } ;
struct TYPE_9__ {int h; } ;
struct TYPE_11__ {scalar_t__ dwFontSigs; int iBaseCharset; scalar_t__ CodePage; TYPE_1__ head; int spkf; int hkl; } ;
typedef int PUNICODE_STRING ;
typedef int PULONG ;
typedef TYPE_3__* PKL ;
typedef int LCID ;
typedef int KL ;
typedef int HKL ;
typedef TYPE_4__ CHARSETINFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (char*,int ,scalar_t__,...) ;
 int VAR_3 ;
 TYPE_3__* FUNC_4 (int ,int *,int *,int *,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static PKL
FUNC_9(PUNICODE_STRING VAR_7, HKL VAR_8)
{
    LCID VAR_9;
    CHARSETINFO VAR_10;
    PKL VAR_11;


    VAR_11 = FUNC_4(VAR_4, ((void*)0), ((void*)0), ((void*)0), VAR_3, sizeof(KL));
    if (!VAR_11)
    {
        FUNC_0("Failed to create object!\n");
        return ((void*)0);
    }

    VAR_11->hkl = VAR_8;
    VAR_11->spkf = FUNC_7(VAR_7);


    FUNC_6(VAR_11);


    if (!VAR_11->spkf)
    {
        FUNC_0("UserLoadKbdFile(%wZ) failed!\n", VAR_7);
        FUNC_5(VAR_11->head.h, VAR_3);
        return ((void*)0);
    }


    if (!FUNC_1(FUNC_2(VAR_7, 16, (PULONG)&VAR_9)))
    {
        FUNC_0("RtlUnicodeStringToInteger failed for '%wZ'\n", VAR_7);
        FUNC_5(VAR_11->head.h, VAR_3);
        return ((void*)0);
    }

    FUNC_3("Language Identifiers %wZ LCID 0x%x\n", VAR_7, VAR_9);
    if (FUNC_8(VAR_9, &VAR_10))
    {
       VAR_11->iBaseCharset = VAR_10.ciCharset;
       VAR_11->dwFontSigs = VAR_10.fs.fsCsb[0];
       VAR_11->CodePage = (USHORT)VAR_10.ciACP;
       FUNC_3("Charset %u Font Sig %lu CodePage %u\n",
             VAR_11->iBaseCharset, VAR_11->dwFontSigs, VAR_11->CodePage);
    }
    else
    {
       VAR_11->iBaseCharset = VAR_0;
       VAR_11->dwFontSigs = VAR_2;
       VAR_11->CodePage = VAR_1;
    }


    if (VAR_6 == 0)
    {
       VAR_5 = VAR_11->iBaseCharset;
       VAR_6 = VAR_11->dwFontSigs;
    }

    return VAR_11;
}
