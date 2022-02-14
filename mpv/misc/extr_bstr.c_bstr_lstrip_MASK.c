
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {scalar_t__ len; int * start; } ;


 scalar_t__ FUNC_0 (int ) ;

struct bstr FUNC_1(struct bstr VAR_0)
{
    while (VAR_0.len && FUNC_0(*VAR_0.start)) {
        VAR_0.start++;
        VAR_0.len--;
    }
    return VAR_0;
}
