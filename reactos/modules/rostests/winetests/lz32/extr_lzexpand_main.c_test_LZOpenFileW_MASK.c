
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int test ;
typedef char WCHAR ;
struct TYPE_4__ {int cBytes; int szPathName; int nErrCode; } ;
typedef TYPE_1__ OFSTRUCT ;
typedef scalar_t__ INT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (char*,TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 char* VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,char*,int ) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
  OFSTRUCT VAR_15;
  DWORD VAR_16;
  INT VAR_17;
  static WCHAR VAR_18[] = {'b','a','d','f','i','l','e','n','a','m','e','.','x','t','n',0};
  char VAR_19[VAR_6];

  FUNC_4(0xfaceabee);

  VAR_17 = FUNC_3(VAR_18, &VAR_15, VAR_10);
  if(FUNC_1() == VAR_0)
  {
    FUNC_11("LZOpenFileW call is not implemented\n");
    return;
  }
  FUNC_8(FUNC_1() == VAR_1,
     "GetLastError() returns %d\n", FUNC_1());
  FUNC_8(VAR_17 == VAR_5, "LZOpenFileW succeeded on nonexistent file\n");
  FUNC_2(VAR_17);

  FUNC_7(&VAR_15, 0xA5, sizeof(VAR_15));
  FUNC_5(VAR_14, VAR_19, VAR_3);


  VAR_17 = FUNC_3(VAR_13, &VAR_15, VAR_7);
  FUNC_8(VAR_17 >= 0, "LZOpenFile failed on creation\n");
  FUNC_8(VAR_15.cBytes == sizeof(OFSTRUCT),
     "LZOpenFileW set test.cBytes to %d\n", VAR_15.cBytes);
  FUNC_8(VAR_15.nErrCode == VAR_2,
     "LZOpenFileW set test.nErrCode to %d\n", VAR_15.nErrCode);
  FUNC_8(FUNC_6(VAR_15.szPathName, VAR_19) == 0,
     "LZOpenFileW returned '%s', but was expected to return '%s'\n",
     VAR_15.szPathName, VAR_19);
  FUNC_2(VAR_17);

  VAR_16 = FUNC_0(VAR_13);
  FUNC_8(VAR_16 != VAR_4, "GetFileAttributes: error %d\n",
    FUNC_1());


  FUNC_7(&VAR_15, 0xA5, sizeof(VAR_15));


  VAR_17 = FUNC_3(VAR_13, &VAR_15, VAR_10);
  FUNC_8(VAR_17 >= 0, "LZOpenFileW failed on read\n");
  FUNC_8(VAR_15.cBytes == sizeof(OFSTRUCT),
     "LZOpenFileW set test.cBytes to %d\n", VAR_15.cBytes);
  FUNC_8(VAR_15.nErrCode == VAR_2,
     "LZOpenFileW set test.nErrCode to %d\n", VAR_15.nErrCode);
  FUNC_8(FUNC_6(VAR_15.szPathName, VAR_19) == 0,
     "LZOpenFileW returned '%s', but was expected to return '%s'\n",
     VAR_15.szPathName, VAR_19);
  FUNC_2(VAR_17);

  FUNC_7(&VAR_15, 0xA5, sizeof(VAR_15));


  VAR_17 = FUNC_3(VAR_13, &VAR_15, VAR_12);
  FUNC_8(VAR_17 >= 0, "LZOpenFileW failed on write\n");
  FUNC_8(VAR_15.cBytes == sizeof(OFSTRUCT),
     "LZOpenFileW set test.cBytes to %d\n", VAR_15.cBytes);
  FUNC_8(VAR_15.nErrCode == VAR_2,
     "LZOpenFileW set test.nErrCode to %d\n", VAR_15.nErrCode);
  FUNC_8(FUNC_6(VAR_15.szPathName, VAR_19) == 0,
     "LZOpenFileW returned '%s', but was expected to return '%s'\n",
     VAR_15.szPathName, VAR_19);
  FUNC_2(VAR_17);

  FUNC_7(&VAR_15, 0xA5, sizeof(VAR_15));


  VAR_17 = FUNC_3(VAR_13, &VAR_15, VAR_11);
  FUNC_8(VAR_17 >= 0, "LZOpenFileW failed on read/write\n");
  FUNC_8(VAR_15.cBytes == sizeof(OFSTRUCT),
     "LZOpenFileW set test.cBytes to %d\n", VAR_15.cBytes);
  FUNC_8(VAR_15.nErrCode == VAR_2,
     "LZOpenFileW set test.nErrCode to %d\n", VAR_15.nErrCode);
  FUNC_8(FUNC_6(VAR_15.szPathName, VAR_19) == 0,
     "LZOpenFileW returned '%s', but was expected to return '%s'\n",
     VAR_15.szPathName, VAR_19);
  FUNC_2(VAR_17);

  FUNC_7(&VAR_15, 0xA5, sizeof(VAR_15));


  VAR_17 = FUNC_3(VAR_13, &VAR_15, VAR_9);
  FUNC_8(VAR_17 >= 0, "LZOpenFileW failed on read/write\n");
  FUNC_8(VAR_15.cBytes == sizeof(OFSTRUCT),
     "LZOpenFileW set test.cBytes to %d\n", VAR_15.cBytes);
  FUNC_8(VAR_15.nErrCode == VAR_2,
     "LZOpenFileW set test.nErrCode to %d\n", VAR_15.nErrCode);
  FUNC_8(FUNC_6(VAR_15.szPathName, VAR_19) == 0,
     "LZOpenFileW returned '%s', but was expected to return '%s'\n",
     VAR_15.szPathName, VAR_19);
  FUNC_2(VAR_17);

  FUNC_7(&VAR_15, 0xA5, sizeof(VAR_15));


  VAR_17 = FUNC_3(VAR_13, &VAR_15, VAR_8);
  FUNC_8(VAR_17 >= 0, "LZOpenFileW failed on delete\n");
  FUNC_8(VAR_15.cBytes == sizeof(OFSTRUCT),
     "LZOpenFileW set test.cBytes to %d\n", VAR_15.cBytes);
  FUNC_8(VAR_15.nErrCode == VAR_2,
     "LZOpenFileW set test.nErrCode to %d\n", VAR_15.nErrCode);
  FUNC_8(FUNC_6(VAR_15.szPathName, VAR_19) == 0,
     "LZOpenFileW returned '%s', but was expected to return '%s'\n",
     VAR_15.szPathName, VAR_19);
  FUNC_2(VAR_17);

  VAR_16 = FUNC_0(VAR_13);
  FUNC_8(VAR_16 == VAR_4,
     "GetFileAttributesW succeeded on deleted file\n");

  FUNC_9();
  FUNC_10();
}
