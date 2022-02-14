
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int command; char const** txt; int unum_size; int* unum; void** num; int list; int ctrl_id; } ;
typedef TYPE_1__ loc_cmd ;
typedef int line ;
typedef void* int32_t ;
struct TYPE_7__ {char const c; int flag; } ;
typedef int FILE ;
typedef int BOOL ;


 size_t FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 size_t FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ,int ) ;
 long FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (char,char*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char const,...) ;
 int * FUNC_14 (char const*) ;
 int VAR_6 ;
 size_t FUNC_15 (char*,int ) ;
 int FUNC_16 (char*,...) ;

BOOL FUNC_17(const char* VAR_7)
{
 FILE* VAR_8 = ((void*)0);
 BOOL VAR_9 = VAR_0;
 char VAR_10[1024];
 size_t VAR_11, VAR_12, VAR_13;
 loc_cmd *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 long VAR_16;
 int VAR_17 = 0;
 uint32_t VAR_18 = -1, VAR_19 = -1;

 VAR_8 = FUNC_14(VAR_7);
 if (VAR_8 == ((void*)0))
  goto out;


 VAR_11 = FUNC_3(VAR_10, 1, sizeof(VAR_10), VAR_8);
 if (VAR_11 < sizeof(VAR_10)) {
  FUNC_16("Invalid loc file: the file is too small!");
  goto out;
 }
 if (((uint8_t)VAR_10[0]) > 0x80) {
  FUNC_16("Invalid loc file: the file should not have a BOM (Byte Order Mark)");
  goto out;
 }
 for (VAR_11=0; VAR_11<sizeof(VAR_10)-1; VAR_11++)
  if ((((uint8_t)VAR_10[VAR_11]) == 0x0D) && (((uint8_t)VAR_10[VAR_11+1]) == 0x0A)) break;
 if (VAR_11 >= sizeof(VAR_10)-1) {
  FUNC_16("Invalid loc file: the file MUST be saved in DOS mode (CR/LF)");
  goto out;
 }
 FUNC_6(VAR_8, 0, VAR_2);

 VAR_4 = 0;
 VAR_10[0] = 0;
 FUNC_5();
 do {

  VAR_16 = FUNC_7(VAR_8);
  if (FUNC_2(VAR_10, sizeof(VAR_10), VAR_8) == ((void*)0))
   break;
  VAR_4++;

  VAR_11 = FUNC_15(VAR_10, VAR_6);
  if ((VAR_10[VAR_11] != 'l') && (VAR_10[VAR_11] != 'v') && (VAR_10[VAR_11] != 'a'))
   continue;

  VAR_14 = FUNC_8(VAR_10[VAR_11], &VAR_10[VAR_11+1]);
  if ((VAR_14 == ((void*)0)) || ((VAR_14->command != 129) && (VAR_14->command != 128) && (VAR_14->command != 130))) {
   FUNC_4(VAR_14);
   continue;
  }
  switch (VAR_14->command) {
  case 129:

   if (VAR_15 != ((void*)0)) {
    if (VAR_17 == 0) {
     FUNC_16("localization: no compatible version was found - this locale will be ignored\n");
     FUNC_10(&VAR_15->list);
     FUNC_4(VAR_15);
    } else {
     VAR_15->num[1] = (int32_t)VAR_16;
    }
   }
   VAR_14->num[0] = (int32_t)FUNC_7(VAR_8);

   FUNC_9(&VAR_14->list, &VAR_5);
   FUNC_16("localization: found locale '%s'\n", VAR_14->txt[0]);
   VAR_15 = VAR_14;
   VAR_17 = 0;
   break;
  case 130:
   if (VAR_15 == ((void*)0)) {
    FUNC_12("[a]ttributes cannot precede [l]ocale");
   } else for(VAR_12=0; VAR_14->txt[0][VAR_12] != 0; VAR_12++) {
    for (VAR_13=0; VAR_13<FUNC_0(VAR_3); VAR_13++) {
     if (VAR_3[VAR_13].c == VAR_14->txt[0][VAR_12]) {

      VAR_15->ctrl_id |= VAR_3[VAR_13].flag;
      break;
     }
    }
    if (VAR_13 >= FUNC_0(VAR_3))
     FUNC_13("unknown attribute '%c' - ignored", VAR_14->txt[0][VAR_12]);
   }
   FUNC_4(VAR_14);
   break;
  case 128:
   if (VAR_17 != 0) {
    FUNC_13("[v]ersion was already provided at line %d", VAR_17);
   } else if (VAR_14->unum_size != 2) {
    FUNC_12("[v]ersion format is invalid");
   } else if (VAR_15 == ((void*)0)) {
    FUNC_12("[v]ersion cannot precede [l]ocale");
   } else if (VAR_18 == -1) {


    VAR_18 = VAR_14->unum[0];
    VAR_19 = VAR_14->unum[1];
    VAR_17 = VAR_4;
   } else {
    if ((VAR_14->unum[0] < VAR_18) || ((VAR_14->unum[0] == VAR_18) && (VAR_14->unum[1] < VAR_19))) {
     VAR_15->ctrl_id |= VAR_1;
     FUNC_13("the version of this translation is older than the base one and may result in some messages not being properly translated.\n"
      "If you are the translator, please update your translation with the changes that intervened between v%d.%d and v%d.%d.\n"
      "See https://github.com/pbatard/rufus/blob/master/res/loc/ChangeLog.txt",
      VAR_14->unum[0], VAR_14->unum[1], VAR_18, VAR_19);
    }
    VAR_17 = VAR_4;
   }
   FUNC_4(VAR_14);
   break;
  }
 } while (1);
 if (VAR_15 != ((void*)0)) {
  if (VAR_17 == 0) {
   FUNC_16("localization: no compatible version was found - this locale will be ignored\n");
   FUNC_10(&VAR_15->list);
   FUNC_4(VAR_15);
  } else {
   VAR_15->num[1] = (int32_t)FUNC_7(VAR_8);
  }
 }
 VAR_9 = !FUNC_11(&VAR_5);
 if (VAR_9 == VAR_0)
  FUNC_16("localization: '%s' contains no valid locale sections\n", VAR_7);

out:
 if (VAR_8 != ((void*)0))
  FUNC_1(VAR_8);
 return VAR_9;
}
