
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {scalar_t__ len; int start; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(struct bstr VAR_0, struct bstr VAR_1)
{
    if (VAR_0.len < VAR_1.len)
        return 0;
    return !FUNC_0(VAR_0.start, VAR_1.start, VAR_1.len);
}
