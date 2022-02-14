
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ts_id; } ;
typedef TYPE_1__ xl_tblspc_drop_rec ;
struct TYPE_4__ {char* ts_path; int ts_id; } ;
typedef TYPE_2__ xl_tblspc_create_rec ;
typedef scalar_t__ uint8 ;
typedef int XLogReaderState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ) ;

void
FUNC_12(XLogReaderState *VAR_6)
{
 uint8 VAR_7 = FUNC_3(VAR_6) & ~VAR_5;


 FUNC_0(!FUNC_4(VAR_6));

 if (VAR_7 == VAR_3)
 {
  xl_tblspc_create_rec *VAR_8 = (xl_tblspc_create_rec *) FUNC_2(VAR_6);
  char *VAR_9 = VAR_8->ts_path;

  FUNC_5(VAR_9, VAR_8->ts_id);
 }
 else if (VAR_7 == VAR_4)
 {
  xl_tblspc_drop_rec *VAR_10 = (xl_tblspc_drop_rec *) FUNC_2(VAR_6);
  if (!FUNC_6(VAR_10->ts_id, 1))
  {
   FUNC_1(VAR_10->ts_id);
   if (!FUNC_6(VAR_10->ts_id, 1))
    FUNC_8(VAR_1,
      (FUNC_9(VAR_0),
       FUNC_11("directories for tablespace %u could not be removed",
        VAR_10->ts_id),
       FUNC_10("You can remove the directories manually if necessary.")));
  }
 }
 else
  FUNC_7(VAR_2, "tblspc_redo: unknown op code %u", VAR_7);
}
