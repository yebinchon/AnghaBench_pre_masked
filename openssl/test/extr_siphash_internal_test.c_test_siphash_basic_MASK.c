
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ SIPHASH ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(void)
{
    SIPHASH VAR_2 = { 0, };
    unsigned char VAR_3[VAR_0];
    unsigned char VAR_4[VAR_1];


    return FUNC_3(FUNC_2(&VAR_2, 4), 0)

           && FUNC_4(FUNC_2(&VAR_2, 8))
           && FUNC_4(FUNC_1(&VAR_2, VAR_3, 0, 0))
           && FUNC_4(FUNC_0(&VAR_2, VAR_4, 8))
           && FUNC_3(FUNC_0(&VAR_2, VAR_4, 16), 0)


           && FUNC_4(FUNC_2(&VAR_2, 16))
           && FUNC_4(FUNC_1(&VAR_2, VAR_3, 0, 0))
           && FUNC_3(FUNC_0(&VAR_2, VAR_4, 8), 0)
           && FUNC_4(FUNC_0(&VAR_2, VAR_4, 16))


           && FUNC_4(FUNC_2(&VAR_2, 0))
           && FUNC_4(FUNC_1(&VAR_2, VAR_3, 0, 0))
           && FUNC_3(FUNC_0(&VAR_2, VAR_4, 8), 0)
           && FUNC_4(FUNC_0(&VAR_2, VAR_4, 16));
}
