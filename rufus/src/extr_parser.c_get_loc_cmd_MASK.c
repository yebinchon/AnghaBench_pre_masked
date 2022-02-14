
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {scalar_t__ command; int ctrl_id; int unum_size; void** unum; void** num; void** txt; scalar_t__ line_nr; } ;
typedef TYPE_1__ loc_cmd ;
typedef void* int32_t ;
struct TYPE_7__ {char c; scalar_t__ cmd; int* arg_type; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_2__* VAR_2 ;
 void* FUNC_6 (char*) ;
 char* VAR_3 ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char**,int ) ;
 int FUNC_11 (char*,int) ;

__attribute__((used)) static loc_cmd* FUNC_12(char VAR_4, char* VAR_5) {
 size_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0;
 char *VAR_13, *VAR_14, *VAR_15;
 loc_cmd* VAR_16 = ((void*)0);

 for (VAR_7=0; VAR_7<FUNC_0(VAR_2); VAR_7++) {
  if (VAR_4 == VAR_2[VAR_7].c)
   break;
 }
 if (VAR_7 >= FUNC_0(VAR_2)) {
  FUNC_3("unknown command");
  return ((void*)0);
 }

 VAR_16 = (loc_cmd*)FUNC_1(sizeof(loc_cmd), 1);
 if (VAR_16 == ((void*)0)) {
  FUNC_3("could not allocate command");
  return ((void*)0);
 }
 VAR_16->command = VAR_2[VAR_7].cmd;
 VAR_16->ctrl_id = (VAR_16->command <= VAR_0)?-1:0;
 VAR_16->line_nr = (uint16_t)VAR_1;

 VAR_6 = 0;
 for (VAR_8 = 0; VAR_2[VAR_7].arg_type[VAR_8] != 0; VAR_8++) {

  VAR_6 += FUNC_8(&VAR_5[VAR_6], VAR_3);
  VAR_10 = VAR_6;
  if (VAR_5[VAR_6] == 0) {
   FUNC_4("missing parameter for command '%c'", VAR_2[VAR_7].c);
   goto err;
  }
  switch(VAR_2[VAR_7].arg_type[VAR_8]) {
  case 's':

   if (VAR_5[VAR_6++] != '"') {
    FUNC_3("no start quote");
    goto err;
   }
   VAR_10 = VAR_6;

   while ((VAR_5[VAR_6] != 0) && ((VAR_5[VAR_6] != '"') || ((VAR_5[VAR_6] == '"') && (VAR_5[VAR_6-1] == '\\')))) {
    if ((VAR_5[VAR_6] == '"') && (VAR_5[VAR_6-1] == '\\')) {
     FUNC_7(&VAR_5[VAR_6-1], &VAR_5[VAR_6]);
    } else {
     VAR_6++;
    }
   }
   if (VAR_5[VAR_6] == 0) {
    FUNC_3("no end quote");
    goto err;
   }
   VAR_5[VAR_6++] = 0;
   VAR_16->txt[VAR_11++] = FUNC_6(&VAR_5[VAR_10]);
   break;
  case 'c':
   while ((VAR_5[VAR_6] != 0) && (VAR_5[VAR_6] != VAR_3[0]) && (VAR_5[VAR_6] != VAR_3[1]))
    VAR_6++;
   if (VAR_5[VAR_6] != 0)
    VAR_5[VAR_6++] = 0;
   VAR_16->txt[VAR_11++] = FUNC_6(&VAR_5[VAR_10]);
   break;
  case 'i':

   if ((VAR_5[VAR_6] == ',') || (VAR_5[VAR_6] == '.')) {
    VAR_6 += FUNC_8(&VAR_5[VAR_6+1], VAR_3);
    VAR_10 = VAR_6;
   }
   while ((VAR_5[VAR_6] != 0) && (VAR_5[VAR_6] != VAR_3[0]) && (VAR_5[VAR_6] != VAR_3[1])
    && (VAR_5[VAR_6] != ',') && (VAR_5[VAR_6] != '.'))
    VAR_6++;
   VAR_14 = &VAR_5[VAR_6];
   if (VAR_5[VAR_6] != 0)
    VAR_5[VAR_6++] = 0;
   VAR_16->num[VAR_12++] = (int32_t)FUNC_10(&VAR_5[VAR_10], &VAR_13, 0);
   if (VAR_13 != VAR_14) {
    FUNC_3("invalid integer");
    goto err;
   }
   break;
  case 'u':

   VAR_16->unum_size = 1;
   for (VAR_9=VAR_6; VAR_5[VAR_9] != 0; VAR_9++) {
    if ((VAR_5[VAR_9] == '.') || (VAR_5[VAR_9] == ','))
     VAR_16->unum_size++;
   }
   VAR_16->unum = (uint32_t*)FUNC_5(VAR_16->unum_size * sizeof(uint32_t));
   if (VAR_16->unum == ((void*)0)) {
    FUNC_3("could not allocate memory");
    goto err;
   }
   VAR_15 = FUNC_9(&VAR_5[VAR_6], ".,");
   for (VAR_9=0; (VAR_9<VAR_16->unum_size) && (VAR_15 != ((void*)0)); VAR_9++) {
    VAR_16->unum[VAR_9] = (int32_t)FUNC_10(VAR_15, &VAR_13, 0);
    VAR_15 = FUNC_9(((void*)0), ".,");
   }
   if ((VAR_15 != ((void*)0)) || (VAR_9 != VAR_16->unum_size)) {
    FUNC_3("internal error (unexpected number of numeric values)");
    goto err;
   }
   break;
  default:
   FUNC_11("localization: unhandled arg_type '%c'\n", VAR_2[VAR_7].arg_type[VAR_8]);
   goto err;
  }
 }

 return VAR_16;

err:
 FUNC_2(VAR_16);
 return ((void*)0);
}
