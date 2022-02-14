
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {scalar_t__ len; } ;


 scalar_t__ FUNC_0 (struct bstr,char*) ;
 struct bstr FUNC_1 (struct bstr,int ,scalar_t__) ;

struct bstr FUNC_2(struct bstr VAR_0)
{
    if (FUNC_0(VAR_0, "\r\n")) {
        VAR_0 = FUNC_1(VAR_0, 0, VAR_0.len - 2);
    } else if (FUNC_0(VAR_0, "\n")) {
        VAR_0 = FUNC_1(VAR_0, 0, VAR_0.len - 1);
    }
    return VAR_0;
}
