
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int savedCwd ;
struct TYPE_26__ {scalar_t__ STATfileParamWorks; int errNo; char* startingWorkingDirectory; int magic; } ;
struct TYPE_25__ {TYPE_1__* last; } ;
struct TYPE_23__ {int nLines; TYPE_3__* first; } ;
struct TYPE_24__ {TYPE_4__ msg; } ;
struct TYPE_22__ {TYPE_2__* next; } ;
struct TYPE_21__ {int * line; } ;
struct TYPE_20__ {char const* line; } ;
typedef TYPE_5__* ResponsePtr ;
typedef TYPE_6__ LineList ;
typedef TYPE_7__* FTPCIPtr ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_7__* const,TYPE_5__*) ;
 int FUNC_2 (TYPE_7__* const,int ,char*) ;
 int FUNC_3 (TYPE_7__* const,char*) ;
 int FUNC_4 (TYPE_7__* const,char*,int) ;
 int FUNC_5 (TYPE_7__* const,char*,TYPE_6__*,char*,int ,int*) ;
 TYPE_5__* FUNC_6 () ;
 int FUNC_7 (TYPE_7__* const,TYPE_5__*,char*,char const* const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int * FUNC_9 (int *,char*) ;

int
FUNC_10(const FTPCIPtr VAR_11, const char *const VAR_12)
{
 int VAR_13;
 ResponsePtr VAR_14;
 LineList VAR_15;
 char VAR_16[512];

 if (VAR_11 == ((void*)0))
  return (VAR_5);
 if (FUNC_8(VAR_11->magic, VAR_9))
  return (VAR_4);

 if (VAR_12 == ((void*)0))
  return (VAR_5);

 if (VAR_11->STATfileParamWorks == VAR_2) {
  VAR_11->errNo = VAR_13 = VAR_8;
  return (VAR_13);
 }

 if (VAR_11->STATfileParamWorks == VAR_0) {
  VAR_14 = FUNC_6();
  if (VAR_14 == ((void*)0)) {
   VAR_13 = VAR_6;
   VAR_11->errNo = VAR_6;
   FUNC_2(VAR_11, VAR_3, "Malloc failed.\n");
   return (VAR_13);

  }
  VAR_13 = FUNC_7(VAR_11, VAR_14, "STAT %s", "NoSuchFile");
  if ((VAR_13 == 2) && ((VAR_14->msg.nLines >= 3) || (VAR_14->msg.nLines == 1))) {




   if (
    (VAR_14->msg.first->next != ((void*)0)) &&
    (VAR_14->msg.first->next->line != ((void*)0)) &&
    (
     (FUNC_9(VAR_14->msg.first->next->line, "o such file") != ((void*)0)) ||
     (FUNC_9(VAR_14->msg.first->next->line, "ot found") != ((void*)0))
    )
   ) {







    VAR_13 = VAR_10;
   } else {
    VAR_11->STATfileParamWorks = VAR_2;
    VAR_11->errNo = VAR_13 = VAR_8;
    FUNC_1(VAR_11, VAR_14);
    return (VAR_13);
   }
  }
  FUNC_1(VAR_11, VAR_14);






  if (
   (FUNC_4(VAR_11, VAR_16, sizeof(VAR_16)) != VAR_10) ||
   (FUNC_3(VAR_11, VAR_11->startingWorkingDirectory) != VAR_10)
  ) {
   return (VAR_11->errNo);
  }
  if (
   ((VAR_13 = FUNC_5(VAR_11, "", &VAR_15, "", 0, (int *) 0)) < 0) ||
   (VAR_15.last == ((void*)0)) ||
   (VAR_15.last->line == ((void*)0))
  ) {

   VAR_11->STATfileParamWorks = VAR_2;
   VAR_11->errNo = VAR_13 = VAR_8;
   FUNC_0(&VAR_15);
   (void) FUNC_3(VAR_11, VAR_16);
   return (VAR_13);
  }

  VAR_14 = FUNC_6();
  if (VAR_14 == ((void*)0)) {
   VAR_13 = VAR_6;
   VAR_11->errNo = VAR_6;
   FUNC_2(VAR_11, VAR_3, "Malloc failed.\n");
   FUNC_0(&VAR_15);
   (void) FUNC_3(VAR_11, VAR_16);
   return (VAR_13);

  }

  VAR_13 = FUNC_7(VAR_11, VAR_14, "STAT %s", VAR_15.last->line);
  FUNC_0(&VAR_15);

  if ((VAR_13 != 2) || (VAR_14->msg.nLines == 2)) {




   VAR_11->STATfileParamWorks = VAR_2;
   VAR_11->errNo = VAR_13 = VAR_8;
   FUNC_1(VAR_11, VAR_14);
   (void) FUNC_3(VAR_11, VAR_16);
   return (VAR_13);
  } else if (
    (VAR_14->msg.first->next != ((void*)0)) &&
    (VAR_14->msg.first->next->line != ((void*)0)) &&
    (
     (FUNC_9(VAR_14->msg.first->next->line, "o such file") != ((void*)0)) ||
     (FUNC_9(VAR_14->msg.first->next->line, "ot found") != ((void*)0))
    )
  ) {

   VAR_11->STATfileParamWorks = VAR_2;
   VAR_11->errNo = VAR_13 = VAR_8;
   FUNC_1(VAR_11, VAR_14);
   (void) FUNC_3(VAR_11, VAR_16);
   return (VAR_13);
  }
  FUNC_1(VAR_11, VAR_14);
  VAR_11->STATfileParamWorks = VAR_1;


  (void) FUNC_3(VAR_11, VAR_16);
 }

 VAR_14 = FUNC_6();
 if (VAR_14 == ((void*)0)) {
  VAR_13 = VAR_6;
  VAR_11->errNo = VAR_6;
  FUNC_2(VAR_11, VAR_3, "Malloc failed.\n");
  return (VAR_13);
 }

 VAR_13 = FUNC_7(VAR_11, VAR_14, "STAT %s", VAR_12);
 if (VAR_13 == 2) {
  VAR_13 = VAR_10;
  if (((VAR_14->msg.nLines >= 3) || (VAR_14->msg.nLines == 1))) {
   if (
    (VAR_14->msg.first->next != ((void*)0)) &&
    (VAR_14->msg.first->next->line != ((void*)0)) &&
    (
     (FUNC_9(VAR_14->msg.first->next->line, "o such file") != ((void*)0)) ||
     (FUNC_9(VAR_14->msg.first->next->line, "ot found") != ((void*)0))
    )
   ) {
    VAR_11->errNo = VAR_7;
    VAR_13 = VAR_7;
   } else {
    VAR_13 = VAR_10;
   }
  } else if (VAR_14->msg.nLines == 2) {
   VAR_11->errNo = VAR_7;
   VAR_13 = VAR_7;
  } else {
   VAR_13 = VAR_10;
  }
 } else {
  VAR_11->errNo = VAR_7;
  VAR_13 = VAR_7;
 }
 FUNC_1(VAR_11, VAR_14);
 return (VAR_13);
}
