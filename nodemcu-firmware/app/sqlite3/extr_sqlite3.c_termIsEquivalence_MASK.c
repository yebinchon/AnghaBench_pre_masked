
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {char* zName; } ;
struct TYPE_12__ {scalar_t__ op; int pRight; int pLeft; } ;
struct TYPE_11__ {int db; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ Expr ;
typedef TYPE_3__ CollSeq ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_2 (TYPE_1__*,int ,int ) ;
 char FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;

__attribute__((used)) static int FUNC_8(Parse *VAR_4, Expr *VAR_5){
  char VAR_6, VAR_7;
  CollSeq *VAR_8;
  const char *VAR_9, *VAR_10;
  if( !FUNC_1(VAR_4->db, VAR_1) ) return 0;
  if( VAR_5->op!=VAR_2 && VAR_5->op!=VAR_3 ) return 0;
  if( FUNC_0(VAR_5, VAR_0) ) return 0;
  VAR_6 = FUNC_3(VAR_5->pLeft);
  VAR_7 = FUNC_3(VAR_5->pRight);
  if( VAR_6!=VAR_7
   && (!FUNC_5(VAR_6) || !FUNC_5(VAR_7))
  ){
    return 0;
  }
  VAR_8 = FUNC_2(VAR_4, VAR_5->pLeft, VAR_5->pRight);
  if( VAR_8==0 || FUNC_6(VAR_8->zName, "BINARY")==0 ) return 1;
  VAR_8 = FUNC_4(VAR_4, VAR_5->pLeft);
  VAR_9 = VAR_8 ? VAR_8->zName : 0;
  VAR_8 = FUNC_4(VAR_4, VAR_5->pRight);
  VAR_10 = VAR_8 ? VAR_8->zName : 0;
  return FUNC_7(VAR_9, VAR_10)==0;
}
