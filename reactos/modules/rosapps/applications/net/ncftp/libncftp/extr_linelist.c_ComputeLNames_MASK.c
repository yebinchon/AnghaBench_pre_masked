
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* first; } ;
struct TYPE_4__ {char* lname; char* relname; struct TYPE_4__* next; } ;
typedef TYPE_1__* FileInfoPtr ;
typedef TYPE_2__* FileInfoListPtr ;


 int * FUNC_0 (char**,char const*,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*,char) ;

int
FUNC_5(FileInfoListPtr VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3)
{
 FileInfoPtr VAR_4, VAR_5;
 char *VAR_6;
 char *VAR_7;

 if (VAR_1 != ((void*)0)) {
  VAR_7 = FUNC_4(VAR_1, '/');
  if (VAR_7 == ((void*)0))
   VAR_7 = FUNC_4(VAR_1, '\\');
  if (VAR_7 != ((void*)0))
   VAR_1 = VAR_7 + 1;
 }
 if (VAR_2 == ((void*)0))
  VAR_2 = ".";

 for (VAR_4 = VAR_0->first; VAR_4 != ((void*)0); VAR_4 = VAR_5) {
  VAR_5 = VAR_4->next;

  VAR_6 = ((void*)0);
  if (VAR_3 != 0) {
   if ((VAR_2[0] != '\0') && (FUNC_3(VAR_2, "."))) {
    if (FUNC_0(&VAR_6, VAR_2, "/", 0) == ((void*)0))
     goto memerr;
   }
   if (VAR_4->lname != ((void*)0)) {
    if (FUNC_0(&VAR_6, VAR_4->lname, "/", 0) == ((void*)0))
     goto memerr;
   } else if (VAR_1 != ((void*)0)) {
    if (FUNC_0(&VAR_6, VAR_1, "/", 0) == ((void*)0))
     goto memerr;
   }
   if (FUNC_0(&VAR_6, VAR_4->relname, 0) == ((void*)0))
    goto memerr;
  } else {
   if ((VAR_2[0] != '\0') && (FUNC_3(VAR_2, "."))) {
    VAR_7 = FUNC_4(VAR_4->relname, '/');
    if (VAR_7 == ((void*)0))
     VAR_7 = FUNC_4(VAR_4->relname, '\\');
    if (VAR_7 == ((void*)0)) {
     VAR_7 = VAR_4->relname;
    } else {
     VAR_7++;
    }
    if (FUNC_0(&VAR_6, VAR_2, "/", VAR_7, 0) == ((void*)0))
     goto memerr;
   } else {
    VAR_7 = FUNC_4(VAR_4->relname, '/');
    if (VAR_7 == ((void*)0))
     VAR_7 = FUNC_4(VAR_4->relname, '\\');
    if (VAR_7 == ((void*)0)) {
     VAR_7 = VAR_4->relname;
    } else {
     VAR_7++;
    }
    if (FUNC_0(&VAR_6, VAR_7, 0) == ((void*)0))
     goto memerr;
   }
  }
  if (VAR_6 == ((void*)0)) {
memerr:
   return (-1);
  }
  if (VAR_4->lname != ((void*)0)) {
   FUNC_2(VAR_4->lname);
   VAR_4->lname = ((void*)0);
  }
  VAR_4->lname = VAR_6;
  FUNC_1(VAR_4->lname);
 }
 return (0);
}
