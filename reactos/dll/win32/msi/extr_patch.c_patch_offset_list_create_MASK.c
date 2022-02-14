
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch_offset_list {int min; scalar_t__ max; scalar_t__ count; int patches; int files; } ;


 int FUNC_0 (int *) ;
 struct patch_offset_list* FUNC_1 (int) ;

__attribute__((used)) static struct patch_offset_list *FUNC_2( void )
{
    struct patch_offset_list *VAR_0 = FUNC_1( sizeof(struct patch_offset_list) );
    FUNC_0( &VAR_0->files );
    FUNC_0( &VAR_0->patches );
    VAR_0->count = VAR_0->max = 0;
    VAR_0->min = 999999;
    return VAR_0;
}
