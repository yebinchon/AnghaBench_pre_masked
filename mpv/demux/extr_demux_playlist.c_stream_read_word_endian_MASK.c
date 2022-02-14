
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
typedef int stream_t ;


 unsigned int FUNC_0 (int *) ;

__attribute__((used)) static uint16_t FUNC_1(stream_t *VAR_0, bool VAR_1)
{
    unsigned int VAR_2 = FUNC_0(VAR_0);
    VAR_2 = (VAR_2 << 8) | FUNC_0(VAR_0);
    if (!VAR_1)
        VAR_2 = ((VAR_2 >> 8) & 0xFF) | (VAR_2 << 8);
    return VAR_2;
}
