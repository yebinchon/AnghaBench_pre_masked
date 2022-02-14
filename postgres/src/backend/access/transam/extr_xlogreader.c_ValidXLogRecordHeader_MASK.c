
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_3__ {scalar_t__ xl_tot_len; scalar_t__ xl_rmid; int xl_prev; } ;
typedef TYPE_1__ XLogRecord ;
typedef int XLogRecPtr ;
typedef int XLogReaderState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static bool
FUNC_1(XLogReaderState *VAR_2, XLogRecPtr VAR_3,
       XLogRecPtr VAR_4, XLogRecord *VAR_5,
       bool VAR_6)
{
 if (VAR_5->xl_tot_len < VAR_1)
 {
  FUNC_0(VAR_2,
         "invalid record length at %X/%X: wanted %u, got %u",
         (uint32) (VAR_3 >> 32), (uint32) VAR_3,
         (uint32) VAR_1, VAR_5->xl_tot_len);
  return 0;
 }
 if (VAR_5->xl_rmid > VAR_0)
 {
  FUNC_0(VAR_2,
         "invalid resource manager ID %u at %X/%X",
         VAR_5->xl_rmid, (uint32) (VAR_3 >> 32),
         (uint32) VAR_3);
  return 0;
 }
 if (VAR_6)
 {




  if (!(VAR_5->xl_prev < VAR_3))
  {
   FUNC_0(VAR_2,
          "record with incorrect prev-link %X/%X at %X/%X",
          (uint32) (VAR_5->xl_prev >> 32),
          (uint32) VAR_5->xl_prev,
          (uint32) (VAR_3 >> 32), (uint32) VAR_3);
   return 0;
  }
 }
 else
 {





  if (VAR_5->xl_prev != VAR_4)
  {
   FUNC_0(VAR_2,
          "record with incorrect prev-link %X/%X at %X/%X",
          (uint32) (VAR_5->xl_prev >> 32),
          (uint32) VAR_5->xl_prev,
          (uint32) (VAR_3 >> 32), (uint32) VAR_3);
   return 0;
  }
 }

 return 1;
}
