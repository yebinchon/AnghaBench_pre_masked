
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gsize ;
struct TYPE_3__ {unsigned int write_buffer_len; scalar_t__ write_buffer; int context; } ;
typedef TYPE_1__ WriteIndexInfo ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int*) ;
 int FUNC_1 (int ,scalar_t__,unsigned int) ;
 unsigned int FUNC_2 (int,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_3(WriteIndexInfo *VAR_1, int VAR_2)
{
    unsigned int VAR_3 = VAR_1->write_buffer_len;
    gsize VAR_4 = 20;

    if (VAR_3) {
        VAR_1->write_buffer_len = 0;
        FUNC_1(VAR_1->context, VAR_1->write_buffer, VAR_3);
    }


    if (VAR_3 + 20 > VAR_0) {
        if (FUNC_2(VAR_2, VAR_1->write_buffer, VAR_3) != VAR_3)
            return -1;
        VAR_3 = 0;
    }


    FUNC_0 (VAR_1->context, VAR_1->write_buffer + VAR_3, &VAR_4);
    VAR_3 += 20;
    return (FUNC_2(VAR_2, VAR_1->write_buffer, VAR_3) != VAR_3) ? -1 : 0;
}
