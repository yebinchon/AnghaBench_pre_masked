
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UI ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,int,int ,int ,int *,int ,int ,int *) ;

int FUNC_3(UI *VAR_3, const char *VAR_4)
{
    char *VAR_5 = ((void*)0);

    if (VAR_4 != ((void*)0)) {
        VAR_5 = FUNC_0(VAR_4);
        if (VAR_5 == ((void*)0)) {
            FUNC_1(VAR_2, VAR_0);
            return -1;
        }
    }
    return FUNC_2(VAR_3, VAR_5, 1, VAR_1, 0, ((void*)0),
                                   0, 0, ((void*)0));
}
