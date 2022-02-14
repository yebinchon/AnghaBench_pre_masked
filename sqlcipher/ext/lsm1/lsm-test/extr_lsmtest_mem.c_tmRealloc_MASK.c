
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int TmGlobal ;
struct TYPE_2__ {int nByte; } ;
typedef TYPE_1__ TmBlockHdr ;


 int * VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (int *,void*) ;
 void* FUNC_3 (int *,int) ;

__attribute__((used)) static void *FUNC_4(TmGlobal *VAR_1, void *VAR_2, int VAR_3){
  void *VAR_4;

  VAR_4 = FUNC_3(VAR_1, VAR_3);
  if( VAR_4 && VAR_2 ){
    TmBlockHdr *VAR_5;
    u8 *VAR_6 = (u8 *)VAR_2;
    VAR_5 = (TmBlockHdr *)(VAR_6 - VAR_0);
    FUNC_1(VAR_4, VAR_2, FUNC_0(VAR_3, VAR_5->nByte));
    FUNC_2(VAR_1, VAR_2);
  }
  return VAR_4;
}
