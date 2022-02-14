
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nsymbol; int nterminal; } ;
typedef TYPE_1__ acttab ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_0 ;

acttab *FUNC_4(int VAR_1, int VAR_2){
  acttab *VAR_3 = (acttab *) FUNC_0( 1, sizeof(*VAR_3) );
  if( VAR_3==0 ){
    FUNC_2(VAR_0,"Unable to allocate memory for a new acttab.");
    FUNC_1(1);
  }
  FUNC_3(VAR_3, 0, sizeof(*VAR_3));
  VAR_3->nsymbol = VAR_1;
  VAR_3->nterminal = VAR_2;
  return VAR_3;
}
