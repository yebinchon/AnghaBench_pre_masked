
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dxbc {int count; TYPE_1__* sections; } ;
struct TYPE_2__ {int data_size; int tag; int data; } ;
typedef int ID3DBlob ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int,int **) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,struct dxbc*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char**,int) ;
 int FUNC_7 (char**,int) ;

HRESULT FUNC_8(struct dxbc *VAR_2, ID3DBlob **VAR_3)
{
    DWORD VAR_4 = 32, VAR_5 = VAR_4 + 4 * VAR_2->count;
    ID3DBlob *VAR_6;
    HRESULT VAR_7;
    char *VAR_8;
    unsigned int VAR_9;

    FUNC_3("dxbc %p, blob %p.\n", VAR_2, VAR_3);

    for (VAR_9 = 0; VAR_9 < VAR_2->count; ++VAR_9)
    {
        VAR_4 += 12 + VAR_2->sections[VAR_9].data_size;
    }

    VAR_7 = FUNC_0(VAR_4, &VAR_6);
    if (FUNC_1(VAR_7))
    {
        FUNC_4("Failed to create blob\n");
        return VAR_7;
    }

    VAR_8 = FUNC_2(VAR_6);

    FUNC_6(&VAR_8, VAR_1);


    FUNC_7(&VAR_8, 0);
    FUNC_7(&VAR_8, 0);
    FUNC_7(&VAR_8, 0);
    FUNC_7(&VAR_8, 0);


    FUNC_7(&VAR_8, 1);


    FUNC_6(&VAR_8, VAR_4);


    FUNC_6(&VAR_8, VAR_2->count);


    for (VAR_9 = 0; VAR_9 < VAR_2->count; ++VAR_9)
    {
        FUNC_6(&VAR_8, VAR_5);
        VAR_5 += 8 + VAR_2->sections[VAR_9].data_size;
    }


    for (VAR_9 = 0; VAR_9 < VAR_2->count; ++VAR_9)
    {
        FUNC_6(&VAR_8, VAR_2->sections[VAR_9].tag);
        FUNC_6(&VAR_8, VAR_2->sections[VAR_9].data_size);
        FUNC_5(VAR_8, VAR_2->sections[VAR_9].data, VAR_2->sections[VAR_9].data_size);
        VAR_8 += VAR_2->sections[VAR_9].data_size;
    }

    FUNC_3("Created ID3DBlob %p\n", VAR_6);

    *VAR_3 = VAR_6;

    return VAR_0;
}
