
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int time_t ;
struct tm {int tm_year; } ;
typedef scalar_t__ longest_int ;
typedef int linkto ;
typedef int fname ;
struct TYPE_13__ {size_t relnameLen; int type; char* plug; scalar_t__ size; int mdtm; int * rlinkto; int * lname; int * rname; int * relname; } ;
struct TYPE_12__ {size_t maxFileLen; size_t maxPlugLen; } ;
struct TYPE_11__ {TYPE_1__* first; } ;
struct TYPE_10__ {int line; struct TYPE_10__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__* LineListPtr ;
typedef TYPE_3__* FileInfoListPtr ;
typedef TYPE_4__ FileInfo ;


 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 char* FUNC_2 (char*,int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t,char*,int,int*,scalar_t__*,int *) ;
 int FUNC_5 (char*,char*,size_t,char*,int,char*,int,int*,scalar_t__*,int *,int ,int,int*) ;
 int FUNC_6 (int) ;
 int VAR_0 ;
 struct tm* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (char*,char*) ;
 size_t FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int *) ;

int
FUNC_14(FileInfoListPtr VAR_1, LineListPtr VAR_2, int VAR_3)
{
 char VAR_4[256];
 char VAR_5[256];
 int VAR_6 = 0;
 int VAR_7;
 size_t VAR_8 = 0;
 char VAR_9[256];
 char VAR_10[256];
 char *VAR_11;
 longest_int VAR_12;
 int VAR_13;
 time_t VAR_14, VAR_15;
 int VAR_16;
 struct tm *VAR_17;
 int VAR_18;
 LinePtr VAR_19;
 FileInfo VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;
 size_t VAR_23 = 0;
 size_t VAR_24 = 0;
 size_t VAR_25;
 int VAR_26;

 (void) FUNC_13(&VAR_15);
 VAR_17 = FUNC_7(&VAR_15);
 if (VAR_17 == ((void*)0))
  VAR_16 = 1970;
 else
  VAR_16 = VAR_17->tm_year + 1900;

 VAR_4[0] = '\0';

 FUNC_1(VAR_1);
 for (VAR_19 = VAR_2->first; VAR_19 != ((void*)0); VAR_19 = VAR_19->next) {
  VAR_7 = (int) FUNC_11(FUNC_2(VAR_5, VAR_19->line));
  if ((VAR_5[0] == 't') && (FUNC_12(VAR_5, "total", 5) == 0)) {

   if (VAR_5[VAR_7 - 1] != ':') {
    VAR_6 = 0;
    continue;
   }

  } else {
   for (VAR_11 = VAR_5; ; VAR_11++) {
    if ((*VAR_11 == '\0') || (!FUNC_6((int) *VAR_11)))
     break;
   }
   if (*VAR_11 == '\0') {


    VAR_6 = 1;
    continue;
   }
  }

  if ((VAR_6 != 0) && (VAR_5[VAR_7 - 1] == ':')) {

   VAR_6 = 0;
   if ((VAR_5[0] == '.') && (VAR_5[1] == '/')) {
    VAR_5[VAR_7 - 1] = '/';
    (void) FUNC_9(VAR_4, VAR_5 + 2, (size_t) VAR_7 + 1 - 2);
    VAR_8 = (size_t) (VAR_7 - 2);
   } else if ((VAR_5[0] == '.') && (VAR_5[1] == '\\')) {
    VAR_5[VAR_7 - 1] = '\\';
    (void) FUNC_9(VAR_4, VAR_5 + 2, (size_t) VAR_7 + 1 - 2);
    VAR_8 = (size_t) (VAR_7 - 2);
   } else {
    VAR_5[VAR_7 - 1] = '/';
    (void) FUNC_9(VAR_4, VAR_5, (size_t) VAR_7 + 1);
    VAR_8 = (size_t) VAR_7;
   }
   continue;
  }

  VAR_21++;
  VAR_18 = FUNC_5(VAR_5, VAR_4, VAR_8, VAR_9, sizeof(VAR_9), VAR_10, sizeof(VAR_10), &VAR_13, &VAR_12, &VAR_14, VAR_15, VAR_16, &VAR_26);
  if ((VAR_18 < 0) && (VAR_3 == VAR_0)) {
   VAR_18 = FUNC_4(VAR_5, VAR_4, VAR_8, VAR_9, sizeof(VAR_9), &VAR_13, &VAR_12, &VAR_14);
   if (VAR_18 == 0) {
    *VAR_10 = '\0';
    VAR_26 = 0;
   }
  }
  if (VAR_18 == 0) {
   VAR_22++;
   VAR_25 = FUNC_11(VAR_9);
   if (VAR_25 > VAR_23)
    VAR_23 = VAR_25;
   VAR_20.relnameLen = VAR_25;
   VAR_20.relname = FUNC_3(VAR_9);
   VAR_20.rname = ((void*)0);
   VAR_20.lname = ((void*)0);
   VAR_20.rlinkto = (VAR_10[0] == '\0') ? ((void*)0) : FUNC_3(VAR_10);
   VAR_20.mdtm = VAR_14;
   VAR_20.size = (longest_int) VAR_12;
   VAR_20.type = VAR_13;
   if (VAR_26 > 0) {
    VAR_20.plug = (char *) FUNC_8((size_t) VAR_26 + 1);
    if (VAR_20.plug != ((void*)0)) {
     (void) FUNC_9(VAR_20.plug, VAR_5, (size_t) VAR_26);
     VAR_20.plug[VAR_26] = '\0';
     if ((size_t) VAR_26 > VAR_24)
      VAR_24 = (size_t) VAR_26;
    }
   } else {
    VAR_20.plug = (char *) FUNC_8(32);
    if (VAR_20.plug != ((void*)0)) {
     FUNC_10(VAR_20.plug, "----------   1 ftpuser  ftpusers");
     VAR_20.plug[0] = (char) VAR_13;
     if (30 > VAR_24)
      VAR_24 = (size_t) 30;
    }
   }
   (void) FUNC_0(VAR_1, &VAR_20);
  }

  VAR_6 = 0;
 }

 VAR_1->maxFileLen = VAR_23;
 VAR_1->maxPlugLen = VAR_24;
 if (VAR_21 == 0)
  return (0);
 return ((VAR_22 > 0) ? VAR_22 : (-1));
}
