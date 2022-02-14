
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db_id; int tablespace_id; } ;
typedef TYPE_1__ xl_dbase_drop_rec ;
struct TYPE_4__ {int db_id; int tablespace_id; int src_db_id; int src_tablespace_id; } ;
typedef TYPE_2__ xl_dbase_create_rec ;
typedef scalar_t__ uint8 ;
typedef int XLogReaderState ;
typedef int StringInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ,...) ;

void
FUNC_3(StringInfo VAR_3, XLogReaderState *VAR_4)
{
 char *VAR_5 = FUNC_0(VAR_4);
 uint8 VAR_6 = FUNC_1(VAR_4) & ~VAR_2;

 if (VAR_6 == VAR_0)
 {
  xl_dbase_create_rec *VAR_7 = (xl_dbase_create_rec *) VAR_5;

  FUNC_2(VAR_3, "copy dir %u/%u to %u/%u",
       VAR_7->src_tablespace_id, VAR_7->src_db_id,
       VAR_7->tablespace_id, VAR_7->db_id);
 }
 else if (VAR_6 == VAR_1)
 {
  xl_dbase_drop_rec *VAR_8 = (xl_dbase_drop_rec *) VAR_5;

  FUNC_2(VAR_3, "dir %u/%u",
       VAR_8->tablespace_id, VAR_8->db_id);
 }
}
