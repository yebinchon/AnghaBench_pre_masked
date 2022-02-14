
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_option {int * type; int member_0; } ;
struct MPContext {int log; } ;


 int FUNC_0 (struct MPContext*,char*,char const*,char*,char*,int) ;
 int VAR_0 ;


 scalar_t__ FUNC_1 (int,void*) ;
 char* FUNC_2 (struct m_option*,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (char const*,int,void*,struct MPContext*) ;
 int FUNC_5 (char*) ;

int FUNC_6(const char *VAR_3, int VAR_4, void *VAR_5,
                   struct MPContext *VAR_6)
{
    int VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6);
    if (FUNC_3(VAR_6->log, VAR_0) && FUNC_1(VAR_4, VAR_5)) {
        struct m_option VAR_8 = {0};
        void *VAR_9 = VAR_5;
        switch (VAR_4) {
        case 129:
            VAR_8.type = &VAR_1;
            break;
        case 128:
            VAR_8.type = &VAR_2;
            VAR_9 = &VAR_5;
            break;
        }
        char *VAR_10 = VAR_8.type ? FUNC_2(&VAR_8, VAR_9) : ((void*)0);
        FUNC_0(VAR_6, "Set property: %s%s%s -> %d\n",
                   VAR_3, VAR_10 ? "=" : "", VAR_10 ? VAR_10 : "", VAR_7);
        FUNC_5(VAR_10);
    }
    return VAR_7;
}
