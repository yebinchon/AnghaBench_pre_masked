
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef int DWORD ;
typedef char CHAR ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (char*,char*,...) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*,char*,int,char*) ;

__attribute__((used)) static void FUNC_15(CHAR *VAR_5, CHAR *VAR_6)
{
  CHAR VAR_7[VAR_1],VAR_8[VAR_1];
  char *VAR_9;
  DWORD VAR_10,VAR_11;



  VAR_10=FUNC_0(VAR_1,VAR_5);
  FUNC_10(VAR_10!=0 && VAR_10 < VAR_1,"GetCurrentDirectoryA failed\n");



  FUNC_9(VAR_7,"aaaaaaa");
  VAR_11=FUNC_0(VAR_10,VAR_7);
  FUNC_10(VAR_11==VAR_10+1, "GetCurrentDirectoryA returned %d instead of %d\n",VAR_11,VAR_10+1);
  FUNC_10(FUNC_8(VAR_7,"aaaaaaa")==0,
     "GetCurrentDirectoryA should not have modified the buffer\n");

  VAR_9 = FUNC_3( FUNC_2(), 0, 2 * 65536 );
  FUNC_6( 0xdeadbeef );
  FUNC_13( VAR_9, "foo" );
  VAR_10 = FUNC_0( 32767, VAR_9 );
  FUNC_10( VAR_10 != 0 && VAR_10 < VAR_1, "GetCurrentDirectoryA failed %u err %u\n", VAR_10, FUNC_1() );
  if (VAR_10) FUNC_10( !FUNC_12( VAR_9, VAR_5 ), "wrong result %s\n", VAR_9 );
  FUNC_6( 0xdeadbeef );
  FUNC_13( VAR_9, "foo" );
  VAR_10 = FUNC_0( 32768, VAR_9 );
  FUNC_10( VAR_10 != 0 && VAR_10 < VAR_1, "GetCurrentDirectoryA failed %u err %u\n", VAR_10, FUNC_1() );
  if (VAR_10) FUNC_10( !FUNC_12( VAR_9, VAR_5 ), "wrong result %s\n", VAR_9 );
  FUNC_6( 0xdeadbeef );
  FUNC_13( VAR_9, "foo" );
  VAR_10 = FUNC_0( 65535, VAR_9 );
  FUNC_10( (VAR_10 != 0 && VAR_10 < VAR_1) || FUNC_7(!VAR_10), "GetCurrentDirectoryA failed %u err %u\n", VAR_10, FUNC_1() );
  if (VAR_10) FUNC_10( !FUNC_12( VAR_9, VAR_5 ), "wrong result %s\n", VAR_9 );
  FUNC_6( 0xdeadbeef );
  FUNC_13( VAR_9, "foo" );
  VAR_10 = FUNC_0( 65536, VAR_9 );
  FUNC_10( (VAR_10 != 0 && VAR_10 < VAR_1) || FUNC_7(!VAR_10), "GetCurrentDirectoryA failed %u err %u\n", VAR_10, FUNC_1() );
  if (VAR_10) FUNC_10( !FUNC_12( VAR_9, VAR_5 ), "wrong result %s\n", VAR_9 );
  FUNC_6( 0xdeadbeef );
  FUNC_13( VAR_9, "foo" );
  VAR_10 = FUNC_0( 2 * 65536, VAR_9 );
  FUNC_10( (VAR_10 != 0 && VAR_10 < VAR_1) || FUNC_7(!VAR_10), "GetCurrentDirectoryA failed %u err %u\n", VAR_10, FUNC_1() );
  if (VAR_10) FUNC_10( !FUNC_12( VAR_9, VAR_5 ), "wrong result %s\n", VAR_9 );
  FUNC_4( FUNC_2(), 0, VAR_9 );



  if (0)
  {
      FUNC_0( 42, (LPSTR)(VAR_1 + 42) );
  }




  FUNC_11(VAR_7,"%s\\",VAR_6);
  FUNC_14(VAR_5,VAR_7,VAR_6,1,"check 1");
  FUNC_14(VAR_5,VAR_6,((void*)0),1,"check 2");



  FUNC_5(VAR_6);

  FUNC_11(VAR_7,"%s\\%s\\%s",VAR_6,VAR_4,VAR_3);
  FUNC_14(VAR_6,VAR_7,((void*)0),0,"check 3");

  FUNC_11(VAR_7,"%s\\%s\\%s",VAR_6,VAR_4,VAR_2);
  FUNC_14(VAR_6,VAR_7,((void*)0),0,"check 4");

  FUNC_11(VAR_7,"%s\\%s",VAR_6,VAR_0);
  FUNC_14(VAR_6,VAR_7,((void*)0),1,"check 5");

  FUNC_11(VAR_7,"%s",VAR_4);
  FUNC_11(VAR_8,"%s\\%s",VAR_6,VAR_4);
  FUNC_14(VAR_6,VAR_7,VAR_8,1,"check 6");

  FUNC_11(VAR_7,".\\%s",VAR_4);
  FUNC_14(VAR_6,VAR_7,VAR_8,1,"check 7");

  FUNC_11(VAR_7,"%s",VAR_0);
  FUNC_11(VAR_8,"%s\\%s",VAR_6,VAR_0);
  FUNC_14(VAR_6,VAR_7,VAR_8,1,"check 8");

  FUNC_11(VAR_7,".\\%s",VAR_0);
  FUNC_14(VAR_6,VAR_7,VAR_8,1,"check 9");



  FUNC_11(VAR_7, "%c:", VAR_6[0]);
  FUNC_14(VAR_6,VAR_7,VAR_6,1,"check 10");

  FUNC_11(VAR_7, "%c:\\", VAR_6[0]);
  FUNC_14(VAR_6,VAR_7,((void*)0),1,"check 11");
}
