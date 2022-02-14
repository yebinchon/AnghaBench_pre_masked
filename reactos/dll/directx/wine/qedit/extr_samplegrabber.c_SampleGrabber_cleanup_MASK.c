
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pbFormat; } ;
struct TYPE_9__ {scalar_t__ pGraph; } ;
struct TYPE_10__ {TYPE_2__ filterInfo; } ;
struct TYPE_11__ {scalar_t__ seekthru_unk; int bufferData; TYPE_1__ mtype; scalar_t__ grabberIface; scalar_t__ memOutput; scalar_t__ allocator; TYPE_3__ filter; } ;
typedef TYPE_4__ SG_Impl ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,TYPE_4__*) ;
 int FUNC_6 (char*,TYPE_4__*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(SG_Impl *VAR_0)
{
    FUNC_5("(%p)\n", VAR_0);
    if (VAR_0->filter.filterInfo.pGraph)
        FUNC_6("(%p) still joined to filter graph %p\n", VAR_0, VAR_0->filter.filterInfo.pGraph);
    if (VAR_0->allocator)
        FUNC_1(VAR_0->allocator);
    if (VAR_0->memOutput)
        FUNC_2(VAR_0->memOutput);
    if (VAR_0->grabberIface)
        FUNC_3(VAR_0->grabberIface);
    FUNC_0(VAR_0->mtype.pbFormat);
    FUNC_0(VAR_0->bufferData);
    if(VAR_0->seekthru_unk)
        FUNC_4(VAR_0->seekthru_unk);
}
