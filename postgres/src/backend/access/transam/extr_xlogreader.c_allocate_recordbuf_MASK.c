
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {char* readRecordBuf; int readRecordBufSize; } ;
typedef TYPE_1__ XLogReaderState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bool
FUNC_4(XLogReaderState *VAR_3, uint32 VAR_4)
{
 uint32 VAR_5 = VAR_4;

 VAR_5 += VAR_2 - (VAR_5 % VAR_2);
 VAR_5 = FUNC_1(VAR_5, 5 * FUNC_1(VAR_0, VAR_2));
 if (!FUNC_0(VAR_5))
  return 0;



 if (VAR_3->readRecordBuf)
  FUNC_3(VAR_3->readRecordBuf);
 VAR_3->readRecordBuf =
  (char *) FUNC_2(VAR_5, VAR_1);
 if (VAR_3->readRecordBuf == ((void*)0))
 {
  VAR_3->readRecordBufSize = 0;
  return 0;
 }
 VAR_3->readRecordBufSize = VAR_5;
 return 1;
}
