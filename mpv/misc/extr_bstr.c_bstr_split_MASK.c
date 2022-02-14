
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int len; int * start; } ;


 struct bstr FUNC_0 (struct bstr,int) ;
 struct bstr FUNC_1 (struct bstr,int ,int) ;
 int FUNC_2 (struct bstr,char const*) ;
 int FUNC_3 (char const*,int ) ;

struct bstr FUNC_4(struct bstr VAR_0, const char *VAR_1, struct bstr *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0.len; VAR_3++)
        if (!FUNC_3(VAR_1, VAR_0.start[VAR_3]))
            break;
    VAR_0 = FUNC_0(VAR_0, VAR_3);
    int VAR_4 = FUNC_2(VAR_0, VAR_1);
    if (VAR_2) {
        *VAR_2 = FUNC_0(VAR_0, VAR_4);
    }
    return FUNC_1(VAR_0, 0, VAR_4);
}
