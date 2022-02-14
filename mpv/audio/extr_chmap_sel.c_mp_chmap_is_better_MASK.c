
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {scalar_t__ num; } ;


 int FUNC_0 (struct mp_chmap*,struct mp_chmap*) ;
 int FUNC_1 (struct mp_chmap*,struct mp_chmap*) ;
 scalar_t__ FUNC_2 (struct mp_chmap*,struct mp_chmap*) ;
 int FUNC_3 (struct mp_chmap*) ;
 int FUNC_4 (struct mp_chmap*,struct mp_chmap*) ;

__attribute__((used)) static bool FUNC_5(struct mp_chmap *VAR_0, struct mp_chmap *VAR_1,
                               struct mp_chmap *VAR_2)
{

    if (!VAR_1->num)
        return 1;



    if (FUNC_2(VAR_0, VAR_1))
        return 0;
    if (FUNC_2(VAR_0, VAR_2))
        return 1;


    bool VAR_3 = FUNC_4(VAR_0, VAR_1);
    bool VAR_4 = FUNC_4(VAR_0, VAR_2);
    if (VAR_3 && !VAR_4)
        return 0;
    if (!VAR_3 && VAR_4)
        return 1;

    int VAR_5 = FUNC_1(VAR_0, VAR_1);
    int VAR_6 = FUNC_1(VAR_0, VAR_2);


    if (VAR_6 != VAR_5)
        return VAR_6 < VAR_5;

    struct mp_chmap VAR_7 = *VAR_1, VAR_8 = *VAR_2;
    FUNC_3(&VAR_7);
    FUNC_3(&VAR_8);




    bool VAR_9 = !VAR_6 && VAR_8.num <= VAR_7.num;
    bool VAR_10 = !VAR_5 && VAR_7.num <= VAR_8.num;
    if (VAR_9 != VAR_10)
        return VAR_9;

    int VAR_11 = FUNC_0(VAR_0, VAR_1);
    int VAR_12 = FUNC_0(VAR_0, VAR_2);


    if (VAR_12 != VAR_11)
        return VAR_12 < VAR_11;





    if (VAR_8.num != VAR_7.num)
        return VAR_8.num < VAR_7.num;


    return VAR_2->num < VAR_1->num;
}
