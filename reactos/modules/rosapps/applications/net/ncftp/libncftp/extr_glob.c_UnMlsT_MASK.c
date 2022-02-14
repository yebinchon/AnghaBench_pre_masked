
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* longest_int ;
typedef int line ;
struct TYPE_4__ {int mode; long fsize; char ftype; char* fname; int perm; void* gid; void* uid; int group; int owner; int ftime; } ;
typedef TYPE_1__* MLstItemPtr ;
typedef int MLstItem ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 char* VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (char) ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_6 (char*,char const* const,size_t) ;
 int FUNC_7 (TYPE_1__* const,int ,int) ;
 int FUNC_8 (char*,char*,long*) ;
 size_t FUNC_9 (char const* const) ;
 scalar_t__ FUNC_10 (char*,int *,int ) ;

int
FUNC_11(const char *const VAR_3, const MLstItemPtr VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;
 size_t VAR_9;
 char VAR_10[1024];

 FUNC_7(VAR_4, 0, sizeof(MLstItem));
 VAR_4->mode = -1;
 VAR_4->fsize = VAR_2;
 VAR_4->ftype = '-';
 VAR_4->ftime = VAR_1;

 VAR_9 = FUNC_9(VAR_3);
 if (VAR_9 > (sizeof(VAR_10) - 1))
  return (-1);



 FUNC_6(VAR_10, VAR_3, VAR_9 + 1);


 for (VAR_5 = VAR_10; *VAR_5 != '\0'; VAR_5++) {
  if (! FUNC_5(*VAR_5))
   break;
 }

 while (*VAR_5 != '\0') {
  for (VAR_7 = VAR_5; ; VAR_5++) {
   if ((*VAR_5 == '\0') || (*VAR_5 == ' ')) {

    return (-1);
   }
   if (*VAR_5 == '=') {

    *VAR_5++ = '\0';
    break;
   }
  }
  for (VAR_6 = VAR_5; ; VAR_5++) {
   if (*VAR_5 == '\0') {

    return (-1);
   }
   if (*VAR_5 == ' ') {
    VAR_8 = ' ';
    *VAR_5++ = '\0';
    break;
   } else if (*VAR_5 == ';') {
    if (VAR_5[1] == ' ') {
     VAR_8 = ' ';
     *VAR_5++ = '\0';
     *VAR_5++ = '\0';
    } else {
     VAR_8 = ';';
     *VAR_5++ = '\0';
    }
    break;
   }
  }
  if (FUNC_1(VAR_7, "OS.", 3))
   VAR_7 += 3;
  if (FUNC_0(VAR_7, "type")) {
   if (FUNC_0(VAR_6, "file")) {
    VAR_4->ftype = '-';
   } else if (FUNC_0(VAR_6, "dir")) {
    VAR_4->ftype = 'd';
   } else if (FUNC_0(VAR_6, "cdir")) {

    return (-2);
   } else if (FUNC_0(VAR_6, "pdir")) {

    return (-2);
   } else {

    return (-1);
   }
  } else if (FUNC_0(VAR_7, "UNIX.mode")) {
   if (VAR_6[0] == '0')
    FUNC_8(VAR_6, "%o", &VAR_4->mode);
   else
    FUNC_8(VAR_6, "%i", &VAR_4->mode);
   if (VAR_4->mode != (-1))
    VAR_4->mode &= 00777;
  } else if (FUNC_0(VAR_7, "perm")) {
   FUNC_2(VAR_4->perm, VAR_6);
  } else if (FUNC_0(VAR_7, "size")) {





   {
    long VAR_11 = 0L;

    (void) FUNC_8(VAR_6, "%ld", &VAR_11);
    VAR_4->fsize = (longest_int) VAR_11;
   }

  } else if (FUNC_0(VAR_7, "modify")) {
   VAR_4->ftime = FUNC_3(VAR_6);
  } else if (FUNC_0(VAR_7, "UNIX.owner")) {
   FUNC_2(VAR_4->owner, VAR_6);
  } else if (FUNC_0(VAR_7, "UNIX.group")) {
   FUNC_2(VAR_4->group, VAR_6);
  } else if (FUNC_0(VAR_7, "UNIX.uid")) {
   VAR_4->uid = FUNC_4(VAR_6);
  } else if (FUNC_0(VAR_7, "UNIX.gid")) {
   VAR_4->gid = FUNC_4(VAR_6);
  } else if (FUNC_0(VAR_7, "perm")) {
   FUNC_2(VAR_4->perm, VAR_6);
  }


  if (VAR_8 == ' ')
   break;
 }

 VAR_9 = FUNC_9(VAR_5);
 if (VAR_9 > (sizeof(VAR_4->fname) - 1)) {

  return (-1);
 }
 FUNC_6(VAR_4->fname, VAR_5, VAR_9);



 return (0);
}
