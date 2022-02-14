
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_4__ {scalar_t__ nAlloc; char* z; size_t n; } ;
typedef TYPE_1__ LsmString ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(LsmString *VAR_0, void *VAR_1, int VAR_2){
  int VAR_3;
  FUNC_0(VAR_0, VAR_2*2);
  if( VAR_0->nAlloc==0 ) return;
  for(VAR_3=0; VAR_3<VAR_2; VAR_3++){
    u8 VAR_4 = ((u8*)VAR_1)[VAR_3];
    if( VAR_4>='a' && VAR_4<='z' ){
      VAR_0->z[VAR_0->n++] = VAR_4;
    }else if( VAR_4!=0 || VAR_2==1 || VAR_3!=(VAR_2-1) ){
      VAR_0->z[VAR_0->n++] = "0123456789abcdef"[(VAR_4>>4)&0xf];
      VAR_0->z[VAR_0->n++] = "0123456789abcdef"[VAR_4&0xf];
    }
  }
  VAR_0->z[VAR_0->n] = 0;
}
