
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void mp_log_buffer_entry ;
struct mp_log_buffer {int ring; } ;
typedef int ptr ;


 int FUNC_0 () ;
 int FUNC_1 (int ,unsigned char*,int) ;

struct mp_log_buffer_entry *FUNC_2(struct mp_log_buffer *VAR_0)
{
    void *VAR_1 = ((void*)0);
    int VAR_2 = FUNC_1(VAR_0->ring, (unsigned char *)&VAR_1, sizeof(VAR_1));
    if (VAR_2 == 0)
        return ((void*)0);
    if (VAR_2 != sizeof(VAR_1))
        FUNC_0();
    return VAR_1;
}
