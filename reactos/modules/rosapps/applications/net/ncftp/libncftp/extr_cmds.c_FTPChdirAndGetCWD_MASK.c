
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {char const* const magic; void* errNo; } ;
struct TYPE_14__ {TYPE_1__* first; } ;
struct TYPE_15__ {TYPE_2__ msg; } ;
struct TYPE_13__ {char* line; } ;
typedef TYPE_3__* ResponsePtr ;
typedef TYPE_4__* FTPCIPtr ;


 int FUNC_0 (TYPE_4__* const,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__* const,int ,char*) ;
 int FUNC_2 (TYPE_4__* const,char* const,size_t const) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (TYPE_4__* const,TYPE_3__*,char*,...) ;
 int FUNC_5 (char* const,char*,size_t const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char const* const,char*) ;
 char* FUNC_8 (char*,char) ;

int
FUNC_9(const FTPCIPtr VAR_8, const char *const VAR_9, char *const VAR_10, const size_t VAR_11)
{
 ResponsePtr VAR_12;
 char *VAR_13, *VAR_14;
 int VAR_15;

 if (VAR_8 == ((void*)0))
  return (VAR_2);
 if (FUNC_7(VAR_8->magic, VAR_6))
  return (VAR_1);

 if ((VAR_10 == ((void*)0)) || (VAR_9 == ((void*)0))) {
  VAR_15 = VAR_4;
  VAR_8->errNo = VAR_4;
 } else {
  if (VAR_9[0] == '\0') {
   VAR_15 = FUNC_2(VAR_8, VAR_10, VAR_11);
   return (VAR_15);
  }
  VAR_12 = FUNC_3();
  if (VAR_12 == ((void*)0)) {
   VAR_15 = VAR_5;
   VAR_8->errNo = VAR_5;
   FUNC_1(VAR_8, VAR_0, "Malloc failed.\n");
  } else {
   if (FUNC_7(VAR_9, "..") == 0)
    VAR_15 = FUNC_4(VAR_8, VAR_12, "CDUP");
   else
    VAR_15 = FUNC_4(VAR_8, VAR_12, "CWD %s", VAR_9);
   if (VAR_15 == 2) {
    VAR_13 = FUNC_6(VAR_12->msg.first->line, '"');
    if ((VAR_13 == VAR_12->msg.first->line) && ((VAR_14 = FUNC_8(VAR_12->msg.first->line, '"')) != ((void*)0)) && (VAR_13 != VAR_14)) {





     *VAR_14 = '\0';
     ++VAR_13;
     (void) FUNC_5(VAR_10, VAR_13, VAR_11);
     *VAR_14 = '"';
     FUNC_0(VAR_8, VAR_12);
     VAR_15 = VAR_7;
    } else {
     FUNC_0(VAR_8, VAR_12);
     VAR_15 = FUNC_2(VAR_8, VAR_10, VAR_11);
    }
   } else if (VAR_15 > 0) {
    VAR_15 = VAR_3;
    VAR_8->errNo = VAR_3;
    FUNC_0(VAR_8, VAR_12);
   } else {
    FUNC_0(VAR_8, VAR_12);
   }
  }
 }
 return (VAR_15);
}
