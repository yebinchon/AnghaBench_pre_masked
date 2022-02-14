
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(void * VAR_3, size_t VAR_4)
{
    unsigned char * VAR_5;
    size_t VAR_6;
    int VAR_7 = FUNC_0();

    VAR_5 = (unsigned char *)VAR_3;
    for(VAR_6 = 0; VAR_6 < VAR_4; ++ VAR_6)
    {
        if(VAR_6 % VAR_2 == 0)
        VAR_7 = FUNC_0();
        VAR_5[VAR_6] = (unsigned char)(VAR_7 & VAR_1);
        VAR_7 >>= VAR_0;
    }
}
