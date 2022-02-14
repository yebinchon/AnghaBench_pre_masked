
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int ht_slot ;
typedef int Wal ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,scalar_t__ volatile**) ;

__attribute__((used)) static int FUNC_2(
  Wal *VAR_4,
  int VAR_5,
  volatile ht_slot **VAR_6,
  volatile u32 **VAR_7,
  u32 *VAR_8
){
  int VAR_9;
  volatile u32 *VAR_10;

  VAR_9 = FUNC_1(VAR_4, VAR_5, &VAR_10);
  FUNC_0( VAR_9==VAR_2 || VAR_5>0 );

  if( VAR_9==VAR_2 ){
    u32 VAR_11;
    volatile ht_slot *VAR_12;

    VAR_12 = (volatile ht_slot *)&VAR_10[VAR_0];
    if( VAR_5==0 ){
      VAR_10 = &VAR_10[VAR_3/sizeof(u32)];
      VAR_11 = 0;
    }else{
      VAR_11 = VAR_1 + (VAR_5-1)*VAR_0;
    }

    *VAR_7 = &VAR_10[-1];
    *VAR_6 = VAR_12;
    *VAR_8 = VAR_11;
  }
  return VAR_9;
}
