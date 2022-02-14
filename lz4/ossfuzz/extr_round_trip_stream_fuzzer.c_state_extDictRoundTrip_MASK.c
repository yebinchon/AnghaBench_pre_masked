
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
struct TYPE_11__ {TYPE_2__ compressed; TYPE_1__ data; int cstream; int seed; } ;
typedef TYPE_3__ state_t ;
struct TYPE_12__ {char* buf; } ;
typedef TYPE_4__ cursor_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int const) ;
 int FUNC_2 (int ,char const*,char*,int const,int const,int ) ;
 TYPE_4__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (TYPE_3__*,char*,int const) ;

__attribute__((used)) static void FUNC_7(state_t* VAR_0)
{
    int VAR_1 = 0;
    cursor_t VAR_2 = FUNC_3(VAR_0->data.size);
    FUNC_5(VAR_2, VAR_0->data.buf, VAR_0->data.size);
    while (VAR_0->data.pos != VAR_0->data.size) {
        char const* VAR_3 = (VAR_1++ & 1) ? VAR_0->data.buf : VAR_2;
        char const* VAR_4 = VAR_3 + VAR_0->data.pos;
        char* VAR_5 = VAR_0->compressed.buf + VAR_0->compressed.pos;
        int const VAR_6 = VAR_0->data.size - VAR_0->data.pos;
        int const VAR_7 = FUNC_1(&VAR_0->seed, 0, VAR_6);
        int const VAR_8 = VAR_0->compressed.size - VAR_0->compressed.pos;
        int const VAR_9 = FUNC_2(VAR_0->cstream, VAR_4, VAR_5,
                                                     VAR_7, VAR_8, 0);
        FUNC_0(VAR_9 > 0);
        VAR_0->data.pos += VAR_7;
        VAR_0->compressed.pos += VAR_9;
        FUNC_6(VAR_0, VAR_5, VAR_9);
    }
    FUNC_4(VAR_2);
}
