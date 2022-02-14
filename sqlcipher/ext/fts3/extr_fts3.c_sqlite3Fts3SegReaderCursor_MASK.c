
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nIndex; } ;
typedef TYPE_1__ Fts3Table ;
typedef int Fts3MultiSegReader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int,int,char const*,int,int,int,int *) ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3(
  Fts3Table *VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6,
  const char *VAR_7,
  int VAR_8,
  int VAR_9,
  int VAR_10,
  Fts3MultiSegReader *VAR_11
){
  FUNC_0( VAR_5>=0 && VAR_5<VAR_3->nIndex );
  FUNC_0( VAR_6==VAR_0
      || VAR_6==VAR_1
      || VAR_6>=0
  );
  FUNC_0( VAR_6<VAR_2 );
  FUNC_0( VAR_0<0 && VAR_1<0 );
  FUNC_0( VAR_9==0 || VAR_10==0 );

  FUNC_2(VAR_11, 0, sizeof(Fts3MultiSegReader));
  return FUNC_1(
      VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11
  );
}
