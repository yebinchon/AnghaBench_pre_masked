
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {short compressionLevel; } ;
struct TYPE_6__ {TYPE_1__ internal_donotuse; } ;
typedef TYPE_2__ LZ4_streamHC_t ;


 int FUNC_0 (int,char*,TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(LZ4_streamHC_t* VAR_2, int VAR_3)
{
    FUNC_0(5, "LZ4_setCompressionLevel(%p, %d)", VAR_2, VAR_3);
    if (VAR_3 < 1) VAR_3 = VAR_0;
    if (VAR_3 > VAR_1) VAR_3 = VAR_1;
    VAR_2->internal_donotuse.compressionLevel = (short)VAR_3;
}
