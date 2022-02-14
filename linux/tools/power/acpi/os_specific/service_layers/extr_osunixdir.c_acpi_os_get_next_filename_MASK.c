
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct external_find_info {char* dir_pathname; scalar_t__ requested_file_type; char* temp_buffer; int wildcard_spec; int dir_ptr; } ;
struct dirent {char* d_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 struct dirent* FUNC_5 (int ) ;
 int FUNC_6 (char*,struct stat*) ;
 int VAR_2 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;

char *FUNC_10(void *VAR_3)
{
 struct external_find_info *VAR_4 = VAR_3;
 struct dirent *VAR_5;
 char *VAR_6;
 int VAR_7;
 struct stat VAR_8;
 int VAR_9;

 while ((VAR_5 = FUNC_5(VAR_4->dir_ptr))) {
  if (!FUNC_2
      (VAR_4->wildcard_spec, VAR_5->d_name, 0)) {
   if (VAR_5->d_name[0] == '.') {
    continue;
   }

   VAR_7 = FUNC_9(VAR_5->d_name) +
       FUNC_9(VAR_4->dir_pathname) + 2;

   VAR_6 = FUNC_1(VAR_7, 1);
   if (!VAR_6) {
    FUNC_3(VAR_2,
     "Could not allocate buffer for temporary string\n");
    return (((void*)0));
   }

   FUNC_8(VAR_6, VAR_4->dir_pathname);
   FUNC_7(VAR_6, "/");
   FUNC_7(VAR_6, VAR_5->d_name);

   VAR_9 = FUNC_6(VAR_6, &VAR_8);
   if (VAR_9 == -1) {
    FUNC_3(VAR_2,
     "Cannot stat file (should not happen) - %s\n",
     VAR_6);
    FUNC_4(VAR_6);
    return (((void*)0));
   }

   FUNC_4(VAR_6);

   if ((FUNC_0(VAR_8.st_mode)
        && (VAR_4->requested_file_type ==
     VAR_0))
       || ((!FUNC_0(VAR_8.st_mode)
     && VAR_4->requested_file_type ==
     VAR_1))) {



    FUNC_8(VAR_4->temp_buffer,
           VAR_5->d_name);
    return (VAR_4->temp_buffer);
   }
  }
 }

 return (((void*)0));
}
