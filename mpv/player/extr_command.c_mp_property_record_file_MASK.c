
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_property {int dummy; } ;
struct MPOpts {char* record_file; } ;
struct MPContext {struct MPOpts* opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct MPContext*,struct m_property*,int,void*) ;
 int FUNC_3 (struct MPContext*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(void *VAR_3, struct m_property *VAR_4,
                                   int VAR_5, void *VAR_6)
{
    struct MPContext *VAR_7 = VAR_3;
    struct MPOpts *VAR_8 = VAR_7->opts;
    if (VAR_5 == VAR_2) {
        char *VAR_9 = *(char **)VAR_6;
        if (!FUNC_1(FUNC_0(VAR_9), FUNC_0(VAR_8->record_file))) {
            FUNC_4(VAR_8->record_file);
            VAR_8->record_file = FUNC_5(((void*)0), VAR_9);
            FUNC_3(VAR_7, 0);

            if (VAR_9 && !VAR_8->record_file)
                return VAR_0;
        }
        return VAR_1;
    }
    return FUNC_2(VAR_7, VAR_4, VAR_5, VAR_6);
}
