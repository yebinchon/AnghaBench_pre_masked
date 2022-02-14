
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;


 int FUNC_0 (int *,unsigned char const*,size_t) ;
 unsigned char* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned int*) ;
 int FUNC_4 (int *,unsigned long*) ;
 size_t FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(const unsigned char *VAR_0,
                                     size_t VAR_1,
                                     unsigned int VAR_2,
                                     const unsigned char **VAR_3,
                                     size_t *VAR_4)
{
    PACKET VAR_5, VAR_6;

    *VAR_3 = ((void*)0);
    *VAR_4 = 0;
    if (VAR_0 == ((void*)0) || VAR_1 == 0)
        return -1;

    if (!FUNC_0(&VAR_5, VAR_0, VAR_1))
        return -1;

    for (;;) {
        unsigned int VAR_7 = 0;
        unsigned long VAR_8 = 0;


        if (FUNC_5(&VAR_5) == 0)
            return 0;

        if (!FUNC_4(&VAR_5, &VAR_8)
                || !FUNC_3(&VAR_5, &VAR_7)
                || !FUNC_2(&VAR_5, &VAR_6))
            return -1;

        if (VAR_7 == VAR_2) {
            *VAR_3 = FUNC_1(&VAR_6);
            *VAR_4 = FUNC_5(&VAR_6);;
            return 1;
        }
    }

}
