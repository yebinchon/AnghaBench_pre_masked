
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(unsigned char *VAR_4)
{
    int VAR_5;
    uint32_t VAR_6;


    FUNC_2((uint32_t *) VAR_4, VAR_0);

    VAR_6 = VAR_1;
    for (VAR_5 = 8; VAR_5 < VAR_3 - 4; VAR_5 += 4)
 VAR_6 -= FUNC_0((uint32_t *) (VAR_4 + VAR_5));

    FUNC_2((uint32_t *) (VAR_4 + 4), VAR_6);
    FUNC_2((uint32_t *) (VAR_4 + VAR_3 - 4), VAR_2);

    FUNC_1(VAR_4 + VAR_3, VAR_4, VAR_3);
}
