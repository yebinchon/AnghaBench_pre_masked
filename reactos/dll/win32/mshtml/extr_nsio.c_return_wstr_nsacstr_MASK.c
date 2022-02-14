
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsACString ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ,int const*,int,char*,int,int *,int *) ;
 int FUNC_2 (int const*,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static nsresult FUNC_6(nsACString *VAR_3, const WCHAR *VAR_4, int VAR_5)
{
    char *VAR_6;
    int VAR_7;

    FUNC_0("returning %s\n", FUNC_2(VAR_4, VAR_5));

    if(!*VAR_4) {
        FUNC_5(VAR_3, "");
        return VAR_2;
    }

    VAR_7 = FUNC_1(VAR_0, 0, VAR_4, VAR_5, ((void*)0), 0, ((void*)0), ((void*)0));
    VAR_6 = FUNC_3(VAR_7+1);
    if(!VAR_6)
        return VAR_1;

    FUNC_1(VAR_0, 0, VAR_4, VAR_5, VAR_6, VAR_7, ((void*)0), ((void*)0));
    VAR_6[VAR_7] = 0;

    FUNC_5(VAR_3, VAR_6);
    FUNC_4(VAR_6);
    return VAR_2;
}
