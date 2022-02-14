
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*,size_t,unsigned char const*,size_t,unsigned int) ;
 unsigned char* FUNC_1 (unsigned char const*,size_t,unsigned int) ;
 int FUNC_2 (unsigned char const*,int,unsigned char const*,int,unsigned char const*,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_3(const unsigned char *VAR_0, size_t VAR_1,
                          const unsigned char *VAR_2, size_t VAR_3,
                          unsigned int VAR_4)
{
    const unsigned char *VAR_5 = ((void*)0);





    if (!(VAR_3 > 1 && VAR_2[0] == '.'))
        VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_4);
    if (VAR_5 == ((void*)0))
        return FUNC_0(VAR_0, VAR_1,
                            VAR_2, VAR_3, VAR_4);
    return FUNC_2(VAR_0, VAR_5 - VAR_0,
                          VAR_5 + 1, (VAR_0 + VAR_1) - VAR_5 - 1,
                          VAR_2, VAR_3, VAR_4);
}
