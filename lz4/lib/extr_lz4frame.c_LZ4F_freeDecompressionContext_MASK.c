
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* tmpOutBuffer; struct TYPE_4__* tmpIn; scalar_t__ dStage; } ;
typedef scalar_t__ LZ4F_errorCode_t ;
typedef TYPE_1__ LZ4F_dctx ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

LZ4F_errorCode_t FUNC_1(LZ4F_dctx* VAR_1)
{
    LZ4F_errorCode_t VAR_2 = VAR_0;
    if (VAR_1 != ((void*)0)) {
      VAR_2 = (LZ4F_errorCode_t)VAR_1->dStage;
      FUNC_0(VAR_1->tmpIn);
      FUNC_0(VAR_1->tmpOutBuffer);
      FUNC_0(VAR_1);
    }
    return VAR_2;
}
