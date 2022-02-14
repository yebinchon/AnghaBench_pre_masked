
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct d3dx_parameter {int bytes; int flags; int member_count; int element_count; int columns; int rows; int type; int class; int semantic; int name; } ;
struct d3dx9_base_effect {int dummy; } ;
struct TYPE_5__ {int annotation_count; } ;
struct TYPE_4__ {int Bytes; int Flags; int StructMembers; int Annotations; int Elements; int Columns; int Rows; int Type; int Class; int Semantic; int Name; } ;
typedef int HRESULT ;
typedef TYPE_1__ D3DXPARAMETER_DESC ;
typedef int D3DXHANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct d3dx_parameter* FUNC_1 (struct d3dx9_base_effect*,int ) ;
 scalar_t__ FUNC_2 (struct d3dx_parameter*) ;
 TYPE_2__* FUNC_3 (struct d3dx_parameter*) ;

__attribute__((used)) static HRESULT FUNC_4(struct d3dx9_base_effect *VAR_2,
        D3DXHANDLE VAR_3, D3DXPARAMETER_DESC *VAR_4)
{
    struct d3dx_parameter *VAR_5 = FUNC_1(VAR_2, VAR_3);

    if (!VAR_4 || !VAR_5)
    {
        FUNC_0("Invalid argument specified.\n");
        return VAR_0;
    }

    VAR_4->Name = VAR_5->name;
    VAR_4->Semantic = VAR_5->semantic;
    VAR_4->Class = VAR_5->class;
    VAR_4->Type = VAR_5->type;
    VAR_4->Rows = VAR_5->rows;
    VAR_4->Columns = VAR_5->columns;
    VAR_4->Elements = VAR_5->element_count;
    VAR_4->Annotations = FUNC_2(VAR_5)
            ? FUNC_3(VAR_5)->annotation_count : 0;
    VAR_4->StructMembers = VAR_5->member_count;
    VAR_4->Flags = VAR_5->flags;
    VAR_4->Bytes = VAR_5->bytes;

    return VAR_1;
}
