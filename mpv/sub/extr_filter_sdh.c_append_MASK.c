
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;
struct buffer {scalar_t__ pos; int length; char* string; } ;



__attribute__((used)) static inline int FUNC_0(struct sd *VAR_0, struct buffer *VAR_1, char VAR_2)
{
    if (VAR_1->pos >= 0 && VAR_1->pos < VAR_1->length) {
        VAR_1->string[VAR_1->pos++] = VAR_2;
    } else {

        if (VAR_2 == '\0')
            VAR_1->string[VAR_1->length - 1] = VAR_2;
    }
    return VAR_2;
}
