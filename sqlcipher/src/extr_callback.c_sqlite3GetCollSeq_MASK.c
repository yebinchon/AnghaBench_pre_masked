
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3 ;
struct TYPE_10__ {scalar_t__ xCmp; } ;
struct TYPE_9__ {int rc; int * db; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ CollSeq ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char const*) ;
 int FUNC_2 (TYPE_1__*,char*,char const*) ;
 TYPE_2__* FUNC_3 (int *,int ,char const*,int ) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*) ;

CollSeq *FUNC_5(
  Parse *VAR_1,
  u8 VAR_2,
  CollSeq *VAR_3,
  const char *VAR_4
){
  CollSeq *VAR_5;
  sqlite3 *VAR_6 = VAR_1->db;

  VAR_5 = VAR_3;
  if( !VAR_5 ){
    VAR_5 = FUNC_3(VAR_6, VAR_2, VAR_4, 0);
  }
  if( !VAR_5 || !VAR_5->xCmp ){



    FUNC_1(VAR_6, VAR_2, VAR_4);
    VAR_5 = FUNC_3(VAR_6, VAR_2, VAR_4, 0);
  }
  if( VAR_5 && !VAR_5->xCmp && FUNC_4(VAR_6, VAR_5) ){
    VAR_5 = 0;
  }
  FUNC_0( !VAR_5 || VAR_5->xCmp );
  if( VAR_5==0 ){
    FUNC_2(VAR_1, "no such collation sequence: %s", VAR_4);
    VAR_1->rc = VAR_0;
  }
  return VAR_5;
}
