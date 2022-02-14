
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int sqlite3 ;
typedef scalar_t__ i16 ;
struct TYPE_23__ {scalar_t__ iTable; scalar_t__ iRightJoinTable; } ;
struct TYPE_22__ {int * db; } ;
struct TYPE_21__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_20__ {int pTab; } ;
typedef TYPE_2__ SrcList ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 TYPE_4__* FUNC_4 (int *,TYPE_2__*,int,int) ;
 TYPE_4__* FUNC_5 (int *,TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_6 (TYPE_3__*,int ,TYPE_4__*,TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_7(
  Parse *VAR_4,
  SrcList *VAR_5,
  int VAR_6,
  int VAR_7,
  int VAR_8,
  int VAR_9,
  int VAR_10,
  Expr **VAR_11
){
  sqlite3 *VAR_12 = VAR_4->db;
  Expr *VAR_13;
  Expr *VAR_14;
  Expr *VAR_15;

  FUNC_3( VAR_6<VAR_8 );
  FUNC_3( VAR_5->nSrc>VAR_8 );
  FUNC_3( VAR_5->a[VAR_6].pTab );
  FUNC_3( VAR_5->a[VAR_8].pTab );

  VAR_13 = FUNC_4(VAR_12, VAR_5, VAR_6, VAR_7);
  VAR_14 = FUNC_4(VAR_12, VAR_5, VAR_8, VAR_9);

  VAR_15 = FUNC_6(VAR_4, VAR_3, VAR_13, VAR_14, 0);
  if( VAR_15 && VAR_10 ){
    FUNC_2(VAR_15, VAR_0);
    FUNC_3( !FUNC_0(VAR_15, VAR_2|VAR_1) );
    FUNC_1(VAR_15);
    VAR_15->iRightJoinTable = (i16)VAR_14->iTable;
  }
  *VAR_11 = FUNC_5(VAR_12, *VAR_11, VAR_15);
}
