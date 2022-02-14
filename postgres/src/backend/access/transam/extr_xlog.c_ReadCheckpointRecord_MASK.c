
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {scalar_t__ xl_rmid; int xl_info; scalar_t__ xl_tot_len; } ;
typedef TYPE_1__ XLogRecord ;
typedef int XLogRecPtr ;
typedef int XLogReaderState ;
typedef int CheckPoint ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int ,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static XLogRecord *
FUNC_4(XLogReaderState *VAR_7, XLogRecPtr VAR_8,
      int VAR_9, bool VAR_10)
{
 XLogRecord *VAR_11;
 uint8 VAR_12;

 if (!FUNC_1(VAR_8))
 {
  if (!VAR_10)
   return ((void*)0);

  switch (VAR_9)
  {
   case 1:
    FUNC_2(VAR_0,
      (FUNC_3("invalid primary checkpoint link in control file")));
    break;
   default:
    FUNC_2(VAR_0,
      (FUNC_3("invalid checkpoint link in backup_label file")));
    break;
  }
  return ((void*)0);
 }

 VAR_11 = FUNC_0(VAR_7, VAR_8, VAR_0, 1);

 if (VAR_11 == ((void*)0))
 {
  if (!VAR_10)
   return ((void*)0);

  switch (VAR_9)
  {
   case 1:
    FUNC_2(VAR_0,
      (FUNC_3("invalid primary checkpoint record")));
    break;
   default:
    FUNC_2(VAR_0,
      (FUNC_3("invalid checkpoint record")));
    break;
  }
  return ((void*)0);
 }
 if (VAR_11->xl_rmid != VAR_1)
 {
  switch (VAR_9)
  {
   case 1:
    FUNC_2(VAR_0,
      (FUNC_3("invalid resource manager ID in primary checkpoint record")));
    break;
   default:
    FUNC_2(VAR_0,
      (FUNC_3("invalid resource manager ID in checkpoint record")));
    break;
  }
  return ((void*)0);
 }
 VAR_12 = VAR_11->xl_info & ~VAR_6;
 if (VAR_12 != VAR_5 &&
  VAR_12 != VAR_4)
 {
  switch (VAR_9)
  {
   case 1:
    FUNC_2(VAR_0,
      (FUNC_3("invalid xl_info in primary checkpoint record")));
    break;
   default:
    FUNC_2(VAR_0,
      (FUNC_3("invalid xl_info in checkpoint record")));
    break;
  }
  return ((void*)0);
 }
 if (VAR_11->xl_tot_len != VAR_2 + VAR_3 + sizeof(CheckPoint))
 {
  switch (VAR_9)
  {
   case 1:
    FUNC_2(VAR_0,
      (FUNC_3("invalid length of primary checkpoint record")));
    break;
   default:
    FUNC_2(VAR_0,
      (FUNC_3("invalid length of checkpoint record")));
    break;
  }
  return ((void*)0);
 }
 return VAR_11;
}
