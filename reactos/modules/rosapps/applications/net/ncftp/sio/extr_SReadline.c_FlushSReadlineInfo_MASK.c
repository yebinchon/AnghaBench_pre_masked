
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bufLim; scalar_t__ bufPtr; scalar_t__ bufSizeMax; scalar_t__ buf; scalar_t__ bufSize; } ;
typedef TYPE_1__ SReadlineInfo ;


 int FUNC_0 (scalar_t__,int ,scalar_t__) ;

void
FUNC_1(SReadlineInfo *VAR_0)
{



 VAR_0->bufSize = VAR_0->bufSizeMax;
 FUNC_0(VAR_0->buf, 0, VAR_0->bufSize);
 VAR_0->bufLim = VAR_0->buf + VAR_0->bufSizeMax;





 VAR_0->bufPtr = VAR_0->bufLim;
}
