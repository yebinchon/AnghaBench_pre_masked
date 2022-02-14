
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int D3DPOOL ;






 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static inline unsigned int FUNC_0(D3DPOOL VAR_5, unsigned int VAR_6)
{
    switch (VAR_5)
    {
        case 131:
            if (VAR_6 & VAR_0)
                return VAR_2 | VAR_3 | VAR_4;
            return VAR_2;
        case 130:
            return VAR_2 | VAR_1
                    | VAR_3 | VAR_4;
        case 128:
        case 129:
            return VAR_1 | VAR_3 | VAR_4;
        default:
            return 0;
    }
}
