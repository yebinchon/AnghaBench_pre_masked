
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sum ;
typedef scalar_t__ off_t ;
typedef int id ;
struct TYPE_3__ {scalar_t__ attr; int lcase; int* name; } ;
typedef TYPE_1__ DIR_ENT ;


 int VAR_0 ;
 char* FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,int,int*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;
 int FUNC_8 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int ,int ,int) ;
 scalar_t__ FUNC_10 (int ,int) ;
 int FUNC_11 (char*,...) ;

char *FUNC_12(DIR_ENT * VAR_13, off_t * VAR_14)
{
    char *VAR_15;
    uint8_t VAR_16;
    int VAR_17;

    *VAR_14 = 0;
    if (VAR_13->attr == VAR_5)
 FUNC_3("lfn_get called with LFN directory entry");






    if (VAR_11 == -1)

 return ((void*)0);

    if (VAR_11 != 0) {





 char *VAR_18 = FUNC_0();
 char *VAR_19 = FUNC_4(VAR_13->name);
 FUNC_11("Unfinished long file name \"%s\".\n"
        "  (Start may have been overwritten by %s)\n",
        VAR_18, VAR_19);
 FUNC_5(VAR_18);
 if (VAR_7) {
     FUNC_11("1: Delete LFN\n2: Leave it as it is.\n"
     "3: Fix numbering (truncates long name and attaches "
     "it to short name %s)\n", VAR_19);
 } else
     FUNC_11("  Not auto-correcting this.\n");
 switch (VAR_7 ? FUNC_7("123", "?") : '2') {
 case '1':
     FUNC_1(0, VAR_10 - 1);
     FUNC_8();
     return ((void*)0);
 case '2':
     FUNC_8();
     return ((void*)0);
 case '3':
     for (VAR_17 = 0; VAR_17 < VAR_10; ++VAR_17) {
  uint8_t VAR_20 = (VAR_10 - VAR_17) | (VAR_17 == 0 ? VAR_2 : 0);
  FUNC_6(VAR_9[VAR_17] + FUNC_10(VAR_1, VAR_20),
    sizeof(VAR_20), &VAR_20);
     }
     FUNC_9(VAR_12, VAR_12 + VAR_11 * VAR_0 * 2,
      VAR_10 * VAR_0 * 2);
     break;
 }
    }

    for (VAR_16 = 0, VAR_17 = 0; VAR_17 < VAR_3; VAR_17++)
 VAR_16 = (((VAR_16 & 1) << 7) | ((VAR_16 & 0xfe) >> 1)) + VAR_13->name[VAR_17];
    if (VAR_16 != VAR_8) {



 char *VAR_21 = FUNC_0();
 char *VAR_22 = FUNC_4(VAR_13->name);
 FUNC_11("Wrong checksum for long file name \"%s\".\n"
        "  (Short name %s may have changed without updating the long name)\n",
        VAR_21, VAR_22);
 FUNC_5(VAR_21);
 if (VAR_7) {
     FUNC_11("1: Delete LFN\n2: Leave it as it is.\n"
     "3: Fix checksum (attaches to short name %s)\n", VAR_22);
 } else
     FUNC_11("  Not auto-correcting this.\n");
 if (VAR_7) {
     switch (FUNC_7("123", "?")) {
     case '1':
  FUNC_1(0, VAR_10 - 1);
  FUNC_8();
  return ((void*)0);
     case '2':
  FUNC_8();
  return ((void*)0);
     case '3':
  for (VAR_17 = 0; VAR_17 < VAR_10; ++VAR_17) {
      FUNC_6(VAR_9[VAR_17] + FUNC_10(VAR_1, VAR_6),
        sizeof(VAR_16), &VAR_16);
  }
  break;
     }
 }
    }

    *VAR_14 = VAR_9[0];
    VAR_15 = FUNC_2(VAR_12, VAR_4, 1);
    FUNC_8();
    return (VAR_15);
}
