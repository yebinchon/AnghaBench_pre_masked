
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ rc; } ;
struct TYPE_7__ {scalar_t__ db; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,int,int ,int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,char*,int ,int ,int ) ;
 int FUNC_4 (char const*,scalar_t__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,char*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(
  Error *VAR_8,
  Sqlite *VAR_9,
  const char *VAR_10,
  int VAR_11
){
  if( VAR_8->rc==VAR_0 ){
    int VAR_12;
    int VAR_13 = VAR_1 | VAR_2 | VAR_3;
    if( VAR_11 ) FUNC_6(VAR_10);
    VAR_12 = FUNC_4(VAR_10, &VAR_9->db, VAR_13, 0);
    if( VAR_12 ){
      FUNC_5(VAR_8, VAR_9, "open");
      FUNC_1(VAR_9->db);
      VAR_9->db = 0;
    }else{
      FUNC_2(
          VAR_9->db, "md5sum", -1, VAR_4, 0, 0, VAR_7, VAR_6
      );
      FUNC_0(VAR_9->db, VAR_5, 0);
      FUNC_3(VAR_9->db, "PRAGMA synchronous=OFF", 0, 0, 0);
    }
  }
}
