
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ cksum1; int cksum2; int nRow; } ;
typedef TYPE_1__ Cksum ;



__attribute__((used)) static void FUNC_0(
  void *VAR_0,
  void *VAR_1, int VAR_2,
  void *VAR_3, int VAR_4
){
  Cksum *VAR_5 = (Cksum *)VAR_0;
  int VAR_6;

  VAR_5->nRow++;
  for(VAR_6=0; VAR_6<VAR_2; VAR_6++){
    VAR_5->cksum1 += ((u8 *)VAR_1)[VAR_6];
    VAR_5->cksum2 += VAR_5->cksum1;
  }
  for(VAR_6=0; VAR_6<VAR_4; VAR_6++){
    VAR_5->cksum1 += ((u8 *)VAR_3)[VAR_6];
    VAR_5->cksum2 += VAR_5->cksum1;
  }
}
