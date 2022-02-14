
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n; int * z; } ;
struct TYPE_5__ {int iCksumBuf; int cksum1; int cksum0; TYPE_1__ buf; } ;
typedef TYPE_2__ LogWriter ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int *,int *) ;

__attribute__((used)) static void FUNC_2(LogWriter *VAR_0, int VAR_1){
  FUNC_0( (VAR_0->iCksumBuf % 8)==0 );
  FUNC_0( VAR_0->iCksumBuf<=VAR_1 );
  FUNC_0( (VAR_1 % 8)==0 || VAR_1==VAR_0->buf.n );
  if( VAR_1>VAR_0->iCksumBuf ){
    FUNC_1(
        &VAR_0->buf.z[VAR_0->iCksumBuf], VAR_1-VAR_0->iCksumBuf,
        &VAR_0->cksum0, &VAR_0->cksum1
    );
  }
  VAR_0->iCksumBuf = VAR_1;
}
