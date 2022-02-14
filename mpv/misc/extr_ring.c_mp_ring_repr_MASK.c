
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_ring {int dummy; } ;


 int FUNC_0 (struct mp_ring*) ;
 int FUNC_1 (struct mp_ring*) ;
 int FUNC_2 (struct mp_ring*) ;
 char* FUNC_3 (void*,char*,int ,int ,int ) ;

char *FUNC_4(struct mp_ring *VAR_0, void *VAR_1)
{
    return FUNC_3(
        VAR_1,
        "Ringbuffer { .size = %dB, .buffered = %dB, .available = %dB }",
        FUNC_2(VAR_0),
        FUNC_1(VAR_0),
        FUNC_0(VAR_0));
}
