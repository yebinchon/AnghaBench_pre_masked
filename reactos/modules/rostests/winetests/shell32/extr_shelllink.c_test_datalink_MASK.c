
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {scalar_t__ dwSignature; } ;
struct TYPE_4__ {int szwDarwinID; } ;
typedef int LPVOID ;
typedef int IShellLinkW ;
typedef int IShellLinkDataList ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ EXP_DARWIN_LINK ;
typedef int DWORD ;
typedef TYPE_2__ DATABLOCK_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char const*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,char const*) ;
 int FUNC_10 (int,char*,...) ;
 int VAR_11 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void FUNC_13(void)
{
    static const WCHAR VAR_12[] = {
      ':',':','{','9','d','b','1','1','8','6','e','-','4','0','d','f','-','1',
      '1','d','1','-','a','a','8','c','-','0','0','c','0','4','f','b','6','7',
      '8','6','3','}',':','2','6',',','!','!','g','x','s','f','(','N','g',']',
      'q','F','`','H','{','L','s','A','C','C','E','S','S','F','i','l','e','s',
      '>','p','l','T',']','j','I','{','j','f','(','=','1','&','L','[','-','8',
      '1','-',']',':',':',0 };
    static const WCHAR VAR_13[] = {
      '2','6',',','!','!','g','x','s','f','(','N','g',']','q','F','`','H','{',
      'L','s','A','C','C','E','S','S','F','i','l','e','s','>','p','l','T',']',
      'j','I','{','j','f','(','=','1','&','L','[','-','8','1','-',']',0 };
    IShellLinkDataList *VAR_14 = ((void*)0);
    IShellLinkW *VAR_15 = ((void*)0);
    HRESULT VAR_16;
    DWORD VAR_17 = 0;
    EXP_DARWIN_LINK *VAR_18;

    VAR_16 = FUNC_0( &VAR_1, ((void*)0), VAR_0,
                            &VAR_6, (LPVOID*)&VAR_15 );
    FUNC_10( VAR_16 == VAR_9 ||
        FUNC_8(VAR_16 == VAR_5),
        "CoCreateInstance failed (0x%08x)\n", VAR_16);
    if (!VAR_15)
    {
        FUNC_12("no shelllink\n");
        return;
    }

    VAR_16 = FUNC_4( VAR_15, &VAR_10, (LPVOID*) &VAR_14 );
    FUNC_10( VAR_16 == VAR_9 ||
        FUNC_8(VAR_16 == VAR_5),
        "IShellLinkW_QueryInterface failed (0x%08x)\n", VAR_16);

    if (!VAR_14)
    {
        FUNC_12("no datalink interface\n");
        FUNC_5( VAR_15 );
        return;
    }

    VAR_17 = 0;
    VAR_16 = FUNC_2( VAR_14, &VAR_17 );
    FUNC_10( VAR_16 == VAR_9, "GetFlags failed\n");
    FUNC_10( VAR_17 == 0, "GetFlags returned wrong flags\n");

    VAR_18 = (void*)-1;
    VAR_16 = FUNC_1( VAR_14, VAR_2, (LPVOID*) &VAR_18 );
    FUNC_10( VAR_16 == VAR_3, "CopyDataBlock failed\n");
    FUNC_10( VAR_18 == ((void*)0), "should be null\n");

    if (!VAR_11 )
        FUNC_11("SetPath with NULL parameter crashes on NT4\n");
    else
    {
        VAR_16 = FUNC_6(VAR_15, ((void*)0));
        FUNC_10(VAR_16 == VAR_4, "SetPath returned wrong error (0x%08x)\n", VAR_16);
    }

    VAR_16 = FUNC_6(VAR_15, VAR_12);
    FUNC_10(VAR_16 == VAR_9, "SetPath failed\n");

if (0)
{

    FUNC_2( VAR_14, ((void*)0) );
}

    VAR_17 = 0;
    VAR_16 = FUNC_2( VAR_14, &VAR_17 );
    FUNC_10( VAR_16 == VAR_9, "GetFlags failed\n");

    FUNC_10( (VAR_17 & (~ VAR_8)) == VAR_7,
        "GetFlags returned wrong flags\n");

    VAR_18 = ((void*)0);
    VAR_16 = FUNC_1( VAR_14, VAR_2, (LPVOID*) &VAR_18 );
    FUNC_10( VAR_16 == VAR_9, "CopyDataBlock failed\n");

    FUNC_10( VAR_18 && ((DATABLOCK_HEADER*)VAR_18)->dwSignature == VAR_2, "signature wrong\n");
    FUNC_10( VAR_18 && 0==FUNC_9(VAR_18->szwDarwinID, VAR_13 ), "signature wrong\n");

    FUNC_7( VAR_18 );

    FUNC_3( VAR_14 );
    FUNC_5( VAR_15 );
}
