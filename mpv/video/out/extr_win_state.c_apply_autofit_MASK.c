
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_geometry {int wh_valid; } ;


 int FUNC_0 (int*,int*,int*,int*,int,int,struct m_geometry*) ;

__attribute__((used)) static void FUNC_1(int *VAR_0, int *VAR_1, int VAR_2, int VAR_3,
                          struct m_geometry *VAR_4, bool VAR_5, bool VAR_6)
{
    if (!VAR_4->wh_valid)
        return;

    int VAR_7 = 0;
    int VAR_8 = *VAR_0, VAR_9 = *VAR_1;
    FUNC_0(&VAR_7, &VAR_7, &VAR_8, &VAR_9, VAR_2, VAR_3, VAR_4);

    if (!VAR_5 && *VAR_0 <= VAR_8 && *VAR_1 <= VAR_9)
        return;
    if (!VAR_6 && *VAR_0 >= VAR_8 && *VAR_1 >= VAR_9)
        return;



    double VAR_10 = (double)*VAR_0 / *VAR_1;
    double VAR_11 = (double)VAR_8 / VAR_9;
    if ((VAR_11 <= VAR_10) == VAR_6) {
        *VAR_0 = VAR_8;
        *VAR_1 = VAR_8 / VAR_10;
    } else {
        *VAR_0 = VAR_9 * VAR_10;
        *VAR_1 = VAR_9;
    }
}
