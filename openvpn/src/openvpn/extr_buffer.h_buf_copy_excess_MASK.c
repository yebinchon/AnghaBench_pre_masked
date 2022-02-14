
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int len; } ;


 int FUNC_0 (struct buffer*,int) ;
 int FUNC_1 (struct buffer*,struct buffer*) ;

__attribute__((used)) static inline bool
FUNC_2(struct buffer *VAR_0,
                struct buffer *VAR_1,
                int VAR_2)
{
    if (VAR_2 < 0)
    {
        return 0;
    }
    if (VAR_1->len > VAR_2)
    {
        struct buffer VAR_3 = *VAR_1;
        VAR_1->len = VAR_2;
        if (!FUNC_0(&VAR_3, VAR_2))
        {
            return 0;
        }
        return FUNC_1(VAR_0, &VAR_3);
    }
    else
    {
        return 1;
    }
}
