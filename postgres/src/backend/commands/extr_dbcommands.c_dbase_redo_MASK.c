
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db_id; int tablespace_id; } ;
typedef TYPE_1__ xl_dbase_drop_rec ;
struct TYPE_4__ {int src_db_id; int tablespace_id; int db_id; int src_tablespace_id; } ;
typedef TYPE_2__ xl_dbase_create_rec ;
typedef scalar_t__ uint8 ;
struct stat {int st_mode; } ;
typedef int XLogReaderState ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (int ,char*,scalar_t__) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*,int) ;
 scalar_t__ FUNC_19 (char*,struct stat*) ;

void
FUNC_20(XLogReaderState *VAR_8)
{
 uint8 VAR_9 = FUNC_12(VAR_8) & ~VAR_7;


 FUNC_0(!FUNC_13(VAR_8));

 if (VAR_9 == VAR_5)
 {
  xl_dbase_create_rec *VAR_10 = (xl_dbase_create_rec *) FUNC_11(VAR_8);
  char *VAR_11;
  char *VAR_12;
  struct stat VAR_13;

  VAR_11 = FUNC_4(VAR_10->src_db_id, VAR_10->src_tablespace_id);
  VAR_12 = FUNC_4(VAR_10->db_id, VAR_10->tablespace_id);






  if (FUNC_19(VAR_12, &VAR_13) == 0 && FUNC_8(VAR_13.st_mode))
  {
   if (!FUNC_18(VAR_12, 1))

    FUNC_16(VAR_4,
      (FUNC_17("some useless files may be left behind in old database directory \"%s\"",
        VAR_12)));
  }





  FUNC_2(VAR_10->src_db_id);






  FUNC_14(VAR_11, VAR_12, 0);
 }
 else if (VAR_9 == VAR_6)
 {
  xl_dbase_drop_rec *VAR_14 = (xl_dbase_drop_rec *) FUNC_11(VAR_8);
  char *VAR_15;

  VAR_15 = FUNC_4(VAR_14->db_id, VAR_14->tablespace_id);

  if (VAR_2)
  {
   FUNC_5(VAR_1, VAR_14->db_id, 0, VAR_0);
   FUNC_7(VAR_14->db_id);
  }


  FUNC_6(VAR_14->db_id);


  FUNC_1(VAR_14->db_id);


  FUNC_3(VAR_14->db_id);


  FUNC_10(VAR_14->db_id);


  if (!FUNC_18(VAR_15, 1))
   FUNC_16(VAR_4,
     (FUNC_17("some useless files may be left behind in old database directory \"%s\"",
       VAR_15)));

  if (VAR_2)
  {







   FUNC_9(VAR_1, VAR_14->db_id, 0, VAR_0);
  }
 }
 else
  FUNC_15(VAR_3, "dbase_redo: unknown op code %u", VAR_9);
}
