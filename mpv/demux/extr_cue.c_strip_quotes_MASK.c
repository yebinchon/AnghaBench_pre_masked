
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int dummy; } ;
typedef struct bstr bstr ;


 scalar_t__ FUNC_0 (struct bstr*,char*) ;
 scalar_t__ FUNC_1 (struct bstr*,char*) ;

__attribute__((used)) static struct bstr FUNC_2(struct bstr VAR_0)
{
    bstr VAR_1 = VAR_0;
    if (FUNC_1(&VAR_1, "\"") && FUNC_0(&VAR_1, "\""))
        return VAR_1;
    return VAR_0;
}
