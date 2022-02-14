
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct stat {int st_size; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_8 ;
 int * FUNC_3 (int *,int ,int ,int ,int,int ) ;
 int FUNC_4 (char*,int,...) ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_12 ;

int FUNC_11(int VAR_13, char **VAR_14)
{
 int VAR_15, VAR_16;
 struct stat VAR_17;
 uint8_t *VAR_18;
 int VAR_19;

 while ((VAR_19 = FUNC_2(VAR_13, VAR_14, "wsj")) != -1) {
  switch (VAR_19) {
  case 'w':
   VAR_12 = 1;
   break;
  case 's':
   VAR_10 = 1;
   break;
  case 'j':
   VAR_8 = 1;
   break;
  default:
   return FUNC_10();
  }
 }

 if (VAR_9 + 2 != VAR_13)
  return FUNC_10();

 if (!FUNC_8(VAR_14[VAR_9], "-"))
  VAR_15 = 0;
 else
  VAR_15 = FUNC_4(VAR_14[VAR_9], VAR_3);
 if (VAR_15 == -1) {
  FUNC_0(VAR_11, "Failed to open source file: %s",
   FUNC_9(VAR_7));
  return FUNC_10();
 }
 if (FUNC_1(VAR_15, &VAR_17)) {
  FUNC_6("stat");
  return 1;
 }
 VAR_18 = FUNC_3(((void*)0), VAR_17.st_size, VAR_6, VAR_1, VAR_15, 0);
 if (VAR_18 == VAR_0) {
  FUNC_6("mmap");
  return 1;
 }

 if (!FUNC_8(VAR_14[VAR_9+1], "-"))
  VAR_16 = 1;
 else
  VAR_16 = FUNC_4(VAR_14[VAR_9+1], VAR_4|VAR_2|VAR_5, 0644);
 if (VAR_16 == -1) {
  FUNC_0(VAR_11, "Failed to open destination file: %s",
   FUNC_9(VAR_7));
  return FUNC_10();
 }
 if (FUNC_7(VAR_18, VAR_17.st_size))
  return 1;

 return FUNC_5(VAR_16);
}
