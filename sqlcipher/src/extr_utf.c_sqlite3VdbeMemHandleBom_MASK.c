
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int n; char* z; int enc; int flags; } ;
typedef TYPE_1__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(Mem *VAR_4){
  int VAR_5 = VAR_1;
  u8 VAR_6 = 0;

  FUNC_0( VAR_4->n>=0 );
  if( VAR_4->n>1 ){
    u8 VAR_7 = *(u8 *)VAR_4->z;
    u8 VAR_8 = *(((u8 *)VAR_4->z) + 1);
    if( VAR_7==0xFE && VAR_8==0xFF ){
      VAR_6 = VAR_2;
    }
    if( VAR_7==0xFF && VAR_8==0xFE ){
      VAR_6 = VAR_3;
    }
  }

  if( VAR_6 ){
    VAR_5 = FUNC_2(VAR_4);
    if( VAR_5==VAR_1 ){
      VAR_4->n -= 2;
      FUNC_1(VAR_4->z, &VAR_4->z[2], VAR_4->n);
      VAR_4->z[VAR_4->n] = '\0';
      VAR_4->z[VAR_4->n+1] = '\0';
      VAR_4->flags |= VAR_0;
      VAR_4->enc = VAR_6;
    }
  }
  return VAR_5;
}
