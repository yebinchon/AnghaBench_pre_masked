
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef void* ULONG ;
typedef void IUnknown ;
typedef int IOleContainer ;
typedef int IEnumUnknown ;
typedef void* HRESULT ;


 void* FUNC_0 (int *,int,void**,void**) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,int ,int **) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(IOleContainer *VAR_3)
{
    IEnumUnknown *VAR_4;
    IUnknown *VAR_5[100] = {(void*)0xdeadbeef};
    ULONG VAR_6;
    HRESULT VAR_7;

    VAR_4 = ((void*)0);
    VAR_7 = FUNC_2(VAR_3, VAR_0, &VAR_4);
    FUNC_3(VAR_7 == VAR_2, "EnumObjects failed: %08x\n", VAR_7);
    FUNC_3(VAR_4 != ((void*)0), "enum_unknown == NULL\n");

    VAR_6 = 0xdeadbeef;
    VAR_7 = FUNC_0(VAR_4, sizeof(VAR_5)/sizeof(*VAR_5), VAR_5, &VAR_6);
    FUNC_3(VAR_7 == VAR_1, "Next returned %08x\n", VAR_7);
    FUNC_3(!VAR_6, "fetched = %d\n", VAR_6);
    FUNC_3(VAR_5[0] == (void*)0xdeadbeef, "buf[0] = %p\n", VAR_5[0]);

    VAR_6 = 0xdeadbeef;
    VAR_7 = FUNC_0(VAR_4, 1, VAR_5, &VAR_6);
    FUNC_3(VAR_7 == VAR_1, "Next returned %08x\n", VAR_7);
    FUNC_3(!VAR_6, "fetched = %d\n", VAR_6);

    VAR_7 = FUNC_0(VAR_4, 1, VAR_5, ((void*)0));
    FUNC_3(VAR_7 == VAR_1, "Next returned %08x\n", VAR_7);

    FUNC_1(VAR_4);
}
