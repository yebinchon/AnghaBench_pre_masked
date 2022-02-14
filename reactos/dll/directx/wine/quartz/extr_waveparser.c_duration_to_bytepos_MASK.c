
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nAvgBytesPerSec; int nBlockAlign; int StartOfFile; } ;
typedef TYPE_1__ WAVEParserImpl ;
typedef int LONGLONG ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static LONGLONG FUNC_2(WAVEParserImpl *VAR_0, LONGLONG VAR_1)
{
    LONGLONG VAR_2;

    VAR_2 = VAR_0->nAvgBytesPerSec;
    VAR_2 *= VAR_1;
    VAR_2 /= 10000000;
    VAR_2 -= VAR_2 % VAR_0->nBlockAlign;
    VAR_2 += FUNC_0(VAR_0->StartOfFile);

    return FUNC_1(VAR_2);
}
