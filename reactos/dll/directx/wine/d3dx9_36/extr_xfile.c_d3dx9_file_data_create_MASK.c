
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* lpVtbl; } ;
struct d3dx9_file_data {int ref; unsigned int nb_children; TYPE_1__ ID3DXFileData_iface; TYPE_1__** children; int dxfile_data; int reference; } ;
struct TYPE_8__ {int (* Release ) (TYPE_1__*) ;} ;
typedef int IDirectXFileObject ;
typedef int IDirectXFileDataReference ;
typedef TYPE_1__ ID3DXFileData ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_3 ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,struct d3dx9_file_data*) ;
 TYPE_1__** FUNC_5 (int ,int ,TYPE_1__**,int) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int ,int **) ;
 scalar_t__ FUNC_8 (int *,int *,void**) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (char*,int,...) ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_13(IDirectXFileObject *VAR_9, ID3DXFileData **VAR_10)
{
    struct d3dx9_file_data *VAR_11;
    IDirectXFileObject *VAR_12;
    unsigned int VAR_13 = 0;
    HRESULT VAR_14;

    FUNC_11("dxfile_object %p, ret_iface %p.\n", *VAR_9, VAR_10);

    *VAR_10 = ((void*)0);

    VAR_11 = FUNC_3(FUNC_2(), VAR_3, sizeof(*VAR_11));
    if (!VAR_11)
        return VAR_2;

    VAR_11->ID3DXFileData_iface.lpVtbl = &VAR_8;
    VAR_11->ref = 1;

    VAR_14 = FUNC_8(VAR_9, &VAR_4, (void **)&VAR_11->dxfile_data);
    if (FUNC_0(VAR_14))
    {
        IDirectXFileDataReference *VAR_15;

        VAR_14 = FUNC_8(VAR_9, &VAR_5, (void **)&VAR_15);
        if (FUNC_10(VAR_14))
        {
            VAR_14 = FUNC_6(VAR_15, &VAR_11->dxfile_data);
            FUNC_9(VAR_15);
            if (FUNC_0(VAR_14))
            {
                FUNC_4(FUNC_2(), 0, VAR_11);
                return VAR_1;
            }
            VAR_11->reference = VAR_7;
        }
        else
        {
            FUNC_1("Don't know what to do with binary object\n");
            FUNC_4(FUNC_2(), 0, VAR_11);
            return VAR_1;
        }
    }

    while (FUNC_10(VAR_14 = FUNC_7(VAR_11->dxfile_data, &VAR_12)))
    {
        if (VAR_11->nb_children >= VAR_13)
        {
            ID3DXFileData **VAR_16;

            if (VAR_11->children)
            {
                VAR_13 *= 2;
                VAR_16 = FUNC_5(FUNC_2(), 0, VAR_11->children,
                        sizeof(*VAR_11->children) * VAR_13);
            }
            else
            {
                VAR_13 = 4;
                VAR_16 = FUNC_3(FUNC_2(), 0, sizeof(*VAR_11->children) * VAR_13);
            }
            if (!VAR_16)
            {
                VAR_14 = VAR_2;
                break;
            }
            VAR_11->children = VAR_16;
        }
        VAR_14 = FUNC_13(VAR_12, &VAR_11->children[VAR_11->nb_children]);
        FUNC_9(VAR_12);
        if (FUNC_0(VAR_14))
            break;
        VAR_11->nb_children++;
    }
    if (VAR_14 != VAR_0)
    {
        (&VAR_11->ID3DXFileData_iface)->lpVtbl->Release(&VAR_11->ID3DXFileData_iface);
        return VAR_14;
    }
    if (VAR_11->children)
    {
        ID3DXFileData **VAR_17;

        VAR_17 = FUNC_5(FUNC_2(), 0, VAR_11->children,
                sizeof(*VAR_11->children) * VAR_11->nb_children);
        if (VAR_17)
            VAR_11->children = VAR_17;
    }

    FUNC_11("Found %u children\n", VAR_11->nb_children);

    *VAR_10 = &VAR_11->ID3DXFileData_iface;

    return VAR_6;
}
