
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {void* errNo; int magic; } ;
struct TYPE_10__ {int msg; } ;
typedef TYPE_1__* ResponsePtr ;
typedef int * LineListPtr ;
typedef TYPE_2__* FTPCIPtr ;


 scalar_t__ FUNC_0 (int * const,int *) ;
 int FUNC_1 (TYPE_2__* const,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__* const,int ,char*) ;
 int FUNC_3 (int * const) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__* const,TYPE_1__*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int ,int ) ;

int
FUNC_7(const FTPCIPtr VAR_7, const char *const VAR_8, const LineListPtr VAR_9)
{
 int VAR_10;
 ResponsePtr VAR_11;

 if ((VAR_7 == ((void*)0)) || (VAR_9 == ((void*)0)))
  return (VAR_2);
 if (FUNC_6(VAR_7->magic, VAR_5))
  return (VAR_1);

 FUNC_3(VAR_9);
 VAR_11 = FUNC_4();
 if (VAR_11 == ((void*)0)) {
  VAR_10 = VAR_4;
  VAR_7->errNo = VAR_4;
  FUNC_2(VAR_7, VAR_0, "Malloc failed.\n");
 } else {
  if ((VAR_8 == ((void*)0)) || (*VAR_8 == '\0'))
   VAR_10 = FUNC_5(VAR_7, VAR_11, "HELP");
  else
   VAR_10 = FUNC_5(VAR_7, VAR_11, "HELP %s", VAR_8);
  if (VAR_10 < 0) {
   FUNC_1(VAR_7, VAR_11);
   return (VAR_10);
  } else if (VAR_10 == 2) {
   if (FUNC_0(VAR_9, &VAR_11->msg) < 0) {
    VAR_10 = VAR_4;
    VAR_7->errNo = VAR_4;
    FUNC_2(VAR_7, VAR_0, "Malloc failed.\n");
   } else {
    VAR_10 = VAR_6;
   }
  } else {
   VAR_7->errNo = VAR_3;
   VAR_10 = VAR_3;
  }
  FUNC_1(VAR_7, VAR_11);
 }
 return (VAR_10);
}
