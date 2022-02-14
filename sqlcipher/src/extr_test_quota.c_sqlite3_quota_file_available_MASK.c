
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * f; } ;
typedef TYPE_1__ quota_FILE ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,long,int ) ;
 long FUNC_1 (int *) ;

long FUNC_2(quota_FILE *VAR_2){
  FILE* VAR_3 = VAR_2->f;
  long VAR_4, VAR_5;
  int VAR_6;
  VAR_4 = FUNC_1(VAR_3);
  if ( VAR_4 < 0 ) return -1;
  VAR_6 = FUNC_0(VAR_3, 0, VAR_0);
  if ( VAR_6 != 0 ) return -1;
  VAR_5 = FUNC_1(VAR_3);
  if ( VAR_5 < 0 ) return -1;
  VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_1);
  if ( VAR_6 != 0 ) return -1;
  return VAR_5 - VAR_4;
}
