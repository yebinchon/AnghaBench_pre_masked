
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int aSpecial ;
struct TYPE_4__ {scalar_t__ nUsed; scalar_t__ nAlloc; char* zBuf; } ;
typedef TYPE_1__ JsonString ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(JsonString *VAR_0, const char *VAR_1, u32 VAR_2){
  u32 VAR_3;
  if( (VAR_2+VAR_0->nUsed+2 >= VAR_0->nAlloc) && FUNC_1(VAR_0,VAR_2+2)!=0 ) return;
  VAR_0->zBuf[VAR_0->nUsed++] = '"';
  for(VAR_3=0; VAR_3<VAR_2; VAR_3++){
    unsigned char VAR_4 = ((unsigned const char*)VAR_1)[VAR_3];
    if( VAR_4=='"' || VAR_4=='\\' ){
      json_simple_escape:
      if( (VAR_0->nUsed+VAR_2+3-VAR_3 > VAR_0->nAlloc) && FUNC_1(VAR_0,VAR_2+3-VAR_3)!=0 ) return;
      VAR_0->zBuf[VAR_0->nUsed++] = '\\';
    }else if( VAR_4<=0x1f ){
      static const char VAR_5[] = {
         0, 0, 0, 0, 0, 0, 0, 0, 'b', 't', 'n', 0, 'f', 'r', 0, 0,
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
      };
      FUNC_0( sizeof(VAR_5)==32 );
      FUNC_0( VAR_5['\b']=='b' );
      FUNC_0( VAR_5['\f']=='f' );
      FUNC_0( VAR_5['\n']=='n' );
      FUNC_0( VAR_5['\r']=='r' );
      FUNC_0( VAR_5['\t']=='t' );
      if( VAR_5[VAR_4] ){
        VAR_4 = VAR_5[VAR_4];
        goto json_simple_escape;
      }
      if( (VAR_0->nUsed+VAR_2+7+VAR_3 > VAR_0->nAlloc) && FUNC_1(VAR_0,VAR_2+7-VAR_3)!=0 ) return;
      VAR_0->zBuf[VAR_0->nUsed++] = '\\';
      VAR_0->zBuf[VAR_0->nUsed++] = 'u';
      VAR_0->zBuf[VAR_0->nUsed++] = '0';
      VAR_0->zBuf[VAR_0->nUsed++] = '0';
      VAR_0->zBuf[VAR_0->nUsed++] = '0' + (VAR_4>>4);
      VAR_4 = "0123456789abcdef"[VAR_4&0xf];
    }
    VAR_0->zBuf[VAR_0->nUsed++] = VAR_4;
  }
  VAR_0->zBuf[VAR_0->nUsed++] = '"';
  FUNC_0( VAR_0->nUsed<VAR_0->nAlloc );
}
