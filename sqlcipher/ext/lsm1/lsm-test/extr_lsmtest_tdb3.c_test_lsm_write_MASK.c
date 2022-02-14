
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_4__ {scalar_t__ eMode; int db; } ;
typedef TYPE_1__ LsmDb ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*,int,void*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(
  TestDb *VAR_4,
  void *VAR_5,
  int VAR_6,
  void *VAR_7,
  int VAR_8
){
  LsmDb *VAR_9 = (LsmDb *)VAR_4;
  int VAR_10 = VAR_3;

  if( VAR_9->eMode==VAR_1 ){
    VAR_10 = FUNC_1(VAR_9, VAR_9->db);
  }else if(
      VAR_9->eMode==VAR_2
   || VAR_9->eMode==VAR_0
  ){
    VAR_10 = FUNC_2(VAR_9);
  }

  if( VAR_10==VAR_3 ){
    VAR_10 = FUNC_0(VAR_9->db, VAR_5, VAR_6, VAR_7, VAR_8);
  }
  return VAR_10;
}
