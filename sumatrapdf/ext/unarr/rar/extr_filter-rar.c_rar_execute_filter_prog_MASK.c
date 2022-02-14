
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct RARFilter {scalar_t__ globaldatalen; int * globaldata; TYPE_1__* prog; int initialregisters; } ;
struct TYPE_8__ {int * memory; } ;
struct TYPE_7__ {scalar_t__ staticdatalen; int prog; int * staticdata; } ;
typedef TYPE_2__ RARVirtualMachine ;


 int FUNC_0 (TYPE_2__*,int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,size_t) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static bool FUNC_7(struct RARFilter *VAR_4, RARVirtualMachine *VAR_5)
{
    uint32_t VAR_6;
    uint32_t VAR_7 = VAR_4->globaldatalen;
    if (VAR_7 > VAR_1)
        VAR_7 = VAR_1;
    FUNC_5(&VAR_5->memory[VAR_0], VAR_4->globaldata, VAR_7);
    if (VAR_4->prog->staticdata) {
        uint32_t VAR_8 = VAR_4->prog->staticdatalen;
        if (VAR_8 > VAR_3 - VAR_7)
            VAR_8 = VAR_3 - VAR_7;
        FUNC_5(&VAR_5->memory[VAR_2], VAR_4->prog->staticdata, VAR_8);
    }
    FUNC_1(VAR_5, VAR_4->initialregisters);

    if (!FUNC_0(VAR_5, VAR_4->prog->prog)) {
        FUNC_6("Error while executing program in RAR VM");
        return 0;
    }

    VAR_6 = FUNC_2(VAR_5, VAR_0 + 0x30);
    if (VAR_6 > VAR_3)
        VAR_6 = VAR_3;
    if (VAR_6 > 0) {
        uint32_t VAR_9 = VAR_1 + VAR_6;
        if (VAR_9 > VAR_4->globaldatalen) {
            uint8_t *VAR_10 = FUNC_4(VAR_9);
            if (!VAR_10)
                return 0;
            FUNC_3(VAR_4->globaldata);
            VAR_4->globaldata = VAR_10;
        }
        VAR_4->globaldatalen = VAR_9;
        FUNC_5(VAR_4->globaldata, &VAR_5->memory[VAR_0], VAR_4->globaldatalen);
    }
    else
        VAR_4->globaldatalen = 0;

    return 1;
}
