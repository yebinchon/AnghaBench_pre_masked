
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {void* errNo; int magic; } ;
struct TYPE_13__ {TYPE_1__* first; } ;
struct TYPE_14__ {TYPE_2__ msg; } ;
struct TYPE_12__ {char* line; } ;
typedef TYPE_3__* ResponsePtr ;
typedef TYPE_4__* FTPCIPtr ;


 int FUNC_0 (TYPE_4__* const,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__* const,int ,char*) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (TYPE_4__* const,TYPE_3__*,char*) ;
 int FUNC_4 (char* const,char*,size_t const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 char* FUNC_7 (char*,char) ;

int
FUNC_8(const FTPCIPtr VAR_8, char *const VAR_9, const size_t VAR_10)
{
 ResponsePtr VAR_11;
 char *VAR_12, *VAR_13;
 int VAR_14;

 if (VAR_8 == ((void*)0))
  return (VAR_2);
 if (FUNC_6(VAR_8->magic, VAR_6))
  return (VAR_1);

 if ((VAR_9 == ((void*)0)) || (VAR_10 == 0)) {
  VAR_14 = VAR_3;
  VAR_8->errNo = VAR_3;
 } else {
  VAR_11 = FUNC_2();
  if (VAR_11 == ((void*)0)) {
   VAR_14 = VAR_4;
   VAR_8->errNo = VAR_4;
   FUNC_1(VAR_8, VAR_0, "Malloc failed.\n");
  } else {
   VAR_14 = FUNC_3(VAR_8, VAR_11, "PWD");
   if (VAR_14 == 2) {
    if ((VAR_13 = FUNC_7(VAR_11->msg.first->line, '"')) != ((void*)0)) {



     VAR_12 = FUNC_5(VAR_11->msg.first->line, '"');
     if ((VAR_12 != ((void*)0)) && (VAR_12 != VAR_13)) {
      *VAR_13 = '\0';
      ++VAR_12;
      (void) FUNC_4(VAR_9, VAR_12, VAR_10);
      *VAR_13 = '"';
     }
    } else {



     if ((VAR_13 = FUNC_5(VAR_11->msg.first->line, ' ')) != ((void*)0)) {
      *VAR_13 = '\0';
      (void) FUNC_4(VAR_9, (VAR_11->msg.first->line), VAR_10);
      *VAR_13 = ' ';
     }
    }
    VAR_14 = VAR_7;
   } else if (VAR_14 > 0) {
    VAR_14 = VAR_5;
    VAR_8->errNo = VAR_5;
   }
   FUNC_0(VAR_8, VAR_11);
  }
 }
 return (VAR_14);
}
