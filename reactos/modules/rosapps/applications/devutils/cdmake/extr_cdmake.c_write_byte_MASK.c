
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t count; scalar_t__ offset; int sector; int * buffer; int * file; } ;
typedef int BYTE ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(BYTE VAR_3)
{
    if (VAR_2.file != ((void*)0))
    {
        VAR_2.buffer[VAR_2.count] = VAR_3;
        if (++VAR_2.count == VAR_0)
            FUNC_0();
    }
    if (++VAR_2.offset == VAR_1)
    {
        VAR_2.sector++;
        VAR_2.offset = 0;
    }
}
