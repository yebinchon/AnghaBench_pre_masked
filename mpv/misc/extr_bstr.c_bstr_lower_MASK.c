
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int len; int * start; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct bstr VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0.len; VAR_1++)
        VAR_0.start[VAR_1] = FUNC_0(VAR_0.start[VAR_1]);
}
