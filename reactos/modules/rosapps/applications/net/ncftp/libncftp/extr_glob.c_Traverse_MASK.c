
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dirent {char* d_name; } ;
struct Stat {int st_mode; scalar_t__ st_size; int st_mtime; } ;
typedef int mode_t ;
typedef void* longest_int ;
struct TYPE_3__ {char type; int * rlinkto; int * plug; void* size; int mdtm; void* lname; int * rname; void* relname; } ;
typedef int FileInfoListPtr ;
typedef TYPE_1__ FileInfo ;
typedef int FTPCIPtr ;
typedef int DIR ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ,char*,char*) ;
 scalar_t__ FUNC_2 (char*,struct Stat*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 void* FUNC_6 (char*) ;
 int * FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_0 ;
 int * FUNC_10 (char*) ;
 struct dirent* FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char*,int *,int) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15(FTPCIPtr VAR_1, char *VAR_2, struct Stat *VAR_3, char *VAR_4, FileInfoListPtr VAR_5)
{
 char *VAR_6;
 struct dirent *VAR_7;
 mode_t VAR_8;
 DIR *VAR_9;
 char *VAR_10;
 char *VAR_11;
 FileInfo VAR_12;

 if (VAR_4[0] != '\0') {
  VAR_12.relname = FUNC_6(VAR_4);
  VAR_12.rname = ((void*)0);
  VAR_12.lname = FUNC_6(VAR_2);
  VAR_12.rlinkto = ((void*)0);
  VAR_12.plug = ((void*)0);
  VAR_12.mdtm = VAR_3->st_mtime;
  VAR_12.size = (longest_int) VAR_3->st_size;
  VAR_12.type = 'd';
  (void) FUNC_0(VAR_5, &VAR_12);
 }


 VAR_10 = VAR_2 + FUNC_14(VAR_2);
 *VAR_10++ = '/';
 *VAR_10 = '\0';

 VAR_11 = VAR_4 + FUNC_14(VAR_4);
 *VAR_11++ = '/';
 *VAR_11 = '\0';

 if ((VAR_9 = FUNC_10(VAR_2)) == ((void*)0)) {
  VAR_10[-1] = '\0';
  VAR_11[-1] = '\0';
  FUNC_1(VAR_1, VAR_0, "could not opendir %s.\n", VAR_2);
  return;
 }

 while ((VAR_7 = FUNC_11(VAR_9)) != ((void*)0)) {
  VAR_6 = VAR_7->d_name;
  if ((VAR_6[0] == '.') && ((VAR_6[1] == '\0') || ((VAR_6[1] == '.') && (VAR_6[2] == '\0'))))
   continue;

  (void) FUNC_13(VAR_10, VAR_7->d_name);
  (void) FUNC_13(VAR_11, VAR_7->d_name);
  if (FUNC_2(VAR_2, VAR_3) < 0) {
   FUNC_1(VAR_1, VAR_0, "could not stat %s.\n", VAR_2);
   continue;
  }

  VAR_12.relname = FUNC_6(VAR_4 + (((VAR_4[0] == '/') || (VAR_4[0] == '\\')) ? 1 : 0));
  VAR_12.rname = ((void*)0);
  VAR_12.lname = FUNC_6(VAR_2);
  VAR_12.mdtm = VAR_3->st_mtime;
  VAR_12.size = (longest_int) VAR_3->st_size;
  VAR_12.rlinkto = ((void*)0);
  VAR_12.plug = ((void*)0);

  VAR_8 = VAR_3->st_mode;
  if (FUNC_5(VAR_8) != 0) {

   VAR_12.type = '-';
   (void) FUNC_0(VAR_5, &VAR_12);
  } else if (FUNC_3(VAR_8)) {
   FUNC_15(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  }
 }
 VAR_10[-1] = '\0';
 VAR_11[-1] = '\0';

 (void) FUNC_8(VAR_9);
}
