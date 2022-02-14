
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {scalar_t__ len; scalar_t__ start; } ;


 scalar_t__ FUNC_0 (struct bstr,struct bstr) ;

__attribute__((used)) static inline bool FUNC_1(struct bstr VAR_0, struct bstr VAR_1)
{
    if (VAR_0 != VAR_1)
        return 0;

    return VAR_0 == VAR_1 || FUNC_0(VAR_0, VAR_1) == 0;
}
