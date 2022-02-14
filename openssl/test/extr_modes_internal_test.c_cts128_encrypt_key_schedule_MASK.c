
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AES_KEY ;


 int FUNC_0 (int ,int,int *) ;
 int VAR_0 ;

__attribute__((used)) static AES_KEY *FUNC_1(void)
{
    static int VAR_1 = 1;
    static AES_KEY VAR_2;

    if (VAR_1) {
        FUNC_0(VAR_0, 128, &VAR_2);
        VAR_1 = 0;
    }
    return &VAR_2;
}
