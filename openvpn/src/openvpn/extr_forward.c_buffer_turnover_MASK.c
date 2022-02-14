
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct buffer {int const* data; } ;


 int FUNC_0 (struct buffer*,struct buffer*) ;

__attribute__((used)) static inline void
FUNC_1(const uint8_t *VAR_0, struct buffer *VAR_1, struct buffer *VAR_2, struct buffer *VAR_3)
{
    if (VAR_0 == VAR_2->data && VAR_2->data != VAR_3->data)
    {
        FUNC_0(VAR_3, VAR_2);
        *VAR_1 = *VAR_3;
    }
    else
    {
        *VAR_1 = *VAR_2;
    }
}
