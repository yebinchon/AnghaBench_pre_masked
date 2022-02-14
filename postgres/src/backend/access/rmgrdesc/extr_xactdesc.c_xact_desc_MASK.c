
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xl_xact_prepare ;
typedef int xl_xact_commit ;
struct TYPE_3__ {int xtop; } ;
typedef TYPE_1__ xl_xact_assignment ;
typedef int xl_xact_abort ;
typedef scalar_t__ uint8 ;
typedef int XLogReaderState ;
typedef int StringInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,scalar_t__,int *) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,scalar_t__,int *,int ) ;
 int FUNC_7 (int ,scalar_t__,int *) ;

void
FUNC_8(StringInfo VAR_7, XLogReaderState *VAR_8)
{
 char *VAR_9 = FUNC_0(VAR_8);
 uint8 VAR_10 = FUNC_1(VAR_8) & VAR_5;

 if (VAR_10 == VAR_3 || VAR_10 == VAR_4)
 {
  xl_xact_commit *VAR_11 = (xl_xact_commit *) VAR_9;

  FUNC_6(VAR_7, FUNC_1(VAR_8), VAR_11,
       FUNC_2(VAR_8));
 }
 else if (VAR_10 == VAR_0 || VAR_10 == VAR_1)
 {
  xl_xact_abort *VAR_12 = (xl_xact_abort *) VAR_9;

  FUNC_4(VAR_7, FUNC_1(VAR_8), VAR_12);
 }
 else if (VAR_10 == VAR_6)
 {
  xl_xact_prepare *VAR_13 = (xl_xact_prepare *) VAR_9;

  FUNC_7(VAR_7, FUNC_1(VAR_8), VAR_13);
 }
 else if (VAR_10 == VAR_2)
 {
  xl_xact_assignment *VAR_14 = (xl_xact_assignment *) VAR_9;






  FUNC_3(VAR_7, "xtop %u: ", VAR_14->xtop);
  FUNC_5(VAR_7, VAR_14);
 }
}
