
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int data ;
struct TYPE_5__ {int nSize; int nBytes; int nHandles; scalar_t__ dSignature; int iType; } ;
typedef int * HENHMETAFILE ;
typedef TYPE_1__ ENHMETAHEADER ;
typedef TYPE_1__ BYTE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int * FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(void)
{
    BYTE VAR_4[256];
    HENHMETAFILE VAR_5;
    ENHMETAHEADER *VAR_6;

    FUNC_5(VAR_4, 0xAA, sizeof(VAR_4));
    FUNC_3(0xdeadbeef);
    VAR_5 = FUNC_2(sizeof(VAR_4), VAR_4);
    FUNC_6(!VAR_5, "SetEnhMetaFileBits should fail\n");
    FUNC_6(FUNC_1() == VAR_2 ||
       FUNC_1() == VAR_3,
       "expected ERROR_INVALID_DATA or ERROR_INVALID_PARAMETER, got %u\n", FUNC_1());

    VAR_6 = (ENHMETAHEADER *)VAR_4;
    FUNC_5(VAR_6, 0, sizeof(*VAR_6));

    VAR_6->iType = VAR_0;
    VAR_6->nSize = sizeof(*VAR_6);
    VAR_6->dSignature = VAR_1;

    VAR_6->nBytes = sizeof(*VAR_6);

    VAR_6->nHandles = 1;

    FUNC_3(0xdeadbeef);
    VAR_5 = FUNC_2(VAR_6->nBytes, VAR_4);
    FUNC_6(VAR_5 != 0, "SetEnhMetaFileBits error %u\n", FUNC_1());
    FUNC_0(VAR_5);


    VAR_6->nBytes++;
    FUNC_3(0xdeadbeef);
    VAR_5 = FUNC_2(VAR_6->nBytes, VAR_4);
    FUNC_6(!VAR_5 ||
       FUNC_4(VAR_5 != ((void*)0)),
       "SetEnhMetaFileBits should fail\n");
    FUNC_6(FUNC_1() == 0xdeadbeef, "Expected deadbeef, got %u\n", FUNC_1());
    FUNC_0(VAR_5);

    VAR_6->dSignature = 0;
    VAR_6->nBytes--;
    FUNC_3(0xdeadbeef);
    VAR_5 = FUNC_2(VAR_6->nBytes, VAR_4);
    FUNC_6(!VAR_5 ||
       FUNC_4(VAR_5 != ((void*)0)),
       "SetEnhMetaFileBits should fail\n");
    FUNC_6(FUNC_1() == 0xdeadbeef, "Expected deadbeef, got %u\n", FUNC_1());
    FUNC_0(VAR_5);
}
