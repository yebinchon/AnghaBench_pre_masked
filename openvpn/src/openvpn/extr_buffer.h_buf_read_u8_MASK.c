
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*) ;
 int* FUNC_1 (struct buffer*) ;
 int FUNC_2 (struct buffer*,int) ;

__attribute__((used)) static inline int
FUNC_3(struct buffer *VAR_0)
{
    int VAR_1;
    if (FUNC_0(VAR_0) < 1)
    {
        return -1;
    }
    VAR_1 = *FUNC_1(VAR_0);
    FUNC_2(VAR_0, 1);
    return VAR_1;
}
