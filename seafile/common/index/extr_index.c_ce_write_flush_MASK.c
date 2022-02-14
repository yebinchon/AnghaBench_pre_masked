
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int write_buffer_len; int write_buffer; int context; } ;
typedef TYPE_1__ WriteIndexInfo ;


 int FUNC_0 (int ,int ,unsigned int) ;
 unsigned int FUNC_1 (int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(WriteIndexInfo *VAR_0, int VAR_1)
{
    unsigned int VAR_2 = VAR_0->write_buffer_len;
    if (VAR_2) {
        FUNC_0(VAR_0->context, VAR_0->write_buffer, VAR_2);
        if (FUNC_1(VAR_1, VAR_0->write_buffer, VAR_2) != VAR_2)
            return -1;
        VAR_0->write_buffer_len = 0;
    }
    return 0;
}
