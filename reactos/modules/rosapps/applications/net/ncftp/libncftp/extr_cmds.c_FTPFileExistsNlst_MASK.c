
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int savedCwd ;
struct TYPE_13__ {scalar_t__ NLSTfileParamWorks; int errNo; char* startingWorkingDirectory; int magic; } ;
struct TYPE_12__ {int nLines; TYPE_1__* last; } ;
struct TYPE_11__ {char const* line; } ;
typedef TYPE_2__ LineList ;
typedef TYPE_3__* FTPCIPtr ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__* const,char*) ;
 int FUNC_2 (TYPE_3__* const,char*,int) ;
 int FUNC_3 (TYPE_3__* const,char const* const,TYPE_2__*,char*,int ,int*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int * FUNC_6 (char const*,char*) ;

int
FUNC_7(const FTPCIPtr VAR_9, const char *const VAR_10)
{
 int VAR_11;
 LineList VAR_12, VAR_13;
 char VAR_14[512];

 if (VAR_9 == ((void*)0))
  return (VAR_4);
 if (FUNC_5(VAR_9->magic, VAR_7))
  return (VAR_3);

 if (VAR_10 == ((void*)0))
  return (VAR_4);

 if (VAR_9->NLSTfileParamWorks == VAR_2) {
  VAR_9->errNo = VAR_11 = VAR_6;
  return (VAR_11);
 }

 if (VAR_9->NLSTfileParamWorks == VAR_0) {
  if (
   ((FUNC_3(VAR_9, "NoSuchFile", &VAR_12, "", 0, (int *) 0)) == VAR_8) &&
   (VAR_12.nLines >= 1) &&
   (FUNC_6(VAR_12.last->line, "o such file") == ((void*)0)) &&
   (FUNC_6(VAR_12.last->line, "ot found") == ((void*)0)) &&
   (FUNC_6(VAR_12.last->line, "o Such File") == ((void*)0)) &&
   (FUNC_6(VAR_12.last->line, "ot Found") == ((void*)0))

  ) {
   VAR_9->NLSTfileParamWorks = VAR_2;
   VAR_9->errNo = VAR_11 = VAR_6;
   FUNC_0(&VAR_12);
   return (VAR_11);
  }
  FUNC_0(&VAR_12);






  if (
   (FUNC_2(VAR_9, VAR_14, sizeof(VAR_14)) != VAR_8) ||
   (FUNC_1(VAR_9, VAR_9->startingWorkingDirectory) != VAR_8)
  ) {
   return (VAR_9->errNo);
  }
  if (
   ((VAR_11 = FUNC_3(VAR_9, "", &VAR_13, "", 0, (int *) 0)) < 0) ||
   (VAR_13.last == ((void*)0)) ||
   (VAR_13.last->line == ((void*)0))
  ) {

   VAR_9->NLSTfileParamWorks = VAR_2;
   VAR_9->errNo = VAR_11 = VAR_6;
   FUNC_0(&VAR_13);
   (void) FUNC_1(VAR_9, VAR_14);
   return (VAR_11);
  }

  if (
   ((FUNC_3(VAR_9, VAR_13.last->line, &VAR_12, "", 0, (int *) 0)) == VAR_8) &&
   (VAR_12.nLines >= 1) &&
   (FUNC_6(VAR_12.last->line, "o such file") == ((void*)0)) &&
   (FUNC_6(VAR_12.last->line, "ot found") == ((void*)0)) &&
   (FUNC_6(VAR_12.last->line, "o Such File") == ((void*)0)) &&
   (FUNC_6(VAR_12.last->line, "ot Found") == ((void*)0))

  ) {

   FUNC_0(&VAR_12);
   FUNC_0(&VAR_13);
   VAR_9->NLSTfileParamWorks = VAR_1;


   (void) FUNC_1(VAR_9, VAR_14);
  } else {
   VAR_9->NLSTfileParamWorks = VAR_2;
   VAR_9->errNo = VAR_11 = VAR_6;
   FUNC_0(&VAR_12);
   FUNC_0(&VAR_13);
   (void) FUNC_1(VAR_9, VAR_14);
   return (VAR_11);
  }
 }


 FUNC_4(&VAR_12);
 if (
  ((FUNC_3(VAR_9, VAR_10, &VAR_12, "", 0, (int *) 0)) == VAR_8) &&
  (VAR_12.nLines >= 1) &&
  (FUNC_6(VAR_12.last->line, "o such file") == ((void*)0)) &&
  (FUNC_6(VAR_12.last->line, "ot found") == ((void*)0)) &&
  (FUNC_6(VAR_12.last->line, "o Such File") == ((void*)0)) &&
  (FUNC_6(VAR_12.last->line, "ot Found") == ((void*)0))

 ) {

  VAR_11 = VAR_8;
 } else {
  VAR_9->errNo = VAR_5;
  VAR_11 = VAR_5;
 }

 FUNC_0(&VAR_12);
 return (VAR_11);
}
