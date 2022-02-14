
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ nUsed; scalar_t__ nAlloc; scalar_t__ zBuf; } ;
typedef TYPE_1__ JsonString ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (scalar_t__,char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(JsonString *VAR_0, const char *VAR_1, u32 VAR_2){
  if( (VAR_2+VAR_0->nUsed >= VAR_0->nAlloc) && FUNC_0(VAR_0,VAR_2)!=0 ) return;
  FUNC_1(VAR_0->zBuf+VAR_0->nUsed, VAR_1, VAR_2);
  VAR_0->nUsed += VAR_2;
}
