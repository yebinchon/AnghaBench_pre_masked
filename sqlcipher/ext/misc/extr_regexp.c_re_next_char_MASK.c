
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t i; size_t mx; unsigned int* z; } ;
typedef TYPE_1__ ReInput ;



__attribute__((used)) static unsigned FUNC_0(ReInput *VAR_0){
  unsigned VAR_1;
  if( VAR_0->i>=VAR_0->mx ) return 0;
  VAR_1 = VAR_0->z[VAR_0->i++];
  if( VAR_1>=0x80 ){
    if( (VAR_1&0xe0)==0xc0 && VAR_0->i<VAR_0->mx && (VAR_0->z[VAR_0->i]&0xc0)==0x80 ){
      VAR_1 = (VAR_1&0x1f)<<6 | (VAR_0->z[VAR_0->i++]&0x3f);
      if( VAR_1<0x80 ) VAR_1 = 0xfffd;
    }else if( (VAR_1&0xf0)==0xe0 && VAR_0->i+1<VAR_0->mx && (VAR_0->z[VAR_0->i]&0xc0)==0x80
           && (VAR_0->z[VAR_0->i+1]&0xc0)==0x80 ){
      VAR_1 = (VAR_1&0x0f)<<12 | ((VAR_0->z[VAR_0->i]&0x3f)<<6) | (VAR_0->z[VAR_0->i+1]&0x3f);
      VAR_0->i += 2;
      if( VAR_1<=0x3ff || (VAR_1>=0xd800 && VAR_1<=0xdfff) ) VAR_1 = 0xfffd;
    }else if( (VAR_1&0xf8)==0xf0 && VAR_0->i+3<VAR_0->mx && (VAR_0->z[VAR_0->i]&0xc0)==0x80
           && (VAR_0->z[VAR_0->i+1]&0xc0)==0x80 && (VAR_0->z[VAR_0->i+2]&0xc0)==0x80 ){
      VAR_1 = (VAR_1&0x07)<<18 | ((VAR_0->z[VAR_0->i]&0x3f)<<12) | ((VAR_0->z[VAR_0->i+1]&0x3f)<<6)
                       | (VAR_0->z[VAR_0->i+2]&0x3f);
      VAR_0->i += 3;
      if( VAR_1<=0xffff || VAR_1>0x10ffff ) VAR_1 = 0xfffd;
    }else{
      VAR_1 = 0xfffd;
    }
  }
  return VAR_1;
}
