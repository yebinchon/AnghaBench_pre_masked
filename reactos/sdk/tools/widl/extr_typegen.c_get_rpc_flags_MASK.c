
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int attr_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int const*,int ) ;

__attribute__((used)) static unsigned int FUNC_1( const attr_list_t *VAR_5 )
{
    unsigned int VAR_6 = 0;

    if (FUNC_0( VAR_5, VAR_2 )) VAR_6 |= 0x0001;
    if (FUNC_0( VAR_5, VAR_1 )) VAR_6 |= 0x0002;
    if (FUNC_0( VAR_5, VAR_3 )) VAR_6 |= 0x0004;
    if (FUNC_0( VAR_5, VAR_4 )) VAR_6 |= 0x0100;
    if (FUNC_0( VAR_5, VAR_0 )) VAR_6 |= 0x4000;
    return VAR_6;
}
