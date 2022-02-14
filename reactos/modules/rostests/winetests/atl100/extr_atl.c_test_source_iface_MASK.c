
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IID ;
typedef int HRESULT ;


 int FUNC_0 (int *,int *,int *,unsigned short*,unsigned short*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,char*,unsigned short,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void)
{
    unsigned short VAR_12, VAR_13;
    IID VAR_14, VAR_15;
    HRESULT VAR_16;

    VAR_11 = VAR_9;

    VAR_12 = VAR_13 = 0xdead;
    VAR_16 = FUNC_0((IUnknown*)&VAR_4, &VAR_14, &VAR_15, &VAR_12, &VAR_13);
    FUNC_2(VAR_16 == VAR_8, "AtlGetObjectSourceInterface failed: %08x\n", VAR_16);
    FUNC_2(FUNC_1(&VAR_14, &VAR_7), "libid = %s\n", FUNC_3(&VAR_14));
    FUNC_2(FUNC_1(&VAR_15, &VAR_2), "iid = %s\n", FUNC_3(&VAR_15));
    FUNC_2(VAR_12 == 4 && VAR_13 == 0, "ver = %d.%d\n", VAR_12, VAR_13);

    VAR_11 = VAR_5;
    VAR_10 = VAR_0;

    VAR_12 = VAR_13 = 0xdead;
    VAR_16 = FUNC_0((IUnknown*)&VAR_4, &VAR_14, &VAR_15, &VAR_12, &VAR_13);
    FUNC_2(VAR_16 == VAR_8, "AtlGetObjectSourceInterface failed: %08x\n", VAR_16);
    FUNC_2(FUNC_1(&VAR_14, &VAR_7), "libid = %s\n", FUNC_3(&VAR_14));
    FUNC_2(FUNC_1(&VAR_15, &VAR_3), "iid = %s\n", FUNC_3(&VAR_15));
    FUNC_2(VAR_12 == 4 && VAR_13 == 0, "ver = %d.%d\n", VAR_12, VAR_13);

    VAR_10 = VAR_1;

    VAR_12 = VAR_13 = 0xdead;
    VAR_16 = FUNC_0((IUnknown*)&VAR_4, &VAR_14, &VAR_15, &VAR_12, &VAR_13);
    FUNC_2(VAR_16 == VAR_8, "AtlGetObjectSourceInterface failed: %08x\n", VAR_16);
    FUNC_2(FUNC_1(&VAR_14, &VAR_7), "libid = %s\n", FUNC_3(&VAR_14));
    FUNC_2(FUNC_1(&VAR_15, &VAR_6), "iid = %s\n", FUNC_3(&VAR_15));
    FUNC_2(VAR_12 == 4 && VAR_13 == 0, "ver = %d.%d\n", VAR_12, VAR_13);
}
