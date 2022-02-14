
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int StartOfFile; int nAvgBytesPerSec; } ;
typedef TYPE_1__ WAVEParserImpl ;
typedef int LONGLONG ;


 int FUNC_0 (int) ;

__attribute__((used)) static LONGLONG FUNC_1(WAVEParserImpl *VAR_0, LONGLONG VAR_1)
{
    LONGLONG VAR_2 = FUNC_0(VAR_1 - VAR_0->StartOfFile);
    VAR_2 *= 10000000;
    VAR_2 /= VAR_0->nAvgBytesPerSec;

    return VAR_2;
}
