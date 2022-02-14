
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HINTERNET ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int*,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char*,int ,int *,int *,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ,int ,int,int ) ;
 int FUNC_6 (scalar_t__,char*,int,int*) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static void FUNC_10(void)
{
  HINTERNET VAR_7, VAR_8;
  char VAR_9[0x400];
  DWORD VAR_10, VAR_11, VAR_12=0;
  BOOL VAR_13;

  VAR_13 = FUNC_0(VAR_6);
  FUNC_8(VAR_13 || FUNC_1() == VAR_0,
          "DeleteUrlCacheEntry returned %x, GetLastError() = %d\n", VAR_13, FUNC_1());

  VAR_7 = FUNC_4("Winetest",0,((void*)0),((void*)0),VAR_3);
  FUNC_8((VAR_7 != 0), "InternetOpen failed, error %u\n",FUNC_1());
  VAR_10 = 0x400;
  VAR_13 = FUNC_2(VAR_6, VAR_9, &VAR_10,VAR_2);
  FUNC_8( VAR_13, "InternetCanonicalizeUrl failed, error %u\n",FUNC_1());

  FUNC_7(0);
  VAR_8 = FUNC_5(VAR_7, VAR_6, 0, 0,
      VAR_4|VAR_3|VAR_5,0);
  if (FUNC_1() == VAR_1)
    return;
  FUNC_8((VAR_8 != 0),"InternetOpenUrl failed, error %u\n",FUNC_1());
  VAR_13 = FUNC_6(VAR_8, VAR_9,0x400,&VAR_11);
  FUNC_8( VAR_13, "InternetReadFile failed, error %u\n",FUNC_1());
  VAR_12 += VAR_11;
  while (VAR_11 && FUNC_6(VAR_8, VAR_9,0x400,&VAR_11))
    VAR_12 += VAR_11;
  FUNC_9("read 0x%08x bytes\n",VAR_12);

  FUNC_3(VAR_8);
  FUNC_3(VAR_7);

  VAR_13 = FUNC_0(VAR_6);
  FUNC_8(!VAR_13 && FUNC_1() == VAR_0, "INTERNET_FLAG_NO_CACHE_WRITE flag doesn't work\n");
}
