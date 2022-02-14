
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_property {int dummy; } ;
struct MPContext {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct MPContext*,struct m_property*,int,void*) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (int,void*,double) ;
 int FUNC_3 (struct MPContext*,int ) ;
 int FUNC_4 (struct MPContext*) ;

__attribute__((used)) static int FUNC_5(void *VAR_5, struct m_property *VAR_6,
                               int VAR_7, void *VAR_8)
{
    struct MPContext *VAR_9 = VAR_5;
    if (VAR_7 == VAR_2) {
        double VAR_10;
        if (FUNC_0(VAR_9, VAR_6, VAR_1, &VAR_10) < 1)
            return VAR_0;

        return FUNC_2(VAR_7, VAR_8, VAR_10);
    }
    int VAR_11 = FUNC_0(VAR_9, VAR_6, VAR_7, VAR_8);
    if (VAR_11 > 0 && VAR_7 == VAR_3) {
        FUNC_4(VAR_9);

        FUNC_3(VAR_9, VAR_4);
        FUNC_1(VAR_9);
    }
    return VAR_11;
}
