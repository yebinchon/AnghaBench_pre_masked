
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct constant {scalar_t__ const regnum; TYPE_1__* value; } ;
struct bytecode_buffer {int dummy; } ;
struct TYPE_2__ {scalar_t__ const d; } ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct bytecode_buffer*,scalar_t__ const) ;

__attribute__((used)) static void FUNC_2(struct constant **VAR_4, int VAR_5, DWORD VAR_6, DWORD VAR_7, struct bytecode_buffer *VAR_8, BOOL VAR_9) {
    int VAR_10;
    DWORD VAR_11 = VAR_6;
    const DWORD VAR_12 = (1u << 31) | FUNC_0( VAR_7, 0 ) | VAR_3;

    if(VAR_9) {
        if(VAR_6 == VAR_0)
            VAR_11 |= 2 << VAR_1;
        else
            VAR_11 |= 5 << VAR_1;
    }

    for(VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {

        FUNC_1(VAR_8, VAR_11);

        FUNC_1(VAR_8, VAR_12 | (VAR_4[VAR_10]->regnum & VAR_2));
        FUNC_1(VAR_8, VAR_4[VAR_10]->value[0].d);
        if(VAR_6 != VAR_0) {
            FUNC_1(VAR_8, VAR_4[VAR_10]->value[1].d);
            FUNC_1(VAR_8, VAR_4[VAR_10]->value[2].d);
            FUNC_1(VAR_8, VAR_4[VAR_10]->value[3].d);
        }
    }
}
