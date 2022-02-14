
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_9__ {TYPE_1__* lpVtbl; } ;
struct TYPE_8__ {int (* Release ) (TYPE_2__*) ;int (* QueryInterface ) (TYPE_2__*,int *,void**) ;} ;
typedef TYPE_2__ ID3D11ShaderReflection ;
typedef int ID3D10ShaderReflection1 ;
typedef int ID3D10ShaderReflection ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (int*,int,int *,void**) ;
 int FUNC_2 (TYPE_2__*,int *,void**) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *,void**) ;
 int FUNC_5 (TYPE_2__*,int *,void**) ;
 int FUNC_6 (TYPE_2__*) ;
 int* VAR_7 ;

__attribute__((used)) static void FUNC_7(void)
{
    HRESULT VAR_8;
    ULONG VAR_9;
    ID3D11ShaderReflection *VAR_10, *VAR_11;
    ID3D10ShaderReflection *VAR_12;
    ID3D10ShaderReflection1 *VAR_13;

    VAR_8 = FUNC_1(VAR_7, VAR_7[6], &VAR_5, (void **)&VAR_10);
    FUNC_0(VAR_8 == VAR_6, "D3DReflect failed, got %x, expected %x\n", VAR_8, VAR_6);

    VAR_8 = VAR_10->lpVtbl->QueryInterface(VAR_10, &VAR_5, (void **)&VAR_11);
    FUNC_0(VAR_8 == VAR_6, "QueryInterface failed, got %x, expected %x\n", VAR_8, VAR_6);

    VAR_9 = VAR_11->lpVtbl->Release(VAR_11);
    FUNC_0(VAR_9 == 1, "Release failed %u\n", VAR_9);

    VAR_8 = VAR_10->lpVtbl->QueryInterface(VAR_10, &VAR_3, (void **)&VAR_12);
    FUNC_0(VAR_8 == VAR_2, "QueryInterface failed, got %x, expected %x\n", VAR_8, VAR_2);

    VAR_8 = VAR_10->lpVtbl->QueryInterface(VAR_10, &VAR_4, (void **)&VAR_13);
    FUNC_0(VAR_8 == VAR_2, "QueryInterface failed, got %x, expected %x\n", VAR_8, VAR_2);

    VAR_9 = VAR_10->lpVtbl->Release(VAR_10);
    FUNC_0(VAR_9 == 0, "Release failed %u\n", VAR_9);


    VAR_8 = FUNC_1(VAR_7, VAR_7[6], &VAR_3, (void **)&VAR_12);
    FUNC_0(VAR_8 == VAR_2, "D3DReflect failed, got %x, expected %x\n", VAR_8, VAR_2);

    VAR_8 = FUNC_1(VAR_7, VAR_7[6], &VAR_4, (void **)&VAR_13);
    FUNC_0(VAR_8 == VAR_2, "D3DReflect failed, got %x, expected %x\n", VAR_8, VAR_2);

    VAR_8 = FUNC_1(((void*)0), VAR_7[6], &VAR_4, (void **)&VAR_13);
    FUNC_0(VAR_8 == VAR_0, "D3DReflect failed, got %x, expected %x\n", VAR_8, VAR_0);

    VAR_8 = FUNC_1(((void*)0), VAR_7[6], &VAR_5, (void **)&VAR_10);
    FUNC_0(VAR_8 == VAR_0, "D3DReflect failed, got %x, expected %x\n", VAR_8, VAR_0);


    VAR_8 = FUNC_1(VAR_7, 31, &VAR_4, (void **)&VAR_13);
    FUNC_0(VAR_8 == VAR_0, "D3DReflect failed, got %x, expected %x\n", VAR_8, VAR_0);

    VAR_8 = FUNC_1(VAR_7, 32, &VAR_4, (void **)&VAR_13);
    FUNC_0(VAR_8 == VAR_1, "D3DReflect failed, got %x, expected %x\n", VAR_8, VAR_1);

    VAR_8 = FUNC_1(VAR_7, VAR_7[6]-1, &VAR_4, (void **)&VAR_13);
    FUNC_0(VAR_8 == VAR_1, "D3DReflect failed, got %x, expected %x\n", VAR_8, VAR_1);

    VAR_8 = FUNC_1(VAR_7, 31, &VAR_5, (void **)&VAR_10);
    FUNC_0(VAR_8 == VAR_0, "D3DReflect failed, got %x, expected %x\n", VAR_8, VAR_0);

    VAR_8 = FUNC_1(VAR_7, 32, &VAR_5, (void **)&VAR_10);
    FUNC_0(VAR_8 == VAR_1, "D3DReflect failed, got %x, expected %x\n", VAR_8, VAR_1);

    VAR_8 = FUNC_1(VAR_7, VAR_7[6]-1, &VAR_5, (void **)&VAR_10);
    FUNC_0(VAR_8 == VAR_1, "D3DReflect failed, got %x, expected %x\n", VAR_8, VAR_1);
}
