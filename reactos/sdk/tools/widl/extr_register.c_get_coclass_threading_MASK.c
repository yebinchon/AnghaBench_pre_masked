
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int attrs; } ;
typedef TYPE_1__ type_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ) ;

__attribute__((used)) static const char *FUNC_1( const type_t *VAR_1 )
{
    static const char * const VAR_2[] =
    {
        ((void*)0),
        "Apartment",
        "Neutral",
        "Single",
        "Free",
        "Both",
    };
    return VAR_2[FUNC_0( VAR_1->attrs, VAR_0 )];
}
