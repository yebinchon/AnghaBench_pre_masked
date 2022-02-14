
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ cExtension; TYPE_4__* rgExtension; } ;
struct TYPE_15__ {scalar_t__* encoded; TYPE_5__ exts; } ;
struct TYPE_14__ {scalar_t__ cExtension; TYPE_2__* rgExtension; } ;
struct TYPE_11__ {int cbData; int pbData; } ;
struct TYPE_12__ {TYPE_3__ Value; int pszObjId; } ;
struct TYPE_9__ {int pbData; } ;
struct TYPE_10__ {TYPE_1__ Value; int pszObjId; } ;
typedef size_t DWORD ;
typedef TYPE_6__ CERT_EXTENSIONS ;
typedef int BYTE ;
typedef int BOOL ;


 size_t FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int * FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 TYPE_7__* VAR_3 ;
 int FUNC_6 (int ,int ,int ) ;
 size_t FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (size_t,int ,scalar_t__*,scalar_t__,int ,int *,int *,size_t*) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(DWORD VAR_4)
{
    DWORD VAR_5;

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++)
    {
        BOOL VAR_6;
        BYTE *VAR_7 = ((void*)0);
        DWORD VAR_8 = 0;

        VAR_6 = FUNC_9(VAR_4, VAR_2,
         VAR_3[VAR_5].encoded, VAR_3[VAR_5].encoded[1] + 2, VAR_0,
         ((void*)0), VAR_7, &VAR_8);
        FUNC_8(VAR_6, "CryptDecodeObjectEx failed: %08x\n", FUNC_1());
        if (VAR_6)
        {
            CERT_EXTENSIONS *VAR_9 = (CERT_EXTENSIONS *)VAR_7;
            DWORD VAR_10;

            FUNC_8(VAR_9->cExtension == VAR_3[VAR_5].exts.cExtension,
             "Expected %d extensions, see %d\n", VAR_3[VAR_5].exts.cExtension,
             VAR_9->cExtension);
            for (VAR_10 = 0; VAR_10 < FUNC_7(VAR_9->cExtension, VAR_3[VAR_5].exts.cExtension); VAR_10++)
            {
                FUNC_8(!FUNC_10(VAR_9->rgExtension[VAR_10].pszObjId,
                 VAR_3[VAR_5].exts.rgExtension[VAR_10].pszObjId),
                 "Expected OID %s, got %s\n",
                 VAR_3[VAR_5].exts.rgExtension[VAR_10].pszObjId,
                 VAR_9->rgExtension[VAR_10].pszObjId);
                FUNC_8(!FUNC_6(VAR_9->rgExtension[VAR_10].Value.pbData,
                 VAR_3[VAR_5].exts.rgExtension[VAR_10].Value.pbData,
                 VAR_3[VAR_5].exts.rgExtension[VAR_10].Value.cbData),
                 "Unexpected value\n");
            }
            FUNC_5(VAR_7);
        }
        VAR_6 = FUNC_9(VAR_4, VAR_2,
         VAR_3[VAR_5].encoded, VAR_3[VAR_5].encoded[1] + 2, 0, ((void*)0), ((void*)0), &VAR_8);
        FUNC_8(VAR_6, "CryptDecodeObjectEx failed: %08x\n", FUNC_1());
        VAR_7 = FUNC_3(FUNC_2(), VAR_1, VAR_8);
        if (VAR_7)
        {
            VAR_6 = FUNC_9(VAR_4, VAR_2,
             VAR_3[VAR_5].encoded, VAR_3[VAR_5].encoded[1] + 2, 0, ((void*)0), VAR_7, &VAR_8);
            FUNC_8(VAR_6, "CryptDecodeObjectEx failed: %08x\n", FUNC_1());
            FUNC_4(FUNC_2(), 0, VAR_7);
        }
    }
}
