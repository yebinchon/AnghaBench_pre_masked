
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ hasMLST; scalar_t__ serverType; int ietfCompatLevel; int errNo; } ;
struct TYPE_15__ {TYPE_2__* first; } ;
struct TYPE_16__ {int code; TYPE_3__ msg; } ;
struct TYPE_14__ {TYPE_1__* next; int * line; } ;
struct TYPE_13__ {int * line; } ;
typedef TYPE_4__* ResponsePtr ;
typedef int MLstItemPtr ;
typedef TYPE_5__* FTPCIPtr ;


 int FUNC_0 (TYPE_5__* const,TYPE_4__*) ;
 int FUNC_1 (TYPE_5__* const,int ,char*) ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (TYPE_5__* const,TYPE_4__*,char*,char const* const) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int const) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

int
FUNC_6(const FTPCIPtr VAR_8, const char *const VAR_9, const MLstItemPtr VAR_10)
{
 int VAR_11;
 ResponsePtr VAR_12;
 if (
  (VAR_8->hasMLST == VAR_0) ||
  ((VAR_8->serverType == VAR_6) && (VAR_8->ietfCompatLevel < 19981201)) ||
  (VAR_8->serverType == VAR_7)
 ) {
  VAR_8->errNo = VAR_4;
  return (VAR_8->errNo);
 }

 VAR_12 = FUNC_2();
 if (VAR_12 == ((void*)0)) {
  VAR_11 = VAR_8->errNo = VAR_5;
  FUNC_1(VAR_8, VAR_1, "Malloc failed.\n");
 } else {
  VAR_11 = FUNC_3(VAR_8, VAR_12, "MLST %s", VAR_9);
  if (
   (VAR_11 == 2) &&
   (VAR_12->msg.first->line != ((void*)0)) &&
   (VAR_12->msg.first->next != ((void*)0)) &&
   (VAR_12->msg.first->next->line != ((void*)0))
  ) {
   VAR_11 = FUNC_5(VAR_12->msg.first->next->line, VAR_10);
   if (VAR_11 < 0) {
    VAR_8->errNo = VAR_11 = VAR_2;
   }
  } else if (FUNC_4(VAR_12->code)) {
   VAR_8->hasMLST = VAR_0;
   VAR_8->errNo = VAR_4;
   VAR_11 = VAR_4;
  } else {
   VAR_8->errNo = VAR_3;
   VAR_11 = VAR_3;
  }
  FUNC_0(VAR_8, VAR_12);
 }

 return (VAR_11);
}
