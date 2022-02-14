
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int const uint32_t ;
struct RARProgramCode {int dummy; } ;
struct RARFilter {int globaldatalen; size_t blockstartpos; int blocklength; void* initialregisters; void* globaldata; struct RARProgramCode* prog; } ;


 int const VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (void*,int const*,int const) ;

__attribute__((used)) static struct RARFilter *FUNC_2(struct RARProgramCode *VAR_1, const uint8_t *VAR_2, uint32_t VAR_3, uint32_t VAR_4[8], size_t VAR_5, uint32_t VAR_6)
{
    struct RARFilter *VAR_7;

    VAR_7 = FUNC_0(1, sizeof(*VAR_7));
    if (!VAR_7)
        return ((void*)0);
    VAR_7->prog = VAR_1;
    VAR_7->globaldatalen = VAR_3 > VAR_0 ? VAR_3 : VAR_0;
    VAR_7->globaldata = FUNC_0(1, VAR_7->globaldatalen);
    if (!VAR_7->globaldata)
        return ((void*)0);
    if (VAR_2)
        FUNC_1(VAR_7->globaldata, VAR_2, VAR_3);
    if (VAR_4)
        FUNC_1(VAR_7->initialregisters, VAR_4, sizeof(VAR_7->initialregisters));
    VAR_7->blockstartpos = VAR_5;
    VAR_7->blocklength = VAR_6;

    return VAR_7;
}
