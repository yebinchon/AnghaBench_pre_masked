
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct buffer {int capacity; int * data; } ;


 int FUNC_0 (struct buffer) ;
 int * FUNC_1 (struct buffer*,int) ;
 int * FUNC_2 (struct buffer*,int) ;

struct buffer
FUNC_3(struct buffer *VAR_0, int VAR_1, bool VAR_2)
{
    struct buffer VAR_3;
    uint8_t *VAR_4;

    FUNC_0(VAR_3);
    VAR_4 = VAR_2 ? FUNC_1(VAR_0, VAR_1) : FUNC_2(VAR_0, VAR_1);
    if (VAR_4)
    {
        VAR_3.capacity = VAR_1;
        VAR_3.data = VAR_4;
    }
    return VAR_3;
}
