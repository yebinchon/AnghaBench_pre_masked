
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {scalar_t__ len; char* start; } ;


 struct bstr FUNC_0 (struct bstr) ;
 scalar_t__ FUNC_1 (struct bstr,struct bstr*,int) ;

__attribute__((used)) static int FUNC_2(struct bstr *VAR_0, bool VAR_1)
{
    *VAR_0 = FUNC_0(*VAR_0);
    if (VAR_0->len && VAR_0->start[0] == '-')
        return -1;
    struct bstr VAR_2 = *VAR_0;
    int VAR_3 = (int)FUNC_1(VAR_2, &VAR_2, 10);
    if (VAR_0->len == VAR_2.len || (VAR_1 && VAR_0->len - VAR_2.len > 2))
        return -1;
    *VAR_0 = VAR_2;
    return VAR_3;
}
