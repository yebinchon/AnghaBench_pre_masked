
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char* buf; int pos; int size; } ;
struct TYPE_9__ {int size; char* buf; int pos; } ;
struct TYPE_11__ {TYPE_2__ compressed; TYPE_1__ data; int cstreamHC; int seed; } ;
typedef TYPE_3__ state_t ;
struct TYPE_12__ {char* buf; } ;
typedef TYPE_4__ cursor_t ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int const) ;
 int FUNC_3 (int ,char const*,char*,int const,int const) ;
 TYPE_4__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_3__*,char*,int const) ;

__attribute__((used)) static void FUNC_8(state_t* VAR_0)
{
    int VAR_1 = 0;
    cursor_t VAR_2 = FUNC_4(VAR_0->data.size);
    FUNC_0(2, "extDictHC");
    FUNC_6(VAR_2, VAR_0->data.buf, VAR_0->data.size);
    while (VAR_0->data.pos != VAR_0->data.size) {
        char const* VAR_3 = (VAR_1++ & 1) ? VAR_0->data.buf : VAR_2;
        char const* VAR_4 = VAR_3 + VAR_0->data.pos;
        char* VAR_5 = VAR_0->compressed.buf + VAR_0->compressed.pos;
        int const VAR_6 = VAR_0->data.size - VAR_0->data.pos;
        int const VAR_7 = FUNC_2(&VAR_0->seed, 0, VAR_6);
        int const VAR_8 = VAR_0->compressed.size - VAR_0->compressed.pos;
        int const VAR_9 = FUNC_3(VAR_0->cstreamHC, VAR_4, VAR_5,
                                                   VAR_7, VAR_8);
        FUNC_1(VAR_9 > 0);
        FUNC_0(2, "srcSize = %d", VAR_7);
        VAR_0->data.pos += VAR_7;
        VAR_0->compressed.pos += VAR_9;
        FUNC_7(VAR_0, VAR_5, VAR_9);
    }
    FUNC_5(VAR_2);
}
