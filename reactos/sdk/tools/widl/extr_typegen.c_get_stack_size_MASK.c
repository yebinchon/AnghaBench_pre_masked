
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int attrs; } ;
typedef TYPE_1__ var_t ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;






 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_3( const var_t *VAR_2, int *VAR_3 )
{
    unsigned int VAR_4;
    int VAR_5;

    switch (FUNC_2( VAR_2->type, VAR_2->attrs, VAR_0 ))
    {
    case 133:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
        VAR_4 = FUNC_1( VAR_2->type );
        VAR_5 = (VAR_1 < 8 || VAR_4 <= VAR_1);
        break;
    default:
        VAR_5 = 0;
        break;
    }
    if (!VAR_5) VAR_4 = VAR_1;
    if (VAR_3) *VAR_3 = VAR_5;
    return FUNC_0( VAR_4, VAR_1 );
}
