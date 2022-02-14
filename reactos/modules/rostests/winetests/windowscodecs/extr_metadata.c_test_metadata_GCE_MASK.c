
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char member_0; char member_1; char member_2; char member_3; char member_4; char member_5; char member_6; char member_7; char member_8; float member_9; char member_10; char member_11; char member_12; char member_13; char member_14; char member_15; char member_16; char member_17; char member_18; char member_19; char member_20; int member_21; } ;
struct TYPE_5__ {int member_0; } ;
struct test_data {TYPE_2__ member_5; int * member_4; TYPE_1__ member_3; int member_2; int member_1; int const member_0; } ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int QuadPart; } ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int IWICPersistStream ;
typedef int IWICMetadataReader ;
typedef int IWICMetadataHandlerInfo ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;
typedef int GCE_data ;
typedef int CLSID ;


 scalar_t__ FUNC_0 (struct test_data const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *,void**) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_3__,int ,int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int,char*,scalar_t__*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,scalar_t__*) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int **) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_8 ;



 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int *,struct test_data const*,scalar_t__) ;
 int * FUNC_18 (char const*,int) ;
 scalar_t__ FUNC_19 (char*,char const*) ;
 int FUNC_20 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (char*) ;

__attribute__((used)) static void FUNC_23(void)
{
    static const WCHAR VAR_9[] = {'G','r','a','p','h','i','c',' ','C','o','n','t','r','o','l',' ','E','x','t','e','n','s','i','o','n',' ','R','e','a','d','e','r',0};
    static const char VAR_10[] = "hello world!\xa\x2\x3\x4\x5\x6\x7\x8\xed\xa\xb\xc\xd\xe\xf";
    static const struct test_data VAR_11[5] =
    {
        { 129, 0, 0, 2 , ((void*)0), { 'D','i','s','p','o','s','a','l',0 } },
        { 130, 0, 0, 1 , ((void*)0), { 'U','s','e','r','I','n','p','u','t','F','l','a','g',0 } },
        { 130, 0, 0, 0 , ((void*)0), { 'T','r','a','n','s','p','a','r','e','n','c','y','F','l','a','g',0 } },
        { 128, 0, 0, 0x302 , ((void*)0), { 'D','e','l','a','y',0 } },
        { 129, 0, 0, 4 , ((void*)0), { 'T','r','a','n','s','p','a','r','e','n','t','C','o','l','o','r','I','n','d','e','x',0 } }
    };
    LARGE_INTEGER VAR_12;
    HRESULT VAR_13;
    IStream *VAR_14;
    IWICPersistStream *VAR_15;
    IWICMetadataReader *VAR_16;
    IWICMetadataHandlerInfo *VAR_17;
    WCHAR VAR_18[64];
    UINT VAR_19, VAR_20;
    GUID VAR_21;
    CLSID VAR_22;

    VAR_13 = FUNC_1(&VAR_1, ((void*)0), VAR_0,
                          &VAR_4, (void **)&VAR_16);
    FUNC_20(VAR_13 == VAR_8 || FUNC_16(VAR_13 == VAR_2 || VAR_13 == VAR_6) ,
       "CoCreateInstance error %#x\n", VAR_13);

    VAR_14 = FUNC_18(VAR_10, sizeof(VAR_10));

    if (FUNC_15(VAR_13))
    {
        VAR_12.QuadPart = 12;
        VAR_13 = FUNC_3(VAR_14, VAR_12, VAR_7, ((void*)0));
        FUNC_20(VAR_13 == VAR_8, "IStream_Seek error %#x\n", VAR_13);

        VAR_13 = FUNC_4(VAR_16, &VAR_5, (void **)&VAR_15);
        FUNC_20(VAR_13 == VAR_8, "QueryInterface error %#x\n", VAR_13);

        VAR_13 = FUNC_12(VAR_15, VAR_14);
        FUNC_20(VAR_13 == VAR_8, "Load error %#x\n", VAR_13);

        FUNC_13(VAR_15);
    }

    if (FUNC_15(VAR_13))
    {
        VAR_13 = FUNC_8(VAR_16, &VAR_19);
        FUNC_20(VAR_13 == VAR_8, "GetCount error %#x\n", VAR_13);
        FUNC_20(VAR_19 == FUNC_0(VAR_11), "unexpected count %u\n", VAR_19);

        FUNC_17(VAR_16, VAR_11, VAR_19);

        VAR_13 = FUNC_9(VAR_16, &VAR_21);
        FUNC_20(VAR_13 == VAR_8, "GetMetadataFormat error %#x\n", VAR_13);
        FUNC_20(FUNC_14(&VAR_21, &VAR_3), "wrong format %s\n", FUNC_21(&VAR_21));

        VAR_13 = FUNC_10(VAR_16, &VAR_17);
        FUNC_20(VAR_13 == VAR_8, "GetMetadataHandlerInfo error %#x\n", VAR_13);

        VAR_13 = FUNC_5(VAR_17, &VAR_22);
        FUNC_20(VAR_13 == VAR_8, "GetCLSID error %#x\n", VAR_13);
        FUNC_20(FUNC_14(&VAR_22, &VAR_1), "wrong CLSID %s\n", FUNC_21(&VAR_22));

        VAR_13 = FUNC_6(VAR_17, 64, VAR_18, &VAR_20);
        FUNC_20(VAR_13 == VAR_8, "GetFriendlyName error %#x\n", VAR_13);
        FUNC_20(FUNC_19(VAR_18, VAR_9) == 0, "wrong GCE reader name %s\n", FUNC_22(VAR_18));

        FUNC_7(VAR_17);
        FUNC_11(VAR_16);
    }

    FUNC_2(VAR_14);
}
