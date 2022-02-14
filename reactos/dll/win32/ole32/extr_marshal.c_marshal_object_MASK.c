
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stub_manager {int object; int oid; } ;
struct ifstub {int ipid; } ;
struct TYPE_3__ {int cPublicRefs; int ipid; int oid; int flags; int oxid; } ;
typedef TYPE_1__ STDOBJREF ;
typedef int REFIID ;
typedef int MSHLFLAGS ;
typedef int IUnknown ;
typedef int IRpcStubBuffer ;
typedef int IPSFactoryBuffer ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BOOL ;
typedef int APARTMENT ;


 int FUNC_0 (char*,int ,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int **) ;
 struct stub_manager* FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (struct stub_manager*,int,int ) ;
 int FUNC_12 (struct stub_manager*,int ,int ,int ) ;
 struct ifstub* FUNC_13 (struct stub_manager*,int ,int) ;
 int FUNC_14 (struct stub_manager*) ;
 struct ifstub* FUNC_15 (struct stub_manager*,int *,int ,int ,void*,int) ;

HRESULT FUNC_16(APARTMENT *VAR_13, STDOBJREF *VAR_14, REFIID VAR_15, IUnknown *VAR_16,
    DWORD VAR_17, void *VAR_18, MSHLFLAGS VAR_19)
{
    struct stub_manager *VAR_20;
    struct ifstub *VAR_21;
    BOOL VAR_22;
    HRESULT VAR_23;

    VAR_23 = FUNC_7(VAR_13, &VAR_14->oxid);
    if (VAR_23 != VAR_11)
        return VAR_23;

    VAR_23 = FUNC_6(VAR_13);
    if (VAR_23 != VAR_11)
        return VAR_23;

    if (!(VAR_20 = FUNC_10(VAR_13, VAR_16, VAR_12)))
        return VAR_1;

    VAR_14->flags = VAR_10;
    if (VAR_19 & VAR_6)
        VAR_14->flags |= VAR_8;
    if (VAR_19 & VAR_4)
        VAR_14->flags |= VAR_9;
    VAR_14->oid = VAR_20->oid;

    VAR_22 = ((VAR_19 & VAR_5) || (VAR_19 & VAR_6));


    VAR_21 = FUNC_13(VAR_20, VAR_15, VAR_19);
    if (!VAR_21) {
        IRpcStubBuffer *VAR_24 = ((void*)0);



        if (!FUNC_4(VAR_15, &VAR_3))
        {
            IPSFactoryBuffer *VAR_25;

            VAR_23 = FUNC_9(VAR_15, &VAR_25);
            if (VAR_23 == VAR_11) {
                VAR_23 = FUNC_1(VAR_25, VAR_15, VAR_20->object, &VAR_24);
                FUNC_2(VAR_25);
                if (VAR_23 != VAR_11)
                    FUNC_0("Failed to create an IRpcStubBuffer from IPSFactory for %s with error 0x%08x\n",
                        FUNC_8(VAR_15), VAR_23);
            }else {
                FUNC_0("couldn't get IPSFactory buffer for interface %s\n", FUNC_8(VAR_15));
                VAR_23 = VAR_0;
            }

        }

        if (VAR_23 == VAR_11) {
            VAR_21 = FUNC_15(VAR_20, VAR_24, VAR_15, VAR_17, VAR_18, VAR_19);
            if (!VAR_21)
                VAR_23 = VAR_1;
        }
        if (VAR_24) FUNC_3(VAR_24);

        if (VAR_23 != VAR_11) {
            FUNC_14(VAR_20);


            FUNC_12(VAR_20, 0, VAR_2, VAR_12);
            return VAR_23;
        }
    }

    if (!VAR_22)
    {
        VAR_14->cPublicRefs = VAR_7;
        FUNC_11(VAR_20, VAR_14->cPublicRefs, VAR_2);
    }
    else
    {
        VAR_14->cPublicRefs = 0;
        if (VAR_19 & VAR_5)
            FUNC_11(VAR_20, 1, VAR_2);
        else
            FUNC_11(VAR_20, 0, VAR_12);
    }


    FUNC_5(VAR_15);

    VAR_14->ipid = VAR_21->ipid;

    FUNC_14(VAR_20);
    return VAR_11;
}
