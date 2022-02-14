
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int validHMS; int iJD; int s; int h; int m; scalar_t__ rawS; } ;
typedef TYPE_1__ DateTime ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(DateTime *VAR_0){
  int VAR_1;
  if( VAR_0->validHMS ) return;
  FUNC_0(VAR_0);
  VAR_1 = (int)((VAR_0->iJD + 43200000) % 86400000);
  VAR_0->s = VAR_1/1000.0;
  VAR_1 = (int)VAR_0->s;
  VAR_0->s -= VAR_1;
  VAR_0->h = VAR_1/3600;
  VAR_1 -= VAR_0->h*3600;
  VAR_0->m = VAR_1/60;
  VAR_0->s += VAR_1 - VAR_0->m*60;
  VAR_0->rawS = 0;
  VAR_0->validHMS = 1;
}
