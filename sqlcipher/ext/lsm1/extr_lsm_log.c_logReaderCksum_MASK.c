
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {int * z; } ;
struct TYPE_6__ {int iBuf; int iCksumBuf; scalar_t__ cksum0; scalar_t__ cksum1; TYPE_1__ buf; } ;
typedef int LsmString ;
typedef TYPE_2__ LogReader ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (TYPE_2__*,int *,int,int **,int*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(LogReader *VAR_1, LsmString *VAR_2, int *VAR_3, int *VAR_4){
  if( *VAR_4==VAR_0 ){
    u8 *VAR_5 = 0;
    u32 VAR_6, VAR_7;
    int VAR_8 = VAR_1->iBuf - VAR_1->iCksumBuf;


    FUNC_0( VAR_8>=0 );
    FUNC_1(&VAR_1->buf.z[VAR_1->iCksumBuf], VAR_8, &VAR_1->cksum0, &VAR_1->cksum1);
    VAR_1->iCksumBuf = VAR_1->iBuf + 8;
    FUNC_2(VAR_1, VAR_2, 8, &VAR_5, VAR_4);
    FUNC_0( VAR_5 || *VAR_4 );


    if( VAR_5 ){
      VAR_6 = FUNC_3(VAR_5);
      VAR_7 = FUNC_3(&VAR_5[4]);
      *VAR_3 = (VAR_6!=VAR_1->cksum0 || VAR_7!=VAR_1->cksum1);
      VAR_1->iCksumBuf = VAR_1->iBuf;
    }
  }
}
