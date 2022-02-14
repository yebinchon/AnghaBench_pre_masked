
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ longest_int ;
struct TYPE_16__ {scalar_t__ hasSIZE; void* errNo; int magic; } ;
struct TYPE_14__ {TYPE_1__* first; } ;
struct TYPE_15__ {int code; TYPE_2__ msg; } ;
struct TYPE_13__ {int line; } ;
typedef TYPE_3__* ResponsePtr ;
typedef TYPE_4__* FTPCIPtr ;


 int FUNC_0 (TYPE_4__* const,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__* const,int ,char*) ;
 int FUNC_2 (TYPE_4__* const,int const) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (TYPE_4__* const,TYPE_3__*,char*,char const* const) ;
 char* VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int ,char*,scalar_t__* const) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int *,int ) ;

int
FUNC_9(const FTPCIPtr VAR_12, const char *const VAR_13, longest_int *const VAR_14, const int VAR_15)
{
 int VAR_16;
 ResponsePtr VAR_17;

 if (VAR_12 == ((void*)0))
  return (VAR_5);
 if (FUNC_7(VAR_12->magic, VAR_9))
  return (VAR_4);

 if ((VAR_14 == ((void*)0)) || (VAR_13 == ((void*)0)))
  return (VAR_5);
 *VAR_14 = VAR_11;

 VAR_16 = FUNC_2(VAR_12, VAR_15);
 if (VAR_16 < 0)
  return (VAR_16);

 if (VAR_12->hasSIZE == VAR_2) {
  VAR_12->errNo = VAR_8;
  VAR_16 = VAR_8;
 } else {
  VAR_17 = FUNC_3();
  if (VAR_17 == ((void*)0)) {
   VAR_16 = VAR_6;
   VAR_12->errNo = VAR_6;
   FUNC_1(VAR_12, VAR_3, "Malloc failed.\n");
  } else {
   VAR_16 = FUNC_4(VAR_12, VAR_17, "SIZE %s", VAR_13);
   if (VAR_16 < 0) {
    FUNC_0(VAR_12, VAR_17);
    return (VAR_16);
   } else if (VAR_16 == 2) {





    (void) FUNC_6(VAR_17->msg.first->line, "%ld", VAR_14);

    VAR_12->hasSIZE = VAR_1;
    VAR_16 = VAR_10;
   } else if (FUNC_5(VAR_17->code)) {
    VAR_12->hasSIZE = VAR_2;
    VAR_12->errNo = VAR_8;
    VAR_16 = VAR_8;
   } else {
    VAR_12->errNo = VAR_7;
    VAR_16 = VAR_7;
   }
   FUNC_0(VAR_12, VAR_17);
  }
 }
 return (VAR_16);
}
