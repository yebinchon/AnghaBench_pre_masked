
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {char const* magic; int errNo; } ;
struct TYPE_15__ {TYPE_1__* last; TYPE_1__* first; } ;
struct TYPE_14__ {int line; struct TYPE_14__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__* LineListPtr ;
typedef TYPE_3__* FTPCIPtr ;


 int FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (TYPE_3__*,char const*,TYPE_2__*,char const*,int ,int*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,char*,int ) ;
 int FUNC_5 (char const*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 char* FUNC_8 (int ,char) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

int
FUNC_10(FTPCIPtr VAR_6, LineListPtr VAR_7, const char *VAR_8, int VAR_9)
{
 char *VAR_10;
 const char *VAR_11;
 LinePtr VAR_12;
 int VAR_13;

 if (VAR_6 == ((void*)0))
  return (VAR_1);
 if (FUNC_9(VAR_6->magic, VAR_4))
  return (VAR_0);

 if (VAR_7 == ((void*)0))
  return (VAR_1);
 FUNC_3(VAR_7);

 if ((VAR_8 == ((void*)0)) || (VAR_8[0] == '\0'))
  return (VAR_1);





 if ((VAR_9 == 1) && (FUNC_2(VAR_8))) {

  VAR_11 = "";


  if (FUNC_9(VAR_8, "*") == 0) {
   VAR_8 = "";
  } else if (FUNC_9(VAR_8, "**") == 0) {

   VAR_8 = "";
   VAR_11 = "-a";
  }

  if ((VAR_13 = FUNC_1(VAR_6, VAR_8, VAR_7, VAR_11, 0, (int *) 0)) < 0) {
   if (*VAR_11 == '\0')
    return (VAR_13);

   VAR_11 = "";
   if ((VAR_13 = FUNC_1(VAR_6, VAR_8, VAR_7, VAR_11, 0, (int *) 0)) < 0) {
    return (VAR_13);
   }
  }
  if (VAR_7->first == ((void*)0)) {
   VAR_6->errNo = VAR_3;
   return (VAR_3);
  }
  if (VAR_7->first == VAR_7->last) {




   VAR_10 = FUNC_8(VAR_7->first->line, ':');
   if (VAR_10 != ((void*)0)) {
    if ((FUNC_0(VAR_10, ": No such file or directory", strlen(": No such file or directory")))) {
     (void) FUNC_6(VAR_7, VAR_7->first);
     VAR_6->errNo = VAR_2;
     return (VAR_2);
    } else if ((FUNC_0(VAR_10, ": No match", FUNC_0(": No match")))) {
     VAR_6->errNo = VAR_3;
     return (VAR_3);
    }
   }
  }
  FUNC_5(VAR_8, VAR_7);
  for (VAR_12=VAR_7->first; VAR_12 != ((void*)0); VAR_12 = VAR_12->next)
   FUNC_4(VAR_6, "  Rglob [%s]\n", VAR_12->line);
 } else {




  VAR_7->first = VAR_7->last = ((void*)0);
  (void) FUNC_0(VAR_7, VAR_8);
 }
 return (VAR_5);
}
