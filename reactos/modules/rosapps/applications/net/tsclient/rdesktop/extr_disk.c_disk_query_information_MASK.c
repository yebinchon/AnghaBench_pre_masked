
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct stat {int st_mode; int st_size; int st_nlink; int st_ctime; int st_mtime; int st_atime; } ;
struct TYPE_5__ {TYPE_1__* fileinfo; } ;
struct TYPE_4__ {char* path; } ;
typedef int STREAM ;
typedef TYPE_2__ RDPCLIENT ;
typedef int NTSTATUS ;
typedef size_t NTHANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (size_t,struct stat*) ;
 int FUNC_2 (struct stat*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int*,int*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,int) ;

NTSTATUS
FUNC_9(RDPCLIENT * VAR_8, NTHANDLE VAR_9, uint32 VAR_10, STREAM VAR_11)
{
 uint32 VAR_12, VAR_13, VAR_14;
 struct stat VAR_15;
 char *VAR_16, *VAR_17;

 VAR_16 = VAR_8->fileinfo[VAR_9].path;


 if (FUNC_1(VAR_9, &VAR_15) != 0)
 {
  FUNC_5("stat");
  FUNC_4(VAR_11, 0);
  return VAR_4;
 }


 VAR_12 = 0;
 if (FUNC_0(VAR_15.st_mode))
  VAR_12 |= VAR_0;

 VAR_17 = 1 + FUNC_7(VAR_16, '/');
 if (VAR_17 && VAR_17[0] == '.')
  VAR_12 |= VAR_1;

 if (!VAR_12)
  VAR_12 |= VAR_2;

 if (!(VAR_15.st_mode & VAR_7))
  VAR_12 |= VAR_3;


 switch (VAR_10)
 {
  case 130:
   FUNC_6(FUNC_2(&VAR_15), &VAR_13,
             &VAR_14);
   FUNC_3(VAR_11, VAR_14);
   FUNC_3(VAR_11, VAR_13);

   FUNC_6(VAR_15.st_atime, &VAR_13, &VAR_14);
   FUNC_3(VAR_11, VAR_14);
   FUNC_3(VAR_11, VAR_13);

   FUNC_6(VAR_15.st_mtime, &VAR_13, &VAR_14);
   FUNC_3(VAR_11, VAR_14);
   FUNC_3(VAR_11, VAR_13);

   FUNC_6(VAR_15.st_ctime, &VAR_13, &VAR_14);
   FUNC_3(VAR_11, VAR_14);
   FUNC_3(VAR_11, VAR_13);

   FUNC_3(VAR_11, VAR_12);
   break;

  case 128:

   FUNC_3(VAR_11, VAR_15.st_size);
   FUNC_3(VAR_11, 0);
   FUNC_3(VAR_11, VAR_15.st_size);
   FUNC_3(VAR_11, 0);
   FUNC_3(VAR_11, VAR_15.st_nlink);
   FUNC_4(VAR_11, 0);
   FUNC_4(VAR_11, FUNC_0(VAR_15.st_mode) ? 1 : 0);
   break;

  case 129:

   FUNC_3(VAR_11, VAR_12);
   FUNC_3(VAR_11, 0);
   break;

  default:

   FUNC_8("IRP Query (File) Information class: 0x%x\n", VAR_10);
   return VAR_5;
 }
 return VAR_6;
}
