
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_type {int scope_entry; int name; } ;
struct hlsl_scope {int types; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hlsl_scope*,int ,int ) ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static BOOL FUNC_2(struct hlsl_scope *VAR_2, struct hlsl_type *VAR_3)
{
    if (FUNC_0(VAR_2, VAR_3->name, VAR_0))
        return VAR_0;

    FUNC_1(&VAR_2->types, VAR_3->name, &VAR_3->scope_entry);
    return VAR_1;
}
