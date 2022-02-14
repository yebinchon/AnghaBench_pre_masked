
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flash_partition_entry {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct flash_partition_entry*,size_t,char*,unsigned long,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int,int,int *) ;
 scalar_t__ FUNC_4 (int *,long,int ) ;
 char* FUNC_5 (char*,int,int) ;
 scalar_t__ FUNC_6 (char*,char const*,int) ;
 int VAR_2 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char*,int) ;
 unsigned long FUNC_9 (char*,int *,int) ;

__attribute__((used)) static int FUNC_10(
  FILE *VAR_3, long VAR_4,
  struct flash_partition_entry *VAR_5, size_t VAR_6,
  int VAR_7)
{
 char VAR_8[2048];
 char *VAR_9, *VAR_10;
 const char *VAR_11 = ((void*)0);
 const char *VAR_12 = "fwup-ptn";
 const char *VAR_13 = "partition";



 switch(VAR_7) {
  case 0:
   VAR_11 = VAR_12;
   break;
  case 1:
   VAR_11 = VAR_13;
   break;
  default:
   FUNC_1(1, 0, "Invalid partition table");
 }

 if (FUNC_4(VAR_3, VAR_4, VAR_0) < 0)
  FUNC_1(1, VAR_1, "Can not seek in the firmware");

 if (FUNC_3(VAR_8, 2048, 1, VAR_3) != 1)
  FUNC_1(1, VAR_1, "Can not read fwup-ptn from the firmware");

 VAR_8[2047] = '\0';


 if (FUNC_6(VAR_8, VAR_11, FUNC_7(VAR_11)) != 0) {
  FUNC_2(VAR_2, "DEBUG: can not find fwuphdr\n");
  return 1;
 }

 VAR_9 = VAR_8;
 VAR_10 = VAR_8 + sizeof(VAR_8);
 while ((VAR_9 + FUNC_7(VAR_11)) < VAR_10 &&
   FUNC_6(VAR_9, VAR_11, FUNC_7(VAR_11)) == 0) {
  char *VAR_14;
  char *VAR_15;

  char VAR_16[32] = { 0 };
  int VAR_17 = 0;
  unsigned long VAR_18 = 0;
  unsigned long VAR_19 = 0;

  VAR_14 = FUNC_5(VAR_9, '\n', (VAR_10 - VAR_9));
  if (VAR_14 == ((void*)0)) {

   break;
  }

  for (int VAR_20 = 0; VAR_20 <= 4; VAR_20++) {
   if (VAR_14 <= VAR_9)
    break;

   VAR_15 = FUNC_5(VAR_9, 0x20, (VAR_14 - VAR_9));
   if (VAR_15 == ((void*)0)) {
    FUNC_1(1, VAR_1, "Ignoring the rest of the partition entries.");
    break;
   }

   switch (VAR_20) {

    case 0:
     VAR_9 = VAR_15 + 1;
     continue;

    case 1:
     VAR_17 = (VAR_15 - VAR_9) > 31 ? 31 : (VAR_15 - VAR_9);
     FUNC_8(VAR_16, VAR_9, VAR_17);
     VAR_16[VAR_17] = '\0';
     VAR_9 = VAR_15 + 1;
     continue;


    case 2:
     VAR_9 = VAR_15 + 1;
     continue;


    case 3:
     VAR_18 = FUNC_9(VAR_9, ((void*)0), 16);
     VAR_9 = VAR_15 + 1;
     continue;


    case 4:
     VAR_9 = VAR_15 + 1;

     VAR_19 = FUNC_9(VAR_9, ((void*)0), 16);

     VAR_9 = VAR_14 + 1;
     FUNC_0(VAR_5, VAR_6, VAR_16, VAR_18, VAR_19);
     continue;
   }
  }
 }

 return 0;
}
