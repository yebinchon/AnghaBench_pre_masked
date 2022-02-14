
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_8__ {scalar_t__ offset; } ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ RFlagsAtOffset ;
typedef TYPE_2__ RFlagItem ;
typedef int RFlag ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static bool FUNC_3(RFlag *VAR_0, RFlagItem *VAR_1, ut64 VAR_2, bool VAR_3, bool VAR_4) {
 if (VAR_1->offset != VAR_2 || VAR_4) {
  if (!VAR_3) {
   FUNC_2 (VAR_0, VAR_1);
  }
  VAR_1->offset = VAR_2;

  RFlagsAtOffset *VAR_5 = FUNC_0 (VAR_0, VAR_2);
  if (!VAR_5) {
   return 0;
  }

  FUNC_1 (VAR_5->flags, VAR_1);
  return 1;
 }

 return 0;
}
