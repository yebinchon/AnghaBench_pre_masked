
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_9__ {struct TYPE_9__* extraInfo; scalar_t__ unusedBytes; scalar_t__ dwSize; int dwFlags; scalar_t__ granularity; } ;
struct TYPE_8__ {int dbg; int num; } ;
typedef int RTable ;
typedef TYPE_1__ RCore ;
typedef int PJ ;
typedef TYPE_2__* PHeapBlock ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 int * FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 char* FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,scalar_t__) ;
 int FUNC_7 (int *,char*,char*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_13 (int ,char*) ;
 int FUNC_14 (int *,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 char* FUNC_17 (char const*,char) ;
 int FUNC_18 (TYPE_1__*,char const) ;

__attribute__((used)) static void FUNC_19(RCore *VAR_1, const char *VAR_2) {
 char *VAR_3 = FUNC_17 (VAR_2, ' ');
 ut64 VAR_4 = 0;
 PHeapBlock VAR_5 = ((void*)0);
 if (VAR_3) {
  VAR_4 = FUNC_13 (VAR_1->num, VAR_3 + 1);
  PHeapBlock VAR_6 = FUNC_0 (VAR_1->dbg, VAR_4);
  if (VAR_6) {
   ut64 VAR_7 = VAR_6->extraInfo->granularity;
   char *VAR_8 = FUNC_3 (VAR_6->dwFlags);
   if (!VAR_8) {
    VAR_8 = "";
   }
   PJ *VAR_9 = FUNC_8 ();
   RTable *VAR_10 = FUNC_1 ();
   ut64 VAR_11 = VAR_4 - VAR_7;
   switch (VAR_2[0]) {
   case ' ':
    FUNC_14 (VAR_10, "xxnnns", VAR_11, VAR_4, (ut64)VAR_6->dwSize, VAR_7, (ut64)VAR_6->extraInfo->unusedBytes, VAR_8);
    FUNC_11 (FUNC_16 (VAR_10));
    break;
   case 'j':
    FUNC_9 (VAR_9);
    FUNC_6 (VAR_9, "header_address", VAR_11);
    FUNC_6 (VAR_9, "user_address", VAR_4);
    FUNC_7 (VAR_9, "type", VAR_8);
    FUNC_6 (VAR_9, "size", VAR_6->dwSize);
    if (VAR_6->extraInfo->unusedBytes) {
     FUNC_6 (VAR_9, "unused", VAR_6->extraInfo->unusedBytes);
    }
    FUNC_4 (VAR_9);
    FUNC_11 (FUNC_10 (VAR_9));
   }
   FUNC_2 (VAR_6->extraInfo);
   FUNC_2 (VAR_6);
   FUNC_15 (VAR_10);
   FUNC_5 (VAR_9);
  }
  return;
 }
 switch (VAR_2[0]) {
 case '\0':
 case 'f':
 case 'j':
  FUNC_18 (VAR_1, VAR_2[0]);
  break;
 default:
  FUNC_12 (VAR_1, VAR_0);
 }
}
