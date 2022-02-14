
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,unsigned int*,int) ;
 long FUNC_4 (int ,unsigned int*,int,int ) ;

__attribute__((used)) static unsigned int FUNC_5(void)
{
    unsigned int VAR_4;
    int VAR_5 = FUNC_2("/dev/urandom", VAR_1 | VAR_2);
    if (VAR_5 < 0) {
        VAR_5 = FUNC_2("/dev/random", VAR_1 | VAR_2);
        if (VAR_5 < 0)
            return VAR_0;
    }
    if (FUNC_3(VAR_5, &VAR_4, sizeof(VAR_4)) != sizeof(VAR_4))
        VAR_4 = VAR_0;
    FUNC_0(VAR_5);

    return VAR_4;
}
