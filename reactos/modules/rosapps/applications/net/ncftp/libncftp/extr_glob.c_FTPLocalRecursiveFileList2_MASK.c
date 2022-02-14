
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct Stat {scalar_t__ st_size; int st_mtime; int st_mode; } ;
typedef scalar_t__ longest_int ;
struct TYPE_8__ {char type; int * plug; int * rlinkto; scalar_t__ size; int mdtm; void* lname; int * rname; void* relname; } ;
struct TYPE_7__ {TYPE_1__* first; } ;
struct TYPE_6__ {char* line; struct TYPE_6__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__* LineListPtr ;
typedef int FileInfoListPtr ;
typedef TYPE_3__ FileInfo ;
typedef int FTPCIPtr ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ,int ,char*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,struct Stat*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 void* FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,struct Stat*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (char*,char*) ;

int
FUNC_10(FTPCIPtr VAR_3, LineListPtr VAR_4, FileInfoListPtr VAR_5, int VAR_6)
{
 LinePtr VAR_7, VAR_8;




 char VAR_9[512];
 char VAR_10[512];

 struct Stat VAR_11;
 FileInfo VAR_12;
 char *VAR_13;

 FUNC_2(VAR_5);

 for (VAR_7 = VAR_4->first;
  VAR_7 != ((void*)0);
  VAR_7 = VAR_8)
 {
  VAR_8 = VAR_7->next;

  (void) FUNC_4(VAR_9, VAR_7->line);
  if ((VAR_6 != 0) || (FUNC_9(VAR_7->line, ".") == 0) || (VAR_7->line[0] == '\0'))
   (void) FUNC_4(VAR_10, "");
  else if ((VAR_13 = FUNC_7(VAR_7->line)) == ((void*)0))
   (void) FUNC_4(VAR_10, VAR_7->line);
  else
   (void) FUNC_4(VAR_10, VAR_13 + 1);
  if (FUNC_3(VAR_9, &VAR_11) < 0) {
   FUNC_1(VAR_3, VAR_1, "could not stat %s.\n", VAR_9);
   continue;
  }

  if (FUNC_5(VAR_11.st_mode) == 0) {
   VAR_12.relname = FUNC_6(VAR_10);
   VAR_12.rname = ((void*)0);
   VAR_12.lname = FUNC_6(VAR_9);
   VAR_12.mdtm = VAR_11.st_mtime;
   VAR_12.size = (longest_int) VAR_11.st_size;
   VAR_12.rlinkto = ((void*)0);
   VAR_12.plug = ((void*)0);
   VAR_12.type = '-';
   (void) FUNC_0(VAR_5, &VAR_12);
   continue;
  }


  FUNC_8(VAR_3, VAR_9, &VAR_11, VAR_10, VAR_5);
 }
 return (VAR_2);
}
