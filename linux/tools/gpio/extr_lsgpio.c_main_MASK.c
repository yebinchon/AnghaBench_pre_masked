
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char const* d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (char*) ;
 char* VAR_2 ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 struct dirent* FUNC_7 (int *) ;

int FUNC_8(int VAR_3, char **VAR_4)
{
 const char *VAR_5 = ((void*)0);
 int VAR_6;
 int VAR_7;

 while ((VAR_7 = FUNC_2(VAR_3, VAR_4, "n:")) != -1) {
  switch (VAR_7) {
  case 'n':
   VAR_5 = VAR_2;
   break;
  case '?':
   FUNC_6();
   return -1;
  }
 }

 if (VAR_5)
  VAR_6 = FUNC_3(VAR_5);
 else {
  const struct dirent *VAR_8;
  DIR *VAR_9;


  VAR_9 = FUNC_4("/dev");
  if (!VAR_9) {
   VAR_6 = -VAR_1;
   goto error_out;
  }

  VAR_6 = -VAR_0;
  while (VAR_8 = FUNC_7(VAR_9), VAR_8) {
   if (FUNC_0(VAR_8->d_name, "gpiochip")) {
    VAR_6 = FUNC_3(VAR_8->d_name);
    if (VAR_6)
     break;
   }
  }

  VAR_6 = 0;
  if (FUNC_1(VAR_9) == -1) {
   FUNC_5("scanning devices: Failed to close directory");
   VAR_6 = -VAR_1;
  }
 }
error_out:
 return VAR_6;
}
