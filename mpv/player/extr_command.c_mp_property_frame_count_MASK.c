
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_property {int dummy; } ;
typedef int MPContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,void*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, struct m_property *VAR_2,
                                   int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    int VAR_6 = FUNC_0(VAR_5);
    if (VAR_6 < 0)
        return VAR_0;

    return FUNC_1(VAR_3, VAR_4, VAR_6);
}
