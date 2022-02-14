
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct stat {int st_mode; int st_size; int st_ctime; int st_mtime; int st_atime; } ;
struct fileinfo {char* path; int pattern; int * pdir; } ;
struct dirent {char* d_name; } ;
typedef int fstat ;
struct TYPE_4__ {struct fileinfo* fileinfo; } ;
typedef int STREAM ;
typedef TYPE_1__ RDPCLIENT ;
typedef int NTSTATUS ;
typedef size_t NTHANDLE ;
typedef int DIR ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct stat*) ;
 int FUNC_3 (struct stat*,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*,int ,char*,int) ;
 struct dirent* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int*,int*) ;
 int FUNC_12 (char*,char*,char*,char*) ;
 int FUNC_13 (char*,struct stat*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (char*,char) ;
 int FUNC_17 (char*,int) ;

NTSTATUS
FUNC_18(RDPCLIENT * VAR_11, NTHANDLE VAR_12, uint32 VAR_13, char *VAR_14, STREAM VAR_15)
{
 uint32 VAR_16, VAR_17, VAR_18;
 char *VAR_19, VAR_20[VAR_4];
 DIR *VAR_21;
 struct dirent *VAR_22;
 struct stat VAR_23;
 struct fileinfo *VAR_24;

 VAR_24 = &(VAR_11->fileinfo[VAR_12]);
 VAR_21 = VAR_24->pdir;
 VAR_19 = VAR_24->path;
 VAR_16 = 0;

 switch (VAR_13)
 {
  case 128:


   if (VAR_14[0] != 0)
   {
    FUNC_15(VAR_24->pattern, 1 + FUNC_16(VAR_14, '/'), VAR_4 - 1);
    FUNC_10(VAR_21);
   }


   VAR_22 = FUNC_9(VAR_21);
   while (VAR_22 && FUNC_1(VAR_24->pattern, VAR_22->d_name, 0) != 0)
    VAR_22 = FUNC_9(VAR_21);

   if (VAR_22 == ((void*)0))
    return VAR_6;


   FUNC_12(VAR_20, "%s/%s", VAR_19, VAR_22->d_name);

   if (FUNC_13(VAR_20, &VAR_23))
   {
    switch (VAR_10)
    {
     case 129:
     case 130:
     case 131:

      FUNC_3(&VAR_23, 0, sizeof(VAR_23));
      break;
     default:


      FUNC_7(VAR_20);
      FUNC_5(VAR_15, 0);
      return VAR_7;
    }
   }

   if (FUNC_0(VAR_23.st_mode))
    VAR_16 |= VAR_0;
   if (VAR_22->d_name[0] == '.')
    VAR_16 |= VAR_1;
   if (!VAR_16)
    VAR_16 |= VAR_2;
   if (!(VAR_23.st_mode & VAR_9))
    VAR_16 |= VAR_3;


   FUNC_6(VAR_15, 8);

   FUNC_11(FUNC_2(&VAR_23), &VAR_18, &VAR_17);
   FUNC_4(VAR_15, VAR_17);
   FUNC_4(VAR_15, VAR_18);

   FUNC_11(VAR_23.st_atime, &VAR_18, &VAR_17);
   FUNC_4(VAR_15, VAR_17);
   FUNC_4(VAR_15, VAR_18);

   FUNC_11(VAR_23.st_mtime, &VAR_18, &VAR_17);
   FUNC_4(VAR_15, VAR_17);
   FUNC_4(VAR_15, VAR_18);

   FUNC_11(VAR_23.st_ctime, &VAR_18, &VAR_17);
   FUNC_4(VAR_15, VAR_17);
   FUNC_4(VAR_15, VAR_18);

   FUNC_4(VAR_15, VAR_23.st_size);
   FUNC_4(VAR_15, 0);
   FUNC_4(VAR_15, VAR_23.st_size);
   FUNC_4(VAR_15, 0);
   FUNC_4(VAR_15, VAR_16);
   FUNC_5(VAR_15, 2 * FUNC_14(VAR_22->d_name) + 2);
   FUNC_6(VAR_15, 7);
   FUNC_5(VAR_15, 0);
   FUNC_6(VAR_15, 2 * 12);
   FUNC_8(VAR_11, VAR_15, VAR_22->d_name, 2 * FUNC_14(VAR_22->d_name));
   break;

  default:




   FUNC_17("IRP Query Directory sub: 0x%x\n", VAR_13);
   return VAR_5;
 }

 return VAR_8;
}
