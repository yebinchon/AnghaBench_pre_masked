
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int out ;
typedef scalar_t__ i64 ;
struct TYPE_14__ {scalar_t__ n; } ;
struct TYPE_13__ {scalar_t__ rc; } ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int*,scalar_t__*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (scalar_t__*,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(
  Fts5Index *VAR_0,
  Fts5Buffer *VAR_1,
  Fts5Buffer *VAR_2
){
  int VAR_3 = 0;
  int VAR_4 = 0;
  i64 VAR_5 = 0;
  i64 VAR_6 = 0;
  i64 VAR_7 = 0;

  Fts5Buffer VAR_8;
  FUNC_5(&VAR_8, 0, sizeof(VAR_8));
  FUNC_6(&VAR_0->rc, &VAR_8, VAR_1->n + VAR_2->n);
  if( VAR_0->rc ) return;

  FUNC_4(VAR_1, &VAR_3, &VAR_5);
  FUNC_4(VAR_2, &VAR_4, &VAR_6);
  while( VAR_3>=0 || VAR_4>=0 ){
    if( VAR_3>=0 && (VAR_4<0 || VAR_5<VAR_6) ){
      FUNC_0( VAR_7==0 || VAR_5>VAR_7 );
      FUNC_2(&VAR_8, VAR_5 - VAR_7);
      VAR_7 = VAR_5;
      FUNC_4(VAR_1, &VAR_3, &VAR_5);
    }else{
      FUNC_0( VAR_7==0 || VAR_6>VAR_7 );
      FUNC_2(&VAR_8, VAR_6 - VAR_7);
      VAR_7 = VAR_6;
      if( VAR_3>=0 && VAR_5==VAR_6 ){
        FUNC_4(VAR_1, &VAR_3, &VAR_5);
      }
      FUNC_4(VAR_2, &VAR_4, &VAR_6);
    }
  }

  FUNC_3(&VAR_8, VAR_1);
  FUNC_1(&VAR_8);
}
