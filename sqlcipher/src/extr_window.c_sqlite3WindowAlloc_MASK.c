
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_7__ {int eFrmType; int eStart; int eEnd; int bImplicitFrame; void* pStart; void* pEnd; scalar_t__ eExclude; } ;
typedef TYPE_1__ Window ;
struct TYPE_8__ {int db; } ;
typedef TYPE_2__ Parse ;
typedef int Expr ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (int ,int *) ;
 void* FUNC_5 (TYPE_2__*,int *) ;

Window *FUNC_6(
  Parse *VAR_9,
  int VAR_10,
  int VAR_11,
  Expr *VAR_12,
  int VAR_13,
  Expr *VAR_14,
  u8 VAR_15
){
  Window *VAR_16 = 0;
  int VAR_17 = 0;


  FUNC_1( VAR_10==0 || VAR_10==VAR_6 || VAR_10==VAR_7 || VAR_10==VAR_3 );
  FUNC_1( VAR_11==VAR_1 || VAR_11==VAR_5
           || VAR_11==VAR_8 || VAR_11==VAR_2 );
  FUNC_1( VAR_13==VAR_1 || VAR_13==VAR_2
           || VAR_13==VAR_8 || VAR_13==VAR_5 );
  FUNC_1( (VAR_11==VAR_5 || VAR_11==VAR_2)==(VAR_12!=0) );
  FUNC_1( (VAR_13==VAR_2 || VAR_13==VAR_5)==(VAR_14!=0) );

  if( VAR_10==0 ){
    VAR_17 = 1;
    VAR_10 = VAR_6;
  }
  if( (VAR_11==VAR_1 && VAR_13==VAR_5)
   || (VAR_11==VAR_2 && (VAR_13==VAR_5 || VAR_13==VAR_1))
  ){
    FUNC_3(VAR_9, "unsupported frame specification");
    goto windowAllocErr;
  }

  VAR_16 = (Window*)FUNC_2(VAR_9->db, sizeof(Window));
  if( VAR_16==0 ) goto windowAllocErr;
  VAR_16->eFrmType = VAR_10;
  VAR_16->eStart = VAR_11;
  VAR_16->eEnd = VAR_13;
  if( VAR_15==0 && FUNC_0(VAR_9->db, VAR_0) ){
    VAR_15 = VAR_4;
  }
  VAR_16->eExclude = VAR_15;
  VAR_16->bImplicitFrame = VAR_17;
  VAR_16->pEnd = FUNC_5(VAR_9, VAR_14);
  VAR_16->pStart = FUNC_5(VAR_9, VAR_12);
  return VAR_16;

windowAllocErr:
  FUNC_4(VAR_9->db, VAR_14);
  FUNC_4(VAR_9->db, VAR_12);
  return 0;
}
