
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_13__ {int db; } ;
struct TYPE_12__ {int hdr; } ;
struct TYPE_11__ {scalar_t__ MinVersionMS; scalar_t__ MinVersionLS; scalar_t__ MaxVersionMS; scalar_t__ MaxVersionLS; scalar_t__ MinSize; scalar_t__ MaxSize; void* Languages; void* File; int MaxTime; int MinTime; void* Name; } ;
typedef TYPE_1__ MSISIGNATURE ;
typedef TYPE_2__ MSIRECORD ;
typedef TYPE_3__ MSIPACKAGE ;
typedef void* LPWSTR ;
typedef void* LPCWSTR ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_3 (int ,char const*,void*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (char*,TYPE_3__*,...) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,void*,int) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 void* FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*,scalar_t__*,scalar_t__*) ;
 int FUNC_12 (int *) ;
 void* FUNC_13 (void*,char) ;
 int FUNC_14 (void*) ;

__attribute__((used)) static UINT FUNC_15(MSIPACKAGE *VAR_2, MSISIGNATURE *VAR_3, LPCWSTR VAR_4)
{
    static const WCHAR VAR_5[] = {
        's','e','l','e','c','t',' ','*',' ',
        'f','r','o','m',' ',
        'S','i','g','n','a','t','u','r','e',' ',
        'w','h','e','r','e',' ','S','i','g','n','a','t','u','r','e',' ','=',' ',
        '\'','%','s','\'',0};
    LPWSTR VAR_6, VAR_7, VAR_8;
    MSIRECORD *VAR_9;
    DWORD VAR_10;

    FUNC_5("package %p, sig %p\n", VAR_2, VAR_3);

    FUNC_8(VAR_3, 0, sizeof(*VAR_3));
    VAR_3->Name = VAR_4;
    VAR_9 = FUNC_3( VAR_2->db, VAR_5, VAR_4 );
    if (!VAR_9)
    {
        FUNC_5("failed to query signature for %s\n", FUNC_6(VAR_4));
        return VAR_0;
    }


    VAR_3->File = FUNC_9(VAR_9,2);
    if ((VAR_8 = FUNC_13(VAR_3->File, '|')))
    {
        VAR_8++;
        FUNC_7(VAR_3->File, VAR_8, (FUNC_14(VAR_8) + 1) * sizeof(WCHAR));
    }

    VAR_6 = FUNC_9(VAR_9,3);
    if (VAR_6)
    {
        FUNC_11( VAR_6, &VAR_3->MinVersionMS, &VAR_3->MinVersionLS );
        FUNC_10( VAR_6 );
    }
    VAR_7 = FUNC_9(VAR_9,4);
    if (VAR_7)
    {
        FUNC_11( VAR_7, &VAR_3->MaxVersionMS, &VAR_3->MaxVersionLS );
        FUNC_10( VAR_7 );
    }
    VAR_3->MinSize = FUNC_4(VAR_9,5);
    if (VAR_3->MinSize == VAR_1)
        VAR_3->MinSize = 0;
    VAR_3->MaxSize = FUNC_4(VAR_9,6);
    if (VAR_3->MaxSize == VAR_1)
        VAR_3->MaxSize = 0;
    VAR_3->Languages = FUNC_9(VAR_9,9);
    VAR_10 = FUNC_4(VAR_9,7);
    if (VAR_10 != VAR_1)
        FUNC_0(FUNC_1(VAR_10), FUNC_2(VAR_10), &VAR_3->MinTime);
    VAR_10 = FUNC_4(VAR_9,8);
    if (VAR_10 != VAR_1)
        FUNC_0(FUNC_1(VAR_10), FUNC_2(VAR_10), &VAR_3->MaxTime);

    FUNC_5("Found file name %s for Signature_ %s;\n",
          FUNC_6(VAR_3->File), FUNC_6(VAR_4));
    FUNC_5("MinVersion is %d.%d.%d.%d\n", FUNC_1(VAR_3->MinVersionMS),
          FUNC_2(VAR_3->MinVersionMS), FUNC_1(VAR_3->MinVersionLS),
          FUNC_2(VAR_3->MinVersionLS));
    FUNC_5("MaxVersion is %d.%d.%d.%d\n", FUNC_1(VAR_3->MaxVersionMS),
          FUNC_2(VAR_3->MaxVersionMS), FUNC_1(VAR_3->MaxVersionLS),
          FUNC_2(VAR_3->MaxVersionLS));
    FUNC_5("MinSize is %d, MaxSize is %d;\n", VAR_3->MinSize, VAR_3->MaxSize);
    FUNC_5("Languages is %s\n", FUNC_6(VAR_3->Languages));

    FUNC_12( &VAR_9->hdr );

    return VAR_0;
}
