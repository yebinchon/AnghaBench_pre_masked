
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int len; int start; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

struct bstr FUNC_2(struct bstr VAR_0, int VAR_1, int VAR_2)
{
    if (VAR_1 < 0)
        VAR_1 += VAR_0.len;
    if (VAR_2 < 0)
        VAR_2 += VAR_0.len;
    VAR_2 = FUNC_1(VAR_2, VAR_0.len);
    VAR_1 = FUNC_0(VAR_1, 0);
    VAR_2 = FUNC_0(VAR_2, VAR_1);
    VAR_0.start += VAR_1;
    VAR_0.len = VAR_2 - VAR_1;
    return VAR_0;
}
