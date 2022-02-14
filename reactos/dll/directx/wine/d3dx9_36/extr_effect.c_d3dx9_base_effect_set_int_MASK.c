
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {int rows; int columns; scalar_t__ type; scalar_t__ class; scalar_t__ data; int element_count; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef int INT ;
typedef int HRESULT ;
typedef int FLOAT ;
typedef scalar_t__ DWORD ;
typedef int D3DXHANDLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct d3dx_parameter* FUNC_2 (struct d3dx9_base_effect*,int ) ;
 int FUNC_3 (struct d3dx_parameter*) ;
 int FUNC_4 (scalar_t__*,scalar_t__,int*,int ) ;

__attribute__((used)) static HRESULT FUNC_5(struct d3dx9_base_effect *VAR_7, D3DXHANDLE VAR_8, INT VAR_9)
{
    struct d3dx_parameter *VAR_10 = FUNC_2(VAR_7, VAR_8);

    if (VAR_10 && !VAR_10->element_count)
    {
        if (VAR_10->rows == 1 && VAR_10->columns == 1)
        {
            DWORD VAR_11;

            FUNC_4(&VAR_11, VAR_10->type, &VAR_9, VAR_4);
            if (VAR_11 != *(DWORD *)VAR_10->data)
                FUNC_3(VAR_10);
             *(DWORD *)VAR_10->data = VAR_11;
            return VAR_5;
        }




        if (VAR_10->type == VAR_3 &&
            ((VAR_10->class == VAR_2 && VAR_10->columns != 2) ||
            (VAR_10->class == VAR_1 && VAR_10->rows != 2 && VAR_10->columns == 1)))
        {
            FUNC_0("Vector fixup\n");

            *(FLOAT *)VAR_10->data = ((VAR_9 & 0xff0000) >> 16) * VAR_6;
            ((FLOAT *)VAR_10->data)[1] = ((VAR_9 & 0xff00) >> 8) * VAR_6;
            ((FLOAT *)VAR_10->data)[2] = (VAR_9 & 0xff) * VAR_6;
            if (VAR_10->rows * VAR_10->columns > 3)
            {
                ((FLOAT *)VAR_10->data)[3] = ((VAR_9 & 0xff000000) >> 24) * VAR_6;
            }
            FUNC_3(VAR_10);
            return VAR_5;
        }
    }

    FUNC_1("Parameter not found.\n");

    return VAR_0;
}
