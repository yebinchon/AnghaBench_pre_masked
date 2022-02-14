
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transform_desc {struct transform_desc* upgrade_code; struct transform_desc* version_to; struct transform_desc* version_from; struct transform_desc* product_code_to; struct transform_desc* product_code_from; } ;


 int FUNC_0 (struct transform_desc*) ;

__attribute__((used)) static void FUNC_1( struct transform_desc *VAR_0 )
{
    FUNC_0( VAR_0->product_code_from );
    FUNC_0( VAR_0->product_code_to );
    FUNC_0( VAR_0->version_from );
    FUNC_0( VAR_0->version_to );
    FUNC_0( VAR_0->upgrade_code );
    FUNC_0( VAR_0 );
}
