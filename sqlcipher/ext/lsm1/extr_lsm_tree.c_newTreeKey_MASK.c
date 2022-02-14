
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int iWrite; } ;
struct TYPE_9__ {TYPE_1__ treehdr; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_10__ {int nKey; int nValue; scalar_t__ flags; } ;
typedef TYPE_3__ TreeKey ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (TYPE_2__*,int,int,int*) ;
 void* FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static TreeKey *FUNC_6(
  lsm_db *VAR_3,
  u32 *VAR_4,
  void *VAR_5, int VAR_6,
  void *VAR_7, int VAR_8,
  int *VAR_9
){
  TreeKey *VAR_10;
  u32 VAR_11;
  u32 VAR_12;
  int VAR_13;
  u8 *VAR_14;
  int VAR_15;


  *VAR_4 = VAR_11 = FUNC_4(VAR_3, 1, sizeof(TreeKey), VAR_9);
  VAR_10 = FUNC_5(VAR_3, VAR_11);
  if( *VAR_9 ) return 0;
  VAR_10->nKey = VAR_6;
  VAR_10->nValue = VAR_8;


  VAR_15 = VAR_13 = VAR_6;
  VAR_14 = (u8 *)VAR_5;
  while( VAR_14 ){
    while( VAR_13>0 ){
      u8 *VAR_16;
      int VAR_17;
      u32 VAR_18;

      VAR_18 = (VAR_3->treehdr.iWrite & (VAR_2-1));
      VAR_18 = FUNC_0(VAR_18, VAR_1);
      VAR_17 = FUNC_1((VAR_2-VAR_18), (u32)VAR_13);

      VAR_16 = FUNC_5(VAR_3, FUNC_4(VAR_3, 0, VAR_17, VAR_9));
      if( VAR_16==0 ) break;
      FUNC_2(VAR_16, &VAR_14[VAR_15-VAR_13], VAR_17);
      VAR_13 -= VAR_17;
    }
    VAR_14 = VAR_7;
    VAR_15 = VAR_13 = VAR_8;
    VAR_7 = 0;
  }

  VAR_12 = VAR_11 + sizeof(TreeKey) + VAR_6 + FUNC_0(0, VAR_8);
  if( (VAR_11 & ~(VAR_2-1))!=(VAR_12 & ~(VAR_2-1)) ){
    VAR_10->flags = 0;
  }else{
    VAR_10->flags = VAR_0;
  }

  if( *VAR_9 ) return 0;



  return VAR_10;
}
