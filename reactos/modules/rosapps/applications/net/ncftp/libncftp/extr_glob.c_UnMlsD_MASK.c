
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int og ;
typedef scalar_t__ longest_int ;
struct TYPE_16__ {size_t relnameLen; char type; int * plug; scalar_t__ size; int mdtm; int * rlinkto; int * lname; int * rname; int * relname; } ;
struct TYPE_15__ {size_t maxFileLen; size_t maxPlugLen; } ;
struct TYPE_14__ {TYPE_2__* first; } ;
struct TYPE_13__ {int line; struct TYPE_13__* next; } ;
struct TYPE_12__ {char* fname; char* linkto; char ftype; int mode; char* perm; char* owner; char* group; scalar_t__ fsize; int ftime; } ;
typedef TYPE_1__ MLstItem ;
typedef TYPE_2__* LinePtr ;
typedef TYPE_3__* LineListPtr ;
typedef TYPE_4__* FileInfoListPtr ;
typedef TYPE_5__ FileInfo ;


 int FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*,char*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 char** VAR_0 ;
 int FUNC_5 (char*,int,char*) ;
 char* FUNC_6 (char*,char*,char const*,char const*,...) ;
 int * FUNC_7 (char*,char) ;
 size_t FUNC_8 (char*) ;

int
FUNC_9(FileInfoListPtr VAR_1, LineListPtr VAR_2)
{
 MLstItem VAR_3;
 char VAR_4[64];
 char VAR_5[32];
 int VAR_6;
 LinePtr VAR_7;
 FileInfo VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;
 size_t VAR_12 = 0;
 size_t VAR_13 = 0;
 size_t VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 const char *VAR_19, *VAR_20, *VAR_21;

 FUNC_1(VAR_1);
 for (VAR_7 = VAR_2->first; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
  VAR_9++;
  VAR_6 = FUNC_4(VAR_7->line, &VAR_3);
  if (VAR_6 == 0) {
   VAR_10++;
   VAR_14 = FUNC_8(VAR_3.fname);
   if (VAR_14 > VAR_12)
    VAR_12 = VAR_14;
   VAR_8.relnameLen = VAR_14;
   VAR_8.relname = FUNC_3(VAR_3.fname);
   VAR_8.rname = ((void*)0);
   VAR_8.lname = ((void*)0);
   VAR_8.rlinkto = (VAR_3.linkto[0] == '\0') ? ((void*)0) : FUNC_3(VAR_3.linkto);
   VAR_8.mdtm = VAR_3.ftime;
   VAR_8.size = (longest_int) VAR_3.fsize;
   VAR_8.type = VAR_3.ftype;
   VAR_4[0] = (char) VAR_3.ftype;
   VAR_4[1] = '\0';
   VAR_16 = 0;
   VAR_17 = 0;
   VAR_18 = -1;
   if (VAR_3.mode != (-1)) {
    VAR_16 = (VAR_3.mode & 00700) >> 6;
    VAR_17 = (VAR_3.mode & 00070) >> 3;
    VAR_18 = (VAR_3.mode & 00007);
   }
   if (VAR_3.perm[0] != '\0') {
    VAR_18 = 0;
    if (VAR_8.type == 'd') {
     if (FUNC_7(VAR_3.perm, 'e') != ((void*)0)) {

      VAR_18 |= 00001;
     }
     if (FUNC_7(VAR_3.perm, 'c') != ((void*)0)) {

      VAR_18 |= 00002;
     }
     if (FUNC_7(VAR_3.perm, 'l') != ((void*)0)) {

      VAR_18 |= 00004;
     }
    } else {
     if (FUNC_7(VAR_3.perm, 'w') != ((void*)0)) {

      VAR_18 |= 00002;
     }
     if (FUNC_7(VAR_3.perm, 'r') != ((void*)0)) {

      VAR_18 |= 00004;
     }
    }
   }
   if (VAR_18 != (-1)) {
    VAR_19 = VAR_0[VAR_16];
    VAR_20 = VAR_0[VAR_17];
    VAR_21 = VAR_0[VAR_18];
    FUNC_6(VAR_4 + 1, "%s%s%s", VAR_19, VAR_20, VAR_21);
   }
   if (VAR_3.owner[0] != '\0') {
    if (VAR_3.group[0] != '\0') {



     FUNC_6(VAR_5,

      "   %-8.8s %s",
      VAR_3.owner, VAR_3.group
     );
     FUNC_2(VAR_4, VAR_5);
    } else {
     FUNC_2(VAR_4, "   ");
     FUNC_2(VAR_4, VAR_3.owner);
    }
   }
   VAR_8.plug = FUNC_3(VAR_4);
   if (VAR_8.plug != ((void*)0)) {
    VAR_15 = FUNC_8(VAR_4);
    if (VAR_15 > VAR_13)
     VAR_13 = VAR_15;
   }
   (void) FUNC_0(VAR_1, &VAR_8);
  } else if (VAR_6 == (-2)) {
   VAR_11++;
  }
 }

 VAR_1->maxFileLen = VAR_12;
 VAR_1->maxPlugLen = VAR_13;
 if (VAR_9 == 0)
  return (0);
 VAR_10 += VAR_11;
 return ((VAR_10 > 0) ? VAR_10 : (-1));
}
