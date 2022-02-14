
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*,unsigned char const*,size_t) ;
 int FUNC_1 (unsigned char const**,size_t*,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_2(const unsigned char *VAR_0, size_t VAR_1,
                      const unsigned char *VAR_2, size_t VAR_3,
                      unsigned int VAR_4)
{
    FUNC_1(&VAR_0, &VAR_1, VAR_3, VAR_4);
    if (VAR_1 != VAR_3)
        return 0;
    return !FUNC_0(VAR_0, VAR_2, VAR_1);
}
