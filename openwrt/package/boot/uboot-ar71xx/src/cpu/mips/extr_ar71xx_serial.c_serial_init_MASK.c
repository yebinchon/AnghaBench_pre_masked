
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(void)
{
    u32 VAR_10;
    u32 VAR_11 = 100000000;

    FUNC_2 (0, 0, &VAR_11);
    VAR_10 = VAR_11/(16 * VAR_3);



    FUNC_3(VAR_1, FUNC_0(VAR_0 + VAR_4));





    FUNC_1(VAR_9, 0x80);


    FUNC_1(VAR_6, (VAR_10 & 0xff));
    FUNC_1(VAR_7, ((VAR_10 >> 8) & 0xff));


    FUNC_1(VAR_9, 0x00);


    FUNC_1(VAR_5, 0x3);

    FUNC_1(VAR_8, 0);

 return 0;
}
