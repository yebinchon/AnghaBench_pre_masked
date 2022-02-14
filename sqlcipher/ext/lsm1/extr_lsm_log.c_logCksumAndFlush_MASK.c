
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int pFS; TYPE_2__* pLogWriter; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_8__ {size_t n; int * z; } ;
struct TYPE_7__ {int iOff; int iCksumBuf; TYPE_3__ buf; int cksum1; int cksum0; } ;
typedef TYPE_2__ LogWriter ;


 int FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (int ,int,TYPE_3__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(lsm_db *VAR_0){
  int VAR_1;
  LogWriter *VAR_2 = VAR_0->pLogWriter;


  FUNC_0(VAR_2, VAR_2->buf.n);
  FUNC_2((u8 *)&VAR_2->buf.z[VAR_2->buf.n], VAR_2->cksum0);
  VAR_2->buf.n += 4;
  FUNC_2((u8 *)&VAR_2->buf.z[VAR_2->buf.n], VAR_2->cksum1);
  VAR_2->buf.n += 4;


  VAR_1 = FUNC_1(VAR_0->pFS, VAR_2->iOff, &VAR_2->buf);
  VAR_2->iOff += VAR_2->buf.n;
  VAR_2->iCksumBuf = VAR_2->buf.n = 0;

  return VAR_1;
}
