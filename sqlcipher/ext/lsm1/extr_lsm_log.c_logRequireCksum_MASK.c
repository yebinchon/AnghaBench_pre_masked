
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iBuf; scalar_t__ iCksumBuf; } ;
typedef TYPE_1__ LogReader ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(LogReader *VAR_1, int VAR_2){
  return ((VAR_1->iBuf + VAR_2 - VAR_1->iCksumBuf) > VAR_0);
}
