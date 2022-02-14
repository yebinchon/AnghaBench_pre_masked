
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t i; size_t mx; char* z; } ;
struct TYPE_5__ {char* zErr; TYPE_1__ sIn; } ;
typedef TYPE_2__ ReCompiled ;


 scalar_t__ FUNC_0 (unsigned char const,int*) ;

__attribute__((used)) static unsigned FUNC_1(ReCompiled *VAR_0){
  static const char VAR_1[] = "afnrtv\\()*.+?[$^{|}]";
  static const char VAR_2[] = "\a\f\n\r\t\v";
  int VAR_3, VAR_4 = 0;
  char VAR_5;
  if( VAR_0->sIn.i>=VAR_0->sIn.mx ) return 0;
  VAR_5 = VAR_0->sIn.z[VAR_0->sIn.i];
  if( VAR_5=='u' && VAR_0->sIn.i+4<VAR_0->sIn.mx ){
    const unsigned char *VAR_6 = VAR_0->sIn.z + VAR_0->sIn.i;
    if( FUNC_0(VAR_6[1],&VAR_4)
     && FUNC_0(VAR_6[2],&VAR_4)
     && FUNC_0(VAR_6[3],&VAR_4)
     && FUNC_0(VAR_6[4],&VAR_4)
    ){
      VAR_0->sIn.i += 5;
      return VAR_4;
    }
  }
  if( VAR_5=='x' && VAR_0->sIn.i+2<VAR_0->sIn.mx ){
    const unsigned char *VAR_7 = VAR_0->sIn.z + VAR_0->sIn.i;
    if( FUNC_0(VAR_7[1],&VAR_4)
     && FUNC_0(VAR_7[2],&VAR_4)
    ){
      VAR_0->sIn.i += 3;
      return VAR_4;
    }
  }
  for(VAR_3=0; VAR_1[VAR_3] && VAR_1[VAR_3]!=VAR_5; VAR_3++){}
  if( VAR_1[VAR_3] ){
    if( VAR_3<6 ) VAR_5 = VAR_2[VAR_3];
    VAR_0->sIn.i++;
  }else{
    VAR_0->zErr = "unknown \\ escape";
  }
  return VAR_5;
}
