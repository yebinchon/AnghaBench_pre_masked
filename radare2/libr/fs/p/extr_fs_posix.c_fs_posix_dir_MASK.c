
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char wchar_t ;
struct stat {scalar_t__ st_atime; int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int fullpath ;
struct TYPE_7__ {int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
struct TYPE_8__ {float type; scalar_t__ time; } ;
typedef int RList ;
typedef int RFSRoot ;
typedef TYPE_2__ RFSFile ;
typedef scalar_t__ HANDLE ;
typedef int DIR ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (char const*) ;
 TYPE_2__* FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 () ;
 char* FUNC_12 (int ) ;
 char* FUNC_13 (char const*) ;
 struct dirent* FUNC_14 (int *) ;
 int FUNC_15 (char*,int,char*,char const*,char*) ;
 int FUNC_16 (char*,struct stat*) ;
 int FUNC_17 (char*,int ,char*,char*) ;

__attribute__((used)) static RList *FUNC_18(RFSRoot *VAR_2, const char *VAR_3, int VAR_4 ) {
 RList *VAR_5;
 char VAR_6[4096];
 struct stat VAR_7;







 struct dirent *VAR_8;
 DIR *VAR_9;

 VAR_5 = FUNC_11 ();
 if (!VAR_5) {
  return ((void*)0);
 }
 VAR_9 = FUNC_7 (VAR_3);
 if (!VAR_9) {
  FUNC_10 (VAR_5);
  return ((void*)0);
 }
 while ((VAR_8 = FUNC_14 (VAR_9))) {
  RFSFile *VAR_10 = FUNC_8 (((void*)0), VAR_8->d_name);
  if (!VAR_10) {
   FUNC_10 (VAR_5);
   FUNC_5 (VAR_9);
   return ((void*)0);
  }
  VAR_10->type = 'f';
  FUNC_15 (VAR_6, sizeof (VAR_6)-1, "%s/%s", VAR_3, VAR_8->d_name);
  if (!FUNC_16 (VAR_6, &VAR_7)) {
   VAR_10->type = FUNC_3 (VAR_7.st_mode)?'d':'f';
   VAR_10->time = VAR_7.st_atime;
  } else {
   VAR_10->type = 'f';
   VAR_10->time = 0;
  }
  FUNC_9 (VAR_5, VAR_10);
 }
 FUNC_5 (VAR_9);

 return VAR_5;
}
