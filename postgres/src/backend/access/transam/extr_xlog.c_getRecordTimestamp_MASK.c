
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xact_time; } ;
typedef TYPE_1__ xl_xact_commit ;
struct TYPE_5__ {int xact_time; } ;
typedef TYPE_2__ xl_xact_abort ;
struct TYPE_6__ {int rp_time; } ;
typedef TYPE_3__ xl_restore_point ;
typedef scalar_t__ uint8 ;
typedef int XLogReaderState ;
typedef int TimestampTz ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static bool
FUNC_3(XLogReaderState *VAR_9, TimestampTz *VAR_10)
{
 uint8 VAR_11 = FUNC_1(VAR_9) & ~VAR_8;
 uint8 VAR_12 = VAR_11 & VAR_7;
 uint8 VAR_13 = FUNC_2(VAR_9);

 if (VAR_13 == VAR_1 && VAR_11 == VAR_2)
 {
  *VAR_10 = ((xl_restore_point *) FUNC_0(VAR_9))->rp_time;
  return 1;
 }
 if (VAR_13 == VAR_0 && (VAR_12 == VAR_5 ||
          VAR_12 == VAR_6))
 {
  *VAR_10 = ((xl_xact_commit *) FUNC_0(VAR_9))->xact_time;
  return 1;
 }
 if (VAR_13 == VAR_0 && (VAR_12 == VAR_3 ||
          VAR_12 == VAR_4))
 {
  *VAR_10 = ((xl_xact_abort *) FUNC_0(VAR_9))->xact_time;
  return 1;
 }
 return 0;
}
