
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int const* attrs; } ;
typedef TYPE_1__ type_t ;
typedef int attr_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ FUNC_0 (int const*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static unsigned char FUNC_2( const type_t *VAR_6, const attr_list_t *VAR_7,
                                              const type_t *VAR_8 )
{
    unsigned char VAR_9 = 0;

    if (FUNC_0(VAR_6->attrs, VAR_3)) VAR_9 |= VAR_5;

    if (FUNC_1(VAR_8) &&
        !FUNC_0( VAR_8->attrs, VAR_0 ) &&
        !FUNC_0( VAR_7, VAR_0 ))
        VAR_9 |= 0x80;

    if (FUNC_0(VAR_7, VAR_1))
    {
        VAR_9 |= 0x40;
        if (!FUNC_0(VAR_7, VAR_2)) VAR_9 |= VAR_4;
    }
    if (FUNC_0(VAR_7, VAR_2)) VAR_9 |= 0x20;

    return VAR_9;
}
