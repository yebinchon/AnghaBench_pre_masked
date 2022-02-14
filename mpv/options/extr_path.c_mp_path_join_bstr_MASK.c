
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int len; char* start; } ;


 int FUNC_0 (struct bstr) ;
 char* FUNC_1 (void*,struct bstr) ;
 char* FUNC_2 (void*,char*,int ,char*,int ) ;

char *FUNC_3(void *VAR_0, struct bstr VAR_1, struct bstr VAR_2)
{
    bool VAR_3;
    if (VAR_1 == 0)
        return FUNC_1(VAR_0, VAR_2);
    if (VAR_2 == 0)
        return FUNC_1(VAR_0, VAR_1);





    VAR_3 = VAR_2[0] == '/';

    if (VAR_3)
        return FUNC_1(VAR_0, VAR_2);

    bool VAR_4;
    int VAR_5 = VAR_1[VAR_1 - 1];




    VAR_4 = VAR_5 == '/';


    return FUNC_2(VAR_0, "%.*s%s%.*s", FUNC_0(VAR_1),
                           VAR_4 ? "" : "/", FUNC_0(VAR_2));
}
