
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {char* release; char* sysname; int machine; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 void* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__ VAR_6 ;

void FUNC_7(void)
{
 FILE *VAR_7;
 char *VAR_8, VAR_9[512];

 FUNC_6(&VAR_6);
 VAR_4 = VAR_6.release;
 VAR_0 = FUNC_5(VAR_6.release);

 VAR_3 = VAR_6.sysname;
 VAR_5 = VAR_6.machine;






 VAR_8 = FUNC_3(VAR_4, '-');
 if (VAR_8)
  *VAR_8 = '\0';





 VAR_7 = FUNC_2("/etc/os-release", "r");
 if (VAR_7 != ((void*)0)) {
  while (FUNC_1(VAR_9, sizeof(VAR_9), VAR_7)) {
   char *VAR_10, *VAR_11;


   if (VAR_9[0] == '#')
    continue;


   VAR_8 = FUNC_3(VAR_9, '=');
   if (!VAR_8)
    continue;
   *VAR_8++ = 0;


   VAR_10 = VAR_8;
   VAR_11 = VAR_8;
   while (*VAR_8) {
    if (*VAR_8 == '\\') {
     ++VAR_8;
     if (!*VAR_8)
      break;
     *VAR_11++ = *VAR_8++;
    } else if (*VAR_8 == '\'' || *VAR_8 == '"' ||
        *VAR_8 == '\n') {
     ++VAR_8;
    } else {
     *VAR_11++ = *VAR_8++;
    }
   }
   *VAR_11 = 0;

   if (!FUNC_4(VAR_9, "NAME")) {
    VAR_8 = FUNC_5(VAR_10);
    if (!VAR_8)
     break;
    VAR_3 = VAR_8;
   } else if (!FUNC_4(VAR_9, "VERSION_ID")) {
    VAR_8 = FUNC_5(VAR_10);
    if (!VAR_8)
     break;
    VAR_1 = VAR_8;
   }
  }
  FUNC_0(VAR_7);
  return;
 }


 VAR_7 = FUNC_2("/etc/SuSE-release", "r");
 if (VAR_7 != ((void*)0))
  goto kvp_osinfo_found;
 VAR_7 = FUNC_2("/etc/redhat-release", "r");
 if (VAR_7 != ((void*)0))
  goto kvp_osinfo_found;




 return;

kvp_osinfo_found:

 VAR_8 = FUNC_1(VAR_9, sizeof(VAR_9), VAR_7);
 if (VAR_8) {
  VAR_8 = FUNC_3(VAR_9, '\n');
  if (VAR_8)
   *VAR_8 = '\0';
  VAR_8 = FUNC_5(VAR_9);
  if (!VAR_8)
   goto done;
  VAR_3 = VAR_8;


  VAR_8 = FUNC_1(VAR_9, sizeof(VAR_9), VAR_7);
  if (VAR_8) {
   VAR_8 = FUNC_3(VAR_9, '\n');
   if (VAR_8)
    *VAR_8 = '\0';
   VAR_8 = FUNC_5(VAR_9);
   if (!VAR_8)
    goto done;
   VAR_1 = VAR_8;


   VAR_8 = FUNC_1(VAR_9, sizeof(VAR_9), VAR_7);
   if (VAR_8) {
    VAR_8 = FUNC_3(VAR_9, '\n');
    if (VAR_8)
     *VAR_8 = '\0';
    VAR_8 = FUNC_5(VAR_9);
    if (VAR_8)
     VAR_2 = VAR_8;
   }
  }
 }

done:
 FUNC_0(VAR_7);
 return;
}
