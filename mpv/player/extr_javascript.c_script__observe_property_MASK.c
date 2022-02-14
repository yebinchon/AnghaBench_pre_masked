
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpv_format ;
typedef int js_State ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 size_t FUNC_0 (int *,int,char*,char const**,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(js_State *VAR_5)
{
    const char *VAR_6[] = {"none", "native", "bool", "string", "number", ((void*)0)};
    const mpv_format VAR_7[] = {VAR_3, VAR_2, VAR_1,
                             VAR_4, VAR_0};

    mpv_format VAR_8 = VAR_7[FUNC_0(VAR_5, 3, "none", VAR_6, "observe type")];
    int VAR_9 = FUNC_4(FUNC_1(VAR_5), FUNC_2(VAR_5, 1),
                                             FUNC_3(VAR_5, 2),
                                             VAR_8);
    FUNC_5(VAR_5, VAR_9);
}
