
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nData; int nUs; int iOff; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,int ,scalar_t__,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(FILE *VAR_1){
  if( VAR_0.nData ){
    FUNC_0(VAR_1, "w %s %lld %d %d\n", "d", VAR_0.iOff, VAR_0.nData, VAR_0.nUs);
    VAR_0.nData = 0;
  }
}
