
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* buf; int pos; int size; } ;
struct TYPE_6__ {scalar_t__ pos; scalar_t__ size; char* buf; } ;
struct TYPE_8__ {TYPE_2__ compressed; TYPE_1__ data; int cstreamHC; int seed; } ;
typedef TYPE_3__ state_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int const) ;
 int FUNC_2 (int ,char const*,char*,int const,int const) ;
 int FUNC_3 (TYPE_3__*,char*,int const) ;

__attribute__((used)) static void FUNC_4(state_t* VAR_0)
{
    while (VAR_0->data.pos != VAR_0->data.size) {
        char const* VAR_1 = VAR_0->data.buf + VAR_0->data.pos;
        char* VAR_2 = VAR_0->compressed.buf + VAR_0->compressed.pos;
        int const VAR_3 = VAR_0->data.size - VAR_0->data.pos;
        int const VAR_4 = FUNC_1(&VAR_0->seed, 0, VAR_3);
        int const VAR_5 = VAR_0->compressed.size - VAR_0->compressed.pos;
        int const VAR_6 = FUNC_2(VAR_0->cstreamHC, VAR_1, VAR_2,
                                                   VAR_4, VAR_5);
        FUNC_0(VAR_6 > 0);
        VAR_0->data.pos += VAR_4;
        VAR_0->compressed.pos += VAR_6;
        FUNC_3(VAR_0, VAR_2, VAR_6);
    }
}
