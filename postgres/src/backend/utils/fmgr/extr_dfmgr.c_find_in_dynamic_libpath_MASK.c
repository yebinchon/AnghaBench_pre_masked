
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int * FUNC_8 (char const*) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,char*,char const*) ;
 int FUNC_14 (char*,char const*,size_t) ;
 int FUNC_15 (char const*) ;
 char* FUNC_16 (char*) ;

__attribute__((used)) static char *
FUNC_17(const char *VAR_4)
{
 const char *VAR_5;
 size_t VAR_6;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(FUNC_8(VAR_4) == ((void*)0));
 FUNC_1(VAR_1 != ((void*)0));

 VAR_5 = VAR_1;
 if (FUNC_15(VAR_5) == 0)
  return ((void*)0);

 VAR_6 = FUNC_15(VAR_4);

 for (;;)
 {
  size_t VAR_7;
  char *VAR_8;
  char *VAR_9;
  char *VAR_10;

  VAR_8 = FUNC_9(VAR_5);
  if (VAR_8 == VAR_5)
   FUNC_4(VAR_3,
     (FUNC_5(VAR_2),
      FUNC_6("zero-length component in parameter \"dynamic_library_path\"")));

  if (VAR_8 == ((void*)0))
   VAR_7 = FUNC_15(VAR_5);
  else
   VAR_7 = VAR_8 - VAR_5;

  VAR_8 = FUNC_11(VAR_7 + 1);
  FUNC_14(VAR_8, VAR_5, VAR_7 + 1);

  VAR_9 = FUNC_16(VAR_8);
  FUNC_12(VAR_8);

  FUNC_2(VAR_9);


  if (!FUNC_10(VAR_9))
   FUNC_4(VAR_3,
     (FUNC_5(VAR_2),
      FUNC_6("component in parameter \"dynamic_library_path\" is not an absolute path")));

  VAR_10 = FUNC_11(FUNC_15(VAR_9) + 1 + VAR_6 + 1);
  FUNC_13(VAR_10, "%s/%s", VAR_9, VAR_4);
  FUNC_12(VAR_9);

  FUNC_3(VAR_0, "find_in_dynamic_libpath: trying \"%s\"", VAR_10);

  if (FUNC_7(VAR_10))
   return VAR_10;

  FUNC_12(VAR_10);

  if (VAR_5[VAR_7] == '\0')
   break;
  else
   VAR_5 += VAR_7 + 1;
 }

 return ((void*)0);
}
