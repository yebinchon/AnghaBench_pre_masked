
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int * FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (int ) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned int,unsigned int,int ) ;

__attribute__((used)) static inline int FUNC_5(int VAR_1, u32 *VAR_2, unsigned int VAR_3, u32 *VAR_4, unsigned int VAR_5)
{
    unsigned int VAR_6, VAR_7;
    volatile u32 *VAR_8;

    if ( VAR_2 == 0 || ((unsigned long)VAR_2 & 0x03) != 0
        || VAR_4 == 0 || ((unsigned long)VAR_4 & 0x03) != 0 )
        return -1;

    VAR_6 = VAR_1 ? 0xF0 : 0x0F;
    if ( VAR_3 <= FUNC_1(0) )
        VAR_7 = VAR_1 ? (3 << 6): (2 << 2);
    else
        VAR_7 = 0x00;
    FUNC_4(VAR_6, VAR_7, VAR_0);


    VAR_8 = FUNC_0(VAR_1, 0);
    while ( VAR_3-- > 0 )
        FUNC_3(*VAR_2++, VAR_8++);


    VAR_8 = FUNC_2(VAR_1, 0);
    while ( VAR_5-- > 0 )
        FUNC_3(*VAR_4++, VAR_8++);

    return 0;
}
