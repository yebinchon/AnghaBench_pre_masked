
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int malloc; char* buf; size_t bufSize; size_t bufSizeMax; char* bufLim; int fd; int timeoutLen; int requireEOLN; char* bufPtr; } ;
typedef TYPE_1__ SReadlineInfo ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,int ,size_t) ;

int
FUNC_2(SReadlineInfo *VAR_0, int VAR_1, char *VAR_2, size_t VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_2 == ((void*)0)) {
  if (VAR_3 < 512)
   VAR_3 = 512;
  VAR_2 = (char *) FUNC_0(VAR_3);
  if (VAR_2 == ((void*)0))
   return (-1);
  VAR_0->malloc = 1;
 } else {
  VAR_0->malloc = 0;
 }
 FUNC_1(VAR_2, 0, VAR_3);
 VAR_0->buf = VAR_2;
 VAR_0->bufSize = VAR_3;
 VAR_0->bufSizeMax = VAR_3;
 VAR_0->bufLim = VAR_0->buf + VAR_3;
 VAR_0->fd = VAR_1;
 VAR_0->timeoutLen = VAR_4;
 VAR_0->requireEOLN = VAR_5;





 VAR_0->bufPtr = VAR_0->bufLim;
 return (0);
}
