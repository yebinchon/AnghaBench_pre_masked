
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int len; } ;


 int FUNC_0 (struct bstr,int,int) ;
 scalar_t__ FUNC_1 (int ,struct bstr) ;

int FUNC_2(struct bstr VAR_0, struct bstr VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0.len; VAR_2++)
        if (FUNC_1(FUNC_0(VAR_0, VAR_2, VAR_0.len), VAR_1))
            return VAR_2;
    return -1;
}
