
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned int) ;

int FUNC_2(unsigned char *VAR_3, int VAR_4,
                         const unsigned char *VAR_5, int VAR_6)
{
    if (VAR_6 > VAR_4) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_6 < VAR_4) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    FUNC_1(VAR_3, VAR_5, (unsigned int)VAR_6);
    return 1;
}
