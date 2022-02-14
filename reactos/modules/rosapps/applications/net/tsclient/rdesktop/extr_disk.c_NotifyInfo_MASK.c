
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct stat {scalar_t__ st_ctime; scalar_t__ st_mtime; } ;
struct fileinfo {char* path; } ;
struct dirent {char* d_name; } ;
struct TYPE_6__ {scalar_t__ total_time; scalar_t__ num_entries; scalar_t__ status_time; scalar_t__ modify_time; } ;
struct TYPE_5__ {struct fileinfo* fileinfo; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef int NTSTATUS ;
typedef size_t NTHANDLE ;
typedef TYPE_2__ NOTIFY ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (size_t,struct stat*) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,char*,char*) ;
 int FUNC_6 (char*,struct stat*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static NTSTATUS
FUNC_11(RDPCLIENT * VAR_2, NTHANDLE VAR_3, uint32 VAR_4, NOTIFY * VAR_5)
{
 struct fileinfo *VAR_6;
 struct stat VAR_7;
 struct dirent *VAR_8;
 char *VAR_9;
 DIR *VAR_10;

 VAR_6 = &(VAR_2->fileinfo[VAR_3]);
 if (FUNC_1(VAR_3, &VAR_7) < 0)
 {
  FUNC_3("NotifyInfo");
  return VAR_0;
 }
 VAR_5->modify_time = VAR_7.st_mtime;
 VAR_5->status_time = VAR_7.st_ctime;
 VAR_5->num_entries = 0;
 VAR_5->total_time = 0;


 VAR_10 = FUNC_2(VAR_6->path);
 if (!VAR_10)
 {
  FUNC_3("NotifyInfo");
  return VAR_0;
 }


 while ((VAR_8 = FUNC_4(VAR_10)))
 {
  if (!FUNC_7(VAR_8->d_name, ".") || !FUNC_7(VAR_8->d_name, ".."))
   continue;
  VAR_5->num_entries++;
  VAR_9 = (char *) FUNC_10(FUNC_8(VAR_6->path) + FUNC_8(VAR_8->d_name) + 2);
  FUNC_5(VAR_9, "%s/%s", VAR_6->path, VAR_8->d_name);

  if (!FUNC_6(VAR_9, &VAR_7))
  {
   VAR_5->total_time += (VAR_7.st_mtime + VAR_7.st_ctime);
  }

  FUNC_9(VAR_9);
 }
 FUNC_0(VAR_10);

 return VAR_1;
}
