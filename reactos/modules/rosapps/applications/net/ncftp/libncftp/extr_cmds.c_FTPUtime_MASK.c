
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int time_t ;
typedef int mstr ;
typedef int cstr ;
typedef int astr ;
struct TYPE_11__ {scalar_t__ hasUTIME; void* errNo; int magic; } ;
struct TYPE_10__ {int code; } ;
typedef TYPE_1__* ResponsePtr ;
typedef TYPE_2__* FTPCIPtr ;


 int FUNC_0 (TYPE_2__* const,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__* const,int ,char*) ;
 int FUNC_2 (char*,int,int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__* const,TYPE_1__*,char*,char const* const,char*,char*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;

int
FUNC_8(const FTPCIPtr VAR_10, const char *const VAR_11, time_t VAR_12, time_t VAR_13, time_t VAR_14)
{
 char VAR_15[64], VAR_16[64], VAR_17[64];
 int VAR_18;
 ResponsePtr VAR_19;

 if (VAR_10 == ((void*)0))
  return (VAR_4);
 if (FUNC_6(VAR_10->magic, VAR_8))
  return (VAR_3);

 if (VAR_10->hasUTIME == VAR_1) {
  VAR_10->errNo = VAR_7;
  VAR_18 = VAR_7;
 } else {
  if ((VAR_12 == (time_t) 0) || (VAR_12 == (time_t) -1))
   (void) FUNC_7(&VAR_12);
  if ((VAR_13 == (time_t) 0) || (VAR_13 == (time_t) -1))
   (void) FUNC_7(&VAR_13);
  if ((VAR_14 == (time_t) 0) || (VAR_14 == (time_t) -1))
   VAR_14 = VAR_13;

  (void) FUNC_2(VAR_16, sizeof(VAR_16), VAR_12);
  (void) FUNC_2(VAR_15, sizeof(VAR_15), VAR_13);
  (void) FUNC_2(VAR_17, sizeof(VAR_17), VAR_14);

  VAR_19 = FUNC_3();
  if (VAR_19 == ((void*)0)) {
   VAR_18 = VAR_5;
   VAR_10->errNo = VAR_5;
   FUNC_1(VAR_10, VAR_2, "Malloc failed.\n");
  } else {
   VAR_18 = FUNC_4(VAR_10, VAR_19, "SITE UTIME %s %s %s %s UTC", VAR_11, VAR_16, VAR_15, VAR_17);
   if (VAR_18 < 0) {
    FUNC_0(VAR_10, VAR_19);
    return (VAR_18);
   } else if (VAR_18 == 2) {
    VAR_10->hasUTIME = VAR_0;
    VAR_18 = VAR_9;
   } else if (FUNC_5(VAR_19->code)) {
    VAR_10->hasUTIME = VAR_1;
    VAR_10->errNo = VAR_7;
    VAR_18 = VAR_7;
   } else {
    VAR_10->errNo = VAR_6;
    VAR_18 = VAR_6;
   }
   FUNC_0(VAR_10, VAR_19);
  }
 }
 return (VAR_18);
}
