
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {size_t n; int * z; } ;
struct TYPE_6__ {size_t iBuf; TYPE_1__ buf; } ;
typedef int LsmString ;
typedef TYPE_2__ LogReader ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int,int **,int*) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(
  LogReader *VAR_1,
  LsmString *VAR_2,
  int *VAR_3,
  int *VAR_4
){
  if( *VAR_4==VAR_0 ){
    u8 *VAR_5;
    if( VAR_1->buf.n==VAR_1->iBuf ){
      FUNC_0(VAR_1, 0, 10, &VAR_5, VAR_4);
      if( VAR_0==*VAR_4 ) VAR_1->iBuf -= (10 - FUNC_1(VAR_5, VAR_3));
    }else{
      FUNC_0(VAR_1, VAR_2, FUNC_2(VAR_1->buf.z[VAR_1->iBuf]), &VAR_5, VAR_4);
      if( VAR_0==*VAR_4 ) FUNC_1(VAR_5, VAR_3);
    }
  }
}
