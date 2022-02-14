
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int write_buffer_len; scalar_t__ write_buffer; } ;
typedef TYPE_1__ WriteIndexInfo ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (scalar_t__,void*,unsigned int) ;

__attribute__((used)) static int FUNC_2(WriteIndexInfo *VAR_1, int VAR_2, void *VAR_3, unsigned int VAR_4)
{
    while (VAR_4) {
        unsigned int VAR_5 = VAR_1->write_buffer_len;
        unsigned int VAR_6 = VAR_0 - VAR_5;
        if (VAR_6 > VAR_4)
            VAR_6 = VAR_4;
        FUNC_1(VAR_1->write_buffer + VAR_5, VAR_3, VAR_6);
        VAR_5 += VAR_6;
        if (VAR_5 == VAR_0) {
            VAR_1->write_buffer_len = VAR_5;
            if (FUNC_0(VAR_1, VAR_2))
                return -1;
            VAR_5 = 0;
        }
        VAR_1->write_buffer_len = VAR_5;
        VAR_4 -= VAR_6;
        VAR_3 = (char *) VAR_3 + VAR_6;
    }
    return 0;
}
