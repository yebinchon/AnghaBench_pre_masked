
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* buf; } ;
struct TYPE_7__ {int dstream; int cstreamHC; int level; TYPE_1__ data; } ;
typedef TYPE_2__ state_t ;
typedef int LZ4_streamHC_t ;


 int FUNC_0 (int ,int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,size_t const) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char const*,size_t const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 size_t FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(state_t* VAR_2)
{
    char const* VAR_3 = VAR_2->data.buf;
    size_t const VAR_4 = FUNC_7(VAR_2);
    LZ4_streamHC_t* VAR_5 = FUNC_1();
    FUNC_4(VAR_5, VAR_2->level);
    FUNC_3(VAR_5, VAR_3, VAR_4);
    FUNC_0(VAR_2->cstreamHC, VAR_5);
    FUNC_5(VAR_2->dstream, VAR_3, VAR_4);
    FUNC_6(VAR_2, VAR_1,
                          VAR_0);
    FUNC_2(VAR_5);
}
