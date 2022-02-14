
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ,int ,int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void)
{
    int VAR_3 = VAR_1;

    if (!FUNC_1(VAR_3, VAR_0, VAR_2, 1, 0))
        FUNC_0("Passed file descriptor is not a "
                             "listening TCP socket");

    return FUNC_2(VAR_3);
}
