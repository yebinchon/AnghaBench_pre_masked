
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int dummy; } ;


 double VAR_0 ;
 scalar_t__ FUNC_0 (struct bstr*,char) ;
 double FUNC_1 (struct bstr*,int) ;

__attribute__((used)) static double FUNC_2(struct bstr *VAR_1)
{
    struct bstr VAR_2 = *VAR_1;
    bool VAR_3 = 1;
    double VAR_4 = FUNC_1(&VAR_2, 0);
    VAR_3 = FUNC_0(&VAR_2, ':') && VAR_3;
    double VAR_5 = FUNC_1(&VAR_2, 1);
    VAR_3 = FUNC_0(&VAR_2, ':') && VAR_3;
    double VAR_6 = FUNC_1(&VAR_2, 1);
    VAR_3 = VAR_3 && VAR_4 >= 0 && VAR_5 >= 0 && VAR_6 >= 0;
    return VAR_3 ? VAR_4 * 60.0 + VAR_5 + VAR_6 * VAR_0 : 0;
}
