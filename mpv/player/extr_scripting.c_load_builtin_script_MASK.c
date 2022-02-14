
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*,char*) ;
 int FUNC_1 (struct MPContext*,char*,int ,int ,int *) ;
 int FUNC_2 (struct MPContext*,char const*) ;
 char* FUNC_3 (void*,char const*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct MPContext *VAR_1, bool VAR_2,
                                const char *VAR_3)
{
    void *VAR_4 = FUNC_5(((void*)0));


    char *VAR_5 = FUNC_3(VAR_4, VAR_3);
    if (VAR_2 != FUNC_0(VAR_1, VAR_5)) {
        if (VAR_2) {
            FUNC_2(VAR_1, VAR_3);
        } else {




            FUNC_1(VAR_1, VAR_5, 0, VAR_0, ((void*)0));
        }
    }
    FUNC_4(VAR_4);
}
