
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_13__ {TYPE_1__* import; scalar_t__ vaddr; } ;
struct TYPE_12__ {int flags; TYPE_2__* bin; int anal; int config; } ;
struct TYPE_11__ {char* prefix; int cur; } ;
struct TYPE_10__ {char* name; } ;
typedef int Sdb ;
typedef int RFlagItem ;
typedef TYPE_3__ RCore ;
typedef TYPE_4__ RBinReloc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 char* FUNC_7 (int ,char const*,char*,int ,int) ;
 char* FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (int *,char*) ;
 int * FUNC_12 (int ,char*,int ,int ) ;
 int FUNC_13 (int ,int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,int) ;
 void* FUNC_17 (char*,char*,char*,...) ;
 char* FUNC_18 (int *) ;
 char* FUNC_19 (int *,char*,int) ;
 char* FUNC_20 (char*,char const*,...) ;
 int FUNC_21 (int *) ;
 int * FUNC_22 (int *,char*,int ) ;
 int FUNC_23 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_24 (char*,char*) ;
 char* FUNC_25 (char*) ;
 int FUNC_26 (char const*) ;
 char* FUNC_27 (char*,char const*) ;

__attribute__((used)) static void FUNC_28(RCore *VAR_3, RBinReloc *VAR_4, ut64 VAR_5, Sdb **VAR_6, char **VAR_7) {
 int VAR_8 = FUNC_9 (VAR_3->config, "bin.demangle");
 bool VAR_9 = FUNC_9 (VAR_3->config, "bin.demangle.libs");
 const char *VAR_10 = FUNC_8 (VAR_3->config, "bin.lang");
 char *VAR_11, *VAR_12 = ((void*)0);
 bool VAR_13 = 1;
 int VAR_14 = FUNC_15 (0);

 if (VAR_4->import && VAR_4->import->name[0]) {
  char VAR_15[VAR_1];
  RFlagItem *VAR_16;

  if (VAR_13 && !VAR_14 && FUNC_27 (VAR_4->import->name, "Ordinal")) {
   const char *VAR_17 = ".dll_Ordinal_";
   char *VAR_18 = FUNC_25 (VAR_4->import->name);
   char *VAR_19 = FUNC_27 (VAR_18, VAR_17);

   FUNC_16 (VAR_18, 0);
   if (VAR_19) {
    char *VAR_20 = ((void*)0);
    int VAR_21;
    *VAR_19 = 0;
    VAR_19 += FUNC_26 (VAR_17);
    VAR_21 = FUNC_2 (VAR_19);
    if (!*VAR_7 || FUNC_24 (VAR_18, *VAR_7)) {
     FUNC_21 (*VAR_6);
     *VAR_6 = ((void*)0);
     FUNC_4 (*VAR_7);
     *VAR_7 = FUNC_25 (VAR_18);

     VAR_20 = FUNC_20 ("%s.sdb", VAR_18);
     FUNC_16 (VAR_20, 0);
     if (FUNC_10 (VAR_20)) {
      *VAR_6 = FUNC_22 (((void*)0), VAR_20, 0);
     } else {
      const char *VAR_22 = FUNC_18 (((void*)0));
      VAR_20 = FUNC_20 (FUNC_1 ("%s", VAR_0, "dll", "%s.sdb"),
       VAR_22, VAR_18);
      if (FUNC_10 (VAR_20)) {
       *VAR_6 = FUNC_22 (((void*)0), VAR_20, 0);
      }
     }
    }
    if (*VAR_6) {

     char *VAR_23 = FUNC_19 (*VAR_6, VAR_18, VAR_21 - 1);
     if (VAR_23) {
      if (VAR_3->bin->prefix) {
       VAR_4->import->name = FUNC_17
        ("%s.%s.%s", VAR_3->bin->prefix, VAR_18, VAR_23);
      } else {
       VAR_4->import->name = FUNC_17
        ("%s.%s", VAR_18, VAR_23);
      }
      FUNC_0 (VAR_23);
     }
    }
   }
   FUNC_4 (VAR_18);
   FUNC_6 (VAR_3->anal, VAR_4->vaddr, 4);
   FUNC_13 (VAR_3->anal, VAR_2, VAR_4->vaddr, VAR_4->vaddr+4, ((void*)0));
  }
  VAR_11 = VAR_4->import->name;
  if (VAR_3->bin->prefix) {
   FUNC_23 (VAR_15, VAR_1, "%s.reloc.%s", VAR_3->bin->prefix, VAR_11);
  } else {
   FUNC_23 (VAR_15, VAR_1, "reloc.%s", VAR_11);
  }
  if (VAR_8) {
   VAR_12 = FUNC_7 (VAR_3->bin->cur, VAR_10, VAR_15, VAR_5, VAR_9);
   if (VAR_12) {
    FUNC_23 (VAR_15, VAR_1, "reloc.%s", VAR_12);
   }
  }
  FUNC_14 (VAR_15, 0);
  VAR_16 = FUNC_12 (VAR_3->flags, VAR_15, VAR_5, FUNC_3 (VAR_4));
  if (VAR_12) {
   char *VAR_24;
   if (VAR_3->bin->prefix) {
    VAR_24 = FUNC_20 ("%s.reloc.%s", VAR_3->bin->prefix, VAR_12);
   } else {
    VAR_24 = FUNC_20 ("reloc.%s", VAR_12);
   }
   FUNC_11 (VAR_16, VAR_24);
  }
  FUNC_4 (VAR_12);
 } else {
  char *VAR_25 = FUNC_5 (VAR_3, VAR_4, VAR_5);
  if (VAR_25) {
   FUNC_12 (VAR_3->flags, VAR_25, VAR_5, FUNC_3 (VAR_4));
  } else {

  }
 }
}
