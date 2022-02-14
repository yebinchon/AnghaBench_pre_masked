
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int test ;
struct TYPE_4__ {int cBytes; int szPathName; int nErrCode; } ;
typedef TYPE_1__ OFSTRUCT ;
typedef scalar_t__ INT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (char*,TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 char* VAR_13 ;
 int FUNC_5 (char*,char*,int ) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(void)
{
  OFSTRUCT VAR_14;
  DWORD VAR_15;
  INT VAR_16;
  static char VAR_17[] = "badfilename_";
  char VAR_18[VAR_5];
  char VAR_19[VAR_5];

  FUNC_4(0xfaceabee);

  VAR_16 = FUNC_3(VAR_17, &VAR_14, VAR_9);
  FUNC_8(VAR_16 == VAR_4,
     "LZOpenFileA succeeded on nonexistent file\n");
  FUNC_8(FUNC_1() == VAR_0,
     "GetLastError() returns %d\n", FUNC_1());
  FUNC_2(VAR_16);

  FUNC_7(&VAR_14, 0xA5, sizeof(VAR_14));
  FUNC_5(VAR_13, VAR_18, VAR_2);


  VAR_16 = FUNC_3(VAR_13, &VAR_14, VAR_6);
  FUNC_8(VAR_16 >= 0, "LZOpenFileA failed on creation\n");
  FUNC_8(VAR_14.cBytes == sizeof(OFSTRUCT),
     "LZOpenFileA set test.cBytes to %d\n", VAR_14.cBytes);
  FUNC_8(VAR_14.nErrCode == VAR_1,
     "LZOpenFileA set test.nErrCode to %d\n", VAR_14.nErrCode);
  FUNC_8(FUNC_6(VAR_14.szPathName, VAR_18) == 0,
     "LZOpenFileA returned '%s', but was expected to return '%s'\n",
     VAR_14.szPathName, VAR_18);
  FUNC_2(VAR_16);

  VAR_15 = FUNC_0(VAR_13);
  FUNC_8(VAR_15 != VAR_3, "GetFileAttributesA: error %d\n",
     FUNC_1());


  FUNC_7(&VAR_14, 0xA5, sizeof(VAR_14));
  FUNC_5(VAR_13, VAR_19, VAR_12);


  VAR_16 = FUNC_3(VAR_13, &VAR_14, VAR_9);
  FUNC_8(VAR_16 >= 0, "LZOpenFileA failed on read\n");
  FUNC_8(VAR_14.cBytes == sizeof(OFSTRUCT),
     "LZOpenFileA set test.cBytes to %d '%s'('%s')\n", VAR_14.cBytes, VAR_18, VAR_19);
  FUNC_8(VAR_14.nErrCode == VAR_1,
     "LZOpenFileA set test.nErrCode to %d\n", VAR_14.nErrCode);
  FUNC_8(FUNC_6(VAR_14.szPathName, VAR_18) == 0,
     "LZOpenFileA returned '%s', but was expected to return '%s' or '%s'\n",
     VAR_14.szPathName, VAR_18, VAR_19);
  FUNC_2(VAR_16);

  FUNC_7(&VAR_14, 0xA5, sizeof(VAR_14));


  VAR_16 = FUNC_3(VAR_13, &VAR_14, VAR_11);
  FUNC_8(VAR_16 >= 0, "LZOpenFileA failed on write\n");
  FUNC_8(VAR_14.cBytes == sizeof(OFSTRUCT),
     "LZOpenFileA set test.cBytes to %d\n", VAR_14.cBytes);
  FUNC_8(VAR_14.nErrCode == VAR_1,
     "LZOpenFileA set test.nErrCode to %d\n", VAR_14.nErrCode);
  FUNC_8(FUNC_6(VAR_14.szPathName, VAR_18) == 0,
     "LZOpenFileA returned '%s', but was expected to return '%s' or '%s'\n",
     VAR_14.szPathName, VAR_18, VAR_19);
  FUNC_2(VAR_16);

  FUNC_7(&VAR_14, 0xA5, sizeof(VAR_14));


  VAR_16 = FUNC_3(VAR_13, &VAR_14, VAR_10);
  FUNC_8(VAR_16 >= 0, "LZOpenFileA failed on read/write\n");
  FUNC_8(VAR_14.cBytes == sizeof(OFSTRUCT),
     "LZOpenFileA set test.cBytes to %d\n", VAR_14.cBytes);
  FUNC_8(VAR_14.nErrCode == VAR_1,
     "LZOpenFileA set test.nErrCode to %d\n", VAR_14.nErrCode);
  FUNC_8(FUNC_6(VAR_14.szPathName, VAR_18) == 0,
     "LZOpenFileA returned '%s', but was expected to return '%s' or '%s'\n",
     VAR_14.szPathName, VAR_18, VAR_19);
  FUNC_2(VAR_16);

  FUNC_7(&VAR_14, 0xA5, sizeof(VAR_14));


  VAR_16 = FUNC_3(VAR_13, &VAR_14, VAR_8);
  FUNC_8(VAR_16 >= 0, "LZOpenFileA failed on read/write\n");
  FUNC_8(VAR_14.cBytes == sizeof(OFSTRUCT),
     "LZOpenFileA set test.cBytes to %d\n", VAR_14.cBytes);
  FUNC_8(VAR_14.nErrCode == VAR_1,
     "LZOpenFileA set test.nErrCode to %d\n", VAR_14.nErrCode);
  FUNC_8(FUNC_6(VAR_14.szPathName, VAR_18) == 0,
     "LZOpenFileA returned '%s', but was expected to return '%s' or '%s'\n",
     VAR_14.szPathName, VAR_18, VAR_19);
  FUNC_2(VAR_16);

  FUNC_7(&VAR_14, 0xA5, sizeof(VAR_14));


  VAR_16 = FUNC_3(VAR_13, &VAR_14, VAR_7);
  FUNC_8(VAR_16 >= 0, "LZOpenFileA failed on delete\n");
  FUNC_8(VAR_14.cBytes == sizeof(OFSTRUCT),
     "LZOpenFileA set test.cBytes to %d\n", VAR_14.cBytes);
  FUNC_8(VAR_14.nErrCode == VAR_1,
     "LZOpenFileA set test.nErrCode to %d\n", VAR_14.nErrCode);
  FUNC_8(FUNC_6(VAR_14.szPathName, VAR_18) == 0,
     "LZOpenFileA returned '%s', but was expected to return '%s' or '%s'\n",
     VAR_14.szPathName, VAR_18, VAR_19);
  FUNC_2(VAR_16);

  VAR_15 = FUNC_0(VAR_13);
  FUNC_8(VAR_15 == VAR_3,
     "GetFileAttributesA succeeded on deleted file\n");

  FUNC_9();
  FUNC_10();
}
