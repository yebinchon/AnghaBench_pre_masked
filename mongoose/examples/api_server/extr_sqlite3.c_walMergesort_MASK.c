
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef size_t ht_slot ;
typedef int aSub ;


 int FUNC_0 (struct Sublist*) ;
 int const VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct Sublist*,int ,int) ;
 int FUNC_3 (scalar_t__ const*,size_t*,int,size_t**,int*,size_t*) ;

__attribute__((used)) static void FUNC_4(
  const u32 *VAR_1,
  ht_slot *VAR_2,
  ht_slot *VAR_3,
  int *VAR_4
){
  struct Sublist {
    int nList;
    ht_slot *aList;
  };

  const int VAR_5 = *VAR_4;
  int VAR_6 = 0;
  ht_slot *VAR_7 = 0;
  int VAR_8;
  int VAR_9 = 0;
  struct Sublist VAR_10[13];

  FUNC_2(VAR_10, 0, sizeof(VAR_10));
  FUNC_1( VAR_5<=VAR_0 && VAR_5>0 );
  FUNC_1( VAR_0==(1<<(FUNC_0(VAR_10)-1)) );

  for(VAR_8=0; VAR_8<VAR_5; VAR_8++){
    VAR_6 = 1;
    VAR_7 = &VAR_3[VAR_8];
    for(VAR_9=0; VAR_8 & (1<<VAR_9); VAR_9++){
      struct Sublist *VAR_11 = &VAR_10[VAR_9];
      FUNC_1( VAR_11->aList && VAR_11->nList<=(1<<VAR_9) );
      FUNC_1( VAR_11->aList==&VAR_3[VAR_8&~((2<<VAR_9)-1)] );
      FUNC_3(VAR_1, VAR_11->aList, VAR_11->nList, &VAR_7, &VAR_6, VAR_2);
    }
    VAR_10[VAR_9].aList = VAR_7;
    VAR_10[VAR_9].nList = VAR_6;
  }

  for(VAR_9++; VAR_9<FUNC_0(VAR_10); VAR_9++){
    if( VAR_5 & (1<<VAR_9) ){
      struct Sublist *VAR_12 = &VAR_10[VAR_9];
      FUNC_1( VAR_12->nList<=(1<<VAR_9) );
      FUNC_1( VAR_12->aList==&VAR_3[VAR_5&~((2<<VAR_9)-1)] );
      FUNC_3(VAR_1, VAR_12->aList, VAR_12->nList, &VAR_7, &VAR_6, VAR_2);
    }
  }
  FUNC_1( VAR_7==VAR_3 );
  *VAR_4 = VAR_6;
}
