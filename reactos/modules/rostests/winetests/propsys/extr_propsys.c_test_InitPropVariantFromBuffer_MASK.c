
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_6__ {int cElems; int pElems; } ;
struct TYPE_7__ {TYPE_1__ caub; } ;
struct TYPE_8__ {int vt; TYPE_2__ u; } ;
typedef TYPE_3__ PROPVARIANT ;
typedef int LONG ;
typedef int HRESULT ;


 int FUNC_0 (char const*,int,TYPE_3__*) ;
 int FUNC_1 (char const*,int,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,void**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int*) ;
 int FUNC_6 (int ,int,int*) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char const*,void*,int) ;
 int FUNC_12 (int,char*,...) ;

__attribute__((used)) static void FUNC_13(void)
{
    static const char VAR_4[] = "test";
    PROPVARIANT VAR_5;
    VARIANT VAR_6;
    HRESULT VAR_7;
    void *VAR_8;
    LONG VAR_9;

    VAR_7 = FUNC_0(((void*)0), 0, &VAR_5);
    FUNC_12(VAR_7 == VAR_0, "InitPropVariantFromBuffer returned %x\n", VAR_7);
    FUNC_12(VAR_5.vt == (VAR_3|VAR_2), "propvar.vt = %d\n", VAR_5.vt);
    FUNC_12(VAR_5.u.caub.cElems == 0, "cElems = %d\n", VAR_5.u.caub.cElems == 0);
    FUNC_2(&VAR_5);

    VAR_7 = FUNC_0(VAR_4, 4, &VAR_5);
    FUNC_12(VAR_7 == VAR_0, "InitPropVariantFromBuffer returned %x\n", VAR_7);
    FUNC_12(VAR_5.vt == (VAR_3|VAR_2), "propvar.vt = %d\n", VAR_5.vt);
    FUNC_12(VAR_5.u.caub.cElems == 4, "cElems = %d\n", VAR_5.u.caub.cElems == 0);
    FUNC_12(!FUNC_11(VAR_5.u.caub.pElems, VAR_4, 4), "Data inside array is incorrect\n");
    FUNC_2(&VAR_5);

    VAR_7 = FUNC_1(((void*)0), 0, &VAR_6);
    FUNC_12(VAR_7 == VAR_0, "InitVariantFromBuffer returned %x\n", VAR_7);
    FUNC_12(FUNC_9(&VAR_6) == (VAR_1|VAR_2), "V_VT(&var) = %d\n", FUNC_9(&VAR_6));
    VAR_9 = FUNC_4(FUNC_8(&VAR_6));
    FUNC_12(VAR_9 == 1, "SafeArrayGetDim returned %d\n", VAR_9);
    VAR_7 = FUNC_5(FUNC_8(&VAR_6), 1, &VAR_9);
    FUNC_12(VAR_7 == VAR_0, "SafeArrayGetLBound returned %x\n", VAR_7);
    FUNC_12(VAR_9 == 0, "LBound = %d\n", VAR_9);
    VAR_7 = FUNC_6(FUNC_8(&VAR_6), 1, &VAR_9);
    FUNC_12(VAR_7 == VAR_0, "SafeArrayGetUBound returned %x\n", VAR_7);
    FUNC_12(VAR_9 == -1, "UBound = %d\n", VAR_9);
    FUNC_10(&VAR_6);

    VAR_7 = FUNC_1(VAR_4, 4, &VAR_6);
    FUNC_12(VAR_7 == VAR_0, "InitVariantFromBuffer returned %x\n", VAR_7);
    FUNC_12(FUNC_9(&VAR_6) == (VAR_1|VAR_2), "V_VT(&var) = %d\n", FUNC_9(&VAR_6));
    VAR_9 = FUNC_4(FUNC_8(&VAR_6));
    FUNC_12(VAR_9 == 1, "SafeArrayGetDim returned %d\n", VAR_9);
    VAR_7 = FUNC_5(FUNC_8(&VAR_6), 1, &VAR_9);
    FUNC_12(VAR_7 == VAR_0, "SafeArrayGetLBound returned %x\n", VAR_7);
    FUNC_12(VAR_9 == 0, "LBound = %d\n", VAR_9);
    VAR_7 = FUNC_6(FUNC_8(&VAR_6), 1, &VAR_9);
    FUNC_12(VAR_7 == VAR_0, "SafeArrayGetUBound returned %x\n", VAR_7);
    FUNC_12(VAR_9 == 3, "UBound = %d\n", VAR_9);
    VAR_7 = FUNC_3(FUNC_8(&VAR_6), &VAR_8);
    FUNC_12(VAR_7 == VAR_0, "SafeArrayAccessData failed %x\n", VAR_7);
    FUNC_12(!FUNC_11(VAR_4, VAR_8, 4), "Data inside safe array is incorrect\n");
    VAR_7 = FUNC_7(FUNC_8(&VAR_6));
    FUNC_12(VAR_7 == VAR_0, "SafeArrayUnaccessData failed %x\n", VAR_7);
    FUNC_10(&VAR_6);
}
