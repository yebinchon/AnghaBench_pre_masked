
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_5__ {int trig_insert_new_table; int trig_update_old_table; int trig_update_new_table; int trig_delete_old_table; int trig_truncate_after_statement; int trig_truncate_before_statement; int trig_delete_after_statement; int trig_delete_before_statement; int trig_delete_instead_row; int trig_delete_after_row; int trig_delete_before_row; int trig_update_after_statement; int trig_update_before_statement; int trig_update_instead_row; int trig_update_after_row; int trig_update_before_row; int trig_insert_after_statement; int trig_insert_before_statement; int trig_insert_instead_row; int trig_insert_after_row; int trig_insert_before_row; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_6__ {int tgoldtable; int tgnewtable; int tgtype; } ;
typedef TYPE_2__ Trigger ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(TriggerDesc *VAR_9, Trigger *VAR_10)
{
 int16 VAR_11 = VAR_10->tgtype;

 VAR_9->trig_insert_before_row |=
  FUNC_3(VAR_11, VAR_5,
        VAR_1, VAR_3);
 VAR_9->trig_insert_after_row |=
  FUNC_3(VAR_11, VAR_5,
        VAR_0, VAR_3);
 VAR_9->trig_insert_instead_row |=
  FUNC_3(VAR_11, VAR_5,
        VAR_4, VAR_3);
 VAR_9->trig_insert_before_statement |=
  FUNC_3(VAR_11, VAR_6,
        VAR_1, VAR_3);
 VAR_9->trig_insert_after_statement |=
  FUNC_3(VAR_11, VAR_6,
        VAR_0, VAR_3);
 VAR_9->trig_update_before_row |=
  FUNC_3(VAR_11, VAR_5,
        VAR_1, VAR_8);
 VAR_9->trig_update_after_row |=
  FUNC_3(VAR_11, VAR_5,
        VAR_0, VAR_8);
 VAR_9->trig_update_instead_row |=
  FUNC_3(VAR_11, VAR_5,
        VAR_4, VAR_8);
 VAR_9->trig_update_before_statement |=
  FUNC_3(VAR_11, VAR_6,
        VAR_1, VAR_8);
 VAR_9->trig_update_after_statement |=
  FUNC_3(VAR_11, VAR_6,
        VAR_0, VAR_8);
 VAR_9->trig_delete_before_row |=
  FUNC_3(VAR_11, VAR_5,
        VAR_1, VAR_2);
 VAR_9->trig_delete_after_row |=
  FUNC_3(VAR_11, VAR_5,
        VAR_0, VAR_2);
 VAR_9->trig_delete_instead_row |=
  FUNC_3(VAR_11, VAR_5,
        VAR_4, VAR_2);
 VAR_9->trig_delete_before_statement |=
  FUNC_3(VAR_11, VAR_6,
        VAR_1, VAR_2);
 VAR_9->trig_delete_after_statement |=
  FUNC_3(VAR_11, VAR_6,
        VAR_0, VAR_2);

 VAR_9->trig_truncate_before_statement |=
  FUNC_3(VAR_11, VAR_6,
        VAR_1, VAR_7);
 VAR_9->trig_truncate_after_statement |=
  FUNC_3(VAR_11, VAR_6,
        VAR_0, VAR_7);

 VAR_9->trig_insert_new_table |=
  (FUNC_1(VAR_11) &&
   FUNC_4(VAR_10->tgnewtable));
 VAR_9->trig_update_old_table |=
  (FUNC_2(VAR_11) &&
   FUNC_4(VAR_10->tgoldtable));
 VAR_9->trig_update_new_table |=
  (FUNC_2(VAR_11) &&
   FUNC_4(VAR_10->tgnewtable));
 VAR_9->trig_delete_old_table |=
  (FUNC_0(VAR_11) &&
   FUNC_4(VAR_10->tgoldtable));
}
