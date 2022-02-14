
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GUID ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (int const*,int *) ;
 int VAR_3 ;
 int ** VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int const*,char*,int) ;
 scalar_t__ FUNC_3 (char*,int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
  const GUID **VAR_6 = VAR_4;
  char VAR_7[256];
  GUID VAR_8;
  DWORD VAR_9;
  BOOL VAR_10;
  int VAR_11 = 0;
  BOOL VAR_12 = VAR_1;

  if (!&FUNC_3 || !&FUNC_2)
    return;

  while (*VAR_6)
  {
    VAR_9 = FUNC_2(*VAR_6, VAR_7, 256);
    if (!VAR_11 && VAR_9 == VAR_3) VAR_12 = VAR_5;
    FUNC_1(VAR_9 == (VAR_12 ? VAR_3 : 39), "wrong size %u for id %d\n", VAR_9, VAR_11);

    VAR_10 = FUNC_3(VAR_7, &VAR_8);
    FUNC_1(VAR_10 != VAR_1, "created invalid string '%s'\n", VAR_7);

    if (VAR_10)
      FUNC_1(FUNC_0(*VAR_6, &VAR_8), "GUID created wrong %d\n", VAR_11);

    VAR_6++;
    VAR_11++;
  }


  VAR_9 = FUNC_2(&VAR_2, VAR_7, 256);
  FUNC_1(VAR_9 == (VAR_12 ? VAR_3 : 39), "wrong size %u for IID_Endianness\n", VAR_9);

  FUNC_1(!FUNC_4(VAR_7, "{01020304-0506-0708-090A-0B0C0D0E0F0A}"),
     "Endianness Broken, got '%s'\n", VAR_7);


  VAR_7[0] = ':';
  VAR_9 = FUNC_2(&VAR_2, VAR_7, 0);
  FUNC_1(VAR_9 == (VAR_12 ? VAR_0 : 0), "accepted bad length\n");
  FUNC_1(VAR_7[0] == ':', "wrote to buffer with no length\n");

  VAR_7[0] = ':';
  VAR_9 = FUNC_2(&VAR_2, VAR_7, 38);
  FUNC_1(VAR_9 == (VAR_12 ? VAR_0 : 0), "accepted bad length\n");
  FUNC_1(VAR_7[0] == ':', "wrote to buffer with no length\n");

  VAR_7[0] = ':';
  VAR_9 = FUNC_2(&VAR_2, VAR_7, 39);
  FUNC_1(VAR_9 == (VAR_12 ? VAR_3 : 39), "rejected ok length\n");
  FUNC_1(VAR_7[0] == '{', "Didn't write to buffer with ok length\n");


  FUNC_5(VAR_7, "{xxx-");
  VAR_10 = FUNC_3(VAR_7, &VAR_8);
  FUNC_1(VAR_10 == VAR_1, "accepted invalid string\n");

  VAR_9 = FUNC_2(&VAR_2, VAR_7, 39);
  FUNC_1(VAR_9 == (VAR_12 ? VAR_3 : 39), "rejected ok length\n");
  FUNC_1(VAR_7[0] == '{', "Didn't write to buffer with ok length\n");
}
