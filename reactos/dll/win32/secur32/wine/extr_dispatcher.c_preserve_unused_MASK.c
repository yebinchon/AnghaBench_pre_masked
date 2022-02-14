
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int com_buf_offset; scalar_t__ com_buf; } ;
typedef int SECURITY_STATUS ;
typedef TYPE_1__* PNegoHelper ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static SECURITY_STATUS FUNC_2(PNegoHelper VAR_1, int VAR_2)
{
    FUNC_0("offset_len = %d\n", VAR_2);

    if(VAR_2 > 0)
    {
        FUNC_1(VAR_1->com_buf, VAR_1->com_buf + VAR_1->com_buf_offset,
                VAR_2);
        VAR_1->com_buf_offset = VAR_2;
    }
    else
    {
        VAR_1->com_buf_offset = 0;
    }

    FUNC_0("helper->com_buf_offset was set to: %d\n", VAR_1->com_buf_offset);
    return VAR_0;
}
