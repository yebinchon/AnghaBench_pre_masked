
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nUsed; char* zBuf; } ;
typedef TYPE_1__ JsonString ;


 int FUNC_0 (TYPE_1__*,char) ;

__attribute__((used)) static void FUNC_1(JsonString *VAR_0){
  char VAR_1;
  if( VAR_0->nUsed==0 ) return;
  VAR_1 = VAR_0->zBuf[VAR_0->nUsed-1];
  if( VAR_1!='[' && VAR_1!='{' ) FUNC_0(VAR_0, ',');
}
