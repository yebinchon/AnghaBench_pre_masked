
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;
typedef int BIO ;


 long FUNC_0 (int *,char**) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,unsigned char*,long) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,unsigned int*) ;
 int FUNC_4 (int *,unsigned int*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static int FUNC_5(BIO *VAR_5)
{
    PACKET VAR_6;
    long VAR_7;
    unsigned char *VAR_8;
    unsigned int VAR_9;

    VAR_7 = FUNC_0(VAR_5, (char **)&VAR_8);
    if (!FUNC_1(&VAR_6, VAR_8, VAR_7))
        return 0;


    if (!FUNC_3(&VAR_6, &VAR_9) || VAR_9 != VAR_3)
        return 0;

    if (!FUNC_4(&VAR_6, &VAR_9) || VAR_9 != VAR_0)
        return 0;

    if (!FUNC_2(&VAR_6, VAR_1 - 3))
        return 0;


    if (!FUNC_3(&VAR_6, &VAR_9) || VAR_9 != VAR_2)
        return 0;


    if (!FUNC_4(&VAR_6, &VAR_9) || VAR_9 != 0x0002)
        return 0;


    if (!FUNC_3(&VAR_6, &VAR_9) || VAR_9 != VAR_4)
        return 0;
    if (!FUNC_4(&VAR_6, &VAR_9) || VAR_9 != VAR_0)
        return 0;


    if (!FUNC_4(&VAR_6, &VAR_9) || VAR_9 != 0x0001)
        return 0;







    return 1;
}
