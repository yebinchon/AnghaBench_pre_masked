
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ outMsgEnd; scalar_t__ outBuffer; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,void const*,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_1, size_t VAR_2, PGconn *VAR_3)
{

 if (FUNC_1(VAR_3->outMsgEnd + VAR_2, VAR_3))
  return VAR_0;

 FUNC_0(VAR_3->outBuffer + VAR_3->outMsgEnd, VAR_1, VAR_2);
 VAR_3->outMsgEnd += VAR_2;

 return 0;
}
