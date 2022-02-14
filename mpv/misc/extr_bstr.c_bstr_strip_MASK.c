
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int len; int * start; } ;


 struct bstr FUNC_0 (struct bstr) ;
 scalar_t__ FUNC_1 (int ) ;

struct bstr FUNC_2(struct bstr VAR_0)
{
    VAR_0 = FUNC_0(VAR_0);
    while (VAR_0.len && FUNC_1(VAR_0.start[VAR_0.len - 1]))
        VAR_0.len--;
    return VAR_0;
}
