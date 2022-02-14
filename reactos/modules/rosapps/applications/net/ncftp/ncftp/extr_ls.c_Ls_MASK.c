
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int unoptstr ;
typedef int itempath ;
struct TYPE_26__ {int serverType; } ;
struct TYPE_24__ {int * vec; } ;
struct TYPE_25__ {TYPE_3__ fil; } ;
struct TYPE_23__ {TYPE_1__* first; } ;
struct TYPE_22__ {char* line; struct TYPE_22__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__ LineList ;
typedef TYPE_3__* FileInfoListPtr ;
typedef TYPE_3__ FileInfoList ;
typedef int FILE ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*,char*,TYPE_2__*,char*,int,int*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int,int *) ;
 int FUNC_5 (TYPE_3__*,int,int *) ;
 int FUNC_6 (char*,TYPE_3__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_3__*,int,int,int *) ;
 int FUNC_9 (char*,int,int ,char*) ;
 int FUNC_10 (char*,char const* const) ;
 int FUNC_11 (TYPE_3__*,int,int) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_14 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int *,char*,...) ;
 TYPE_6__ VAR_0 ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int FUNC_17 (char*,int ,int) ;
 int VAR_3 ;

void
FUNC_18(const char *const VAR_4, int VAR_5, const char *const VAR_6, FILE *VAR_7)
{
 char VAR_8[512];
 FileInfoList VAR_9;
 FileInfoListPtr VAR_10;
 LinePtr VAR_11, VAR_12;
 LineList VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 const char *VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 char VAR_23[32];
 char VAR_24[32];
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;

 FUNC_3(&VAR_13);
 FUNC_2(&VAR_9);

 VAR_20 = 'n';
 VAR_21 = 'a';
 VAR_15 = 0;
 VAR_16 = (VAR_5 == 'C') ? 1 : 0;
 VAR_22 = 0;
 FUNC_17(VAR_24, 0, sizeof(VAR_24));
 VAR_24[0] = '-';
 VAR_25 = 0;
 VAR_17 = 0;

 for (VAR_19 = VAR_6; *VAR_19 != '\0'; VAR_19++) {
  VAR_18 = *VAR_19;
  switch (VAR_18) {
   case 't':
    VAR_20 = 't';
    break;
   case 'S':
    VAR_20 = 's';
    break;
   case 'r':
    VAR_21 = 'd';
    break;
   case 'L':
    VAR_15 = 1;
    break;
   case 'f':
    VAR_25 = 1;
    break;
   case 'F':
   case 'p':
    VAR_16 = 1;
    break;
   case '1':
   case 'C':
   case 'l':
    VAR_5 = VAR_18;
    break;
   case '-':
    break;
   default:
    if (VAR_22 < ((int) sizeof(VAR_24) - 2))
     VAR_24[VAR_22 + 1] = VAR_18;
    VAR_22++;
    break;
  }
 }


 FUNC_9(VAR_8, sizeof(VAR_8), VAR_2,
  (VAR_4 == ((void*)0)) ? "." : VAR_4);

 if (VAR_22 > 0) {




  FUNC_12(0, "ls caching not used because of ls flags: %s\n", VAR_24);
  VAR_23[0] = '-';
  VAR_23[1] = VAR_5;
  VAR_23[2] = '\0';
  (void) FUNC_10(VAR_23, VAR_6);
  if ((FUNC_1(&VAR_0, (VAR_4 == ((void*)0)) ? "" : VAR_4, &VAR_13, VAR_23, 1, 0)) < 0) {
   if (VAR_7 != ((void*)0))
    (void) FUNC_16(&VAR_3, "List failed.\n");
   return;
  }

  VAR_17 = 1;
  VAR_14 = -1;
  VAR_26 = 0;
  VAR_10 = ((void*)0);
 } else if ((VAR_25 != 0) || ((VAR_28 = FUNC_7(VAR_8)) < 0)) {

  VAR_26 = 0;

  VAR_27 = 1;
  if ((FUNC_1(&VAR_0, (VAR_4 == ((void*)0)) ? "" : VAR_4, &VAR_13, "-l", 1, &VAR_27)) < 0) {
   if (VAR_7 != ((void*)0))
    (void) FUNC_16(&VAR_3, "List failed.\n");
   return;
  }

  VAR_17 = 1;
  VAR_10 = &VAR_9;
  if (VAR_27 != 0) {
   VAR_14 = FUNC_14(VAR_10, &VAR_13);
   if (VAR_14 < 0) {
    FUNC_12(0, "UnMlsD: %d\n", VAR_14);
   }
  } else {
   VAR_14 = FUNC_13(VAR_10, &VAR_13, VAR_0.serverType);
   if (VAR_14 < 0) {
    FUNC_12(0, "UnLslR: %d\n", VAR_14);
   }
  }
  if (VAR_14 >= 0) {
   FUNC_15(VAR_10);
   if (VAR_10->vec == ((void*)0)) {
    if (VAR_7 != ((void*)0))
     (void) FUNC_16(&VAR_3, "List processing failed.\n");
    return;
   }
  }
 } else {
  VAR_10 = &VAR_1[VAR_28].fil;
  VAR_26 = 1;
  VAR_14 = 1;
  FUNC_12(0, "ls cache hit: %s\n", VAR_8);
 }

 if (VAR_17 != 0) {
  FUNC_12(0, "Remote listing contents {\n");
  for (VAR_11 = VAR_13.first;
   VAR_11 != ((void*)0);
   VAR_11 = VAR_12)
  {
   VAR_12 = VAR_11->next;
   FUNC_12(0, "    %s\n", VAR_11->line);
  }
  FUNC_12(0, "}\n");
 }

 if (VAR_14 >= 0) {
  FUNC_11(VAR_10, VAR_20, VAR_21);
  if (VAR_7 != ((void*)0)) {
   if (VAR_5 == 'l')
    FUNC_8(VAR_10, VAR_16, VAR_15, VAR_7);
   else if (VAR_5 == '1')
    FUNC_4(VAR_10, VAR_16, VAR_7);
   else
    FUNC_5(VAR_10, VAR_16, VAR_7);
  }
  if (VAR_26 == 0) {
   FUNC_6(VAR_8, VAR_10);
  }
 } else if (VAR_7 != ((void*)0)) {
  for (VAR_11 = VAR_13.first;
   VAR_11 != ((void*)0);
   VAR_11 = VAR_12)
  {
   VAR_12 = VAR_11->next;
   (void) FUNC_16(VAR_7, "%s\n", VAR_11->line);
   FUNC_12(0, "    %s\n", VAR_11->line);
  }
 }

 FUNC_0(&VAR_13);
}
