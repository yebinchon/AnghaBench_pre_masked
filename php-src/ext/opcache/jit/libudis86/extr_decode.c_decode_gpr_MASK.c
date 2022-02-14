
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud {int dis_mode; int error; int pfx_rex; } ;
typedef enum ud_type { ____Placeholder_ud_type } ud_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum ud_type
FUNC_1(register struct ud* VAR_6, unsigned int VAR_7, unsigned char VAR_8)
{
  switch (VAR_7) {
    case 64:
        return VAR_4 + VAR_8;
    case 32:
        return VAR_3 + VAR_8;
    case 16:
        return VAR_2 + VAR_8;
    case 8:
        if (VAR_6->dis_mode == 64 && VAR_6->pfx_rex) {
            if (VAR_8 >= 4)
                return VAR_5 + (VAR_8-4);
            return VAR_1 + VAR_8;
        } else return VAR_1 + VAR_8;
    case 0:

        FUNC_0(VAR_6->error);
        return VAR_0;
    default:
        FUNC_0(!"invalid operand size");
        return VAR_0;
  }
}
