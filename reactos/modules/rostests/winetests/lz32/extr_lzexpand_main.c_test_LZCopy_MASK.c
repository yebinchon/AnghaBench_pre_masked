
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OFSTRUCT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (scalar_t__,int ,int,int*,int ) ;
 int FUNC_8 (scalar_t__,int ,int,int*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int,char*,...) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_11(void)
{
  HANDLE VAR_14;
  DWORD VAR_15;
  int VAR_16, VAR_17;
  OFSTRUCT VAR_18, VAR_19;
  BOOL VAR_20;


  VAR_14 = FUNC_1(VAR_11, VAR_2, 0, ((void*)0), VAR_0, 0, 0);
  FUNC_10(VAR_14 != VAR_3,
     "CreateFileA: error %d\n", FUNC_3());
  VAR_20 = FUNC_8(VAR_14, VAR_8, VAR_9, &VAR_15, 0);
  FUNC_10( VAR_20, "WriteFile error %d\n", FUNC_3());
  FUNC_10(VAR_15 == VAR_9, "Wrote wrong number of bytes\n");
  FUNC_0(VAR_14);

  VAR_16 = FUNC_6(VAR_11, &VAR_18, VAR_5);
  FUNC_10(VAR_16 >= 0, "LZOpenFileA failed on compressed file\n");
  VAR_17 = FUNC_6(VAR_10, &VAR_19, VAR_4);
  FUNC_10(VAR_17 >= 0, "LZOpenFileA failed on creating new file %d\n", VAR_17);

  VAR_15 = FUNC_5(VAR_16, VAR_17);
  FUNC_10(VAR_15 > 0, "LZCopy error\n");

  FUNC_4(VAR_16);
  FUNC_4(VAR_17);

  VAR_14 = FUNC_1(VAR_10, VAR_1, 0, ((void*)0), VAR_6, 0, 0);
  FUNC_10(VAR_14 != VAR_3,
     "CreateFileA: error %d\n", FUNC_3());

  VAR_20 = FUNC_7(VAR_14, VAR_7, VAR_13*2, &VAR_15, 0);
  FUNC_10( VAR_20 && VAR_15 == VAR_13, "ReadFile: error %d\n", FUNC_3());

  FUNC_10(!FUNC_9(VAR_7, VAR_12, VAR_13),
     "buffer contents mismatch\n");
  FUNC_0(VAR_14);

  VAR_15 = FUNC_2(VAR_11);
  FUNC_10(VAR_15, "DeleteFileA: error %d\n", FUNC_3());
  VAR_15 = FUNC_2(VAR_10);
  FUNC_10(VAR_15, "DeleteFileA: error %d\n", FUNC_3());
}
