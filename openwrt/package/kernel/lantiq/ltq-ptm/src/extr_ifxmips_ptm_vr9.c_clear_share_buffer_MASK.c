
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int * FUNC_2 (int ) ;
 unsigned int VAR_4 ;

__attribute__((used)) static inline void FUNC_3(void)
{
    volatile u32 *VAR_5;
    unsigned int VAR_6;

    VAR_5 = FUNC_1(0);
    for ( VAR_6 = 0; VAR_6 < VAR_0 + VAR_1 + VAR_2 + VAR_3; VAR_6++ )
        FUNC_0(0, VAR_5++);

    VAR_5 = FUNC_2(0);
    for ( VAR_6 = 0; VAR_6 < VAR_4; VAR_6++ )
        FUNC_0(0, VAR_5++);
}
