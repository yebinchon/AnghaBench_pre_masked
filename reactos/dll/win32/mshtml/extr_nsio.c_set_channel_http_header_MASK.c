
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list {int dummy; } ;
typedef int nsresult ;
typedef int nsACString ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int const*,char const**) ;
 int FUNC_4 (struct list*,int *,int ,int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static nsresult FUNC_6(struct list *VAR_2, const nsACString *VAR_3,
        const nsACString *VAR_4)
{
    const char *VAR_5, *VAR_6;
    WCHAR *VAR_7, *VAR_8;
    HRESULT VAR_9;

    FUNC_3(VAR_3, &VAR_5);
    VAR_7 = FUNC_2(VAR_5);
    if(!VAR_7)
        return VAR_0;

    FUNC_3(VAR_4, &VAR_6);
    VAR_8 = FUNC_2(VAR_6);
    if(!VAR_8) {
        FUNC_1(VAR_7);
        return VAR_0;
    }

    VAR_9 = FUNC_4(VAR_2, VAR_7, FUNC_5(VAR_7), VAR_8, FUNC_5(VAR_8));

    FUNC_1(VAR_7);
    FUNC_1(VAR_8);
    return FUNC_0(VAR_9) ? VAR_1 : VAR_0;
}
