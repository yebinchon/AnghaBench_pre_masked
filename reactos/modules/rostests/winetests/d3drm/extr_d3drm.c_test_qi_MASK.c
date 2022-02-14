
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qi_test {scalar_t__ hr; scalar_t__ refcount_iid; scalar_t__ vtable_iid; int iid; } ;
typedef scalar_t__ ULONG ;
typedef size_t UINT ;
typedef scalar_t__ REFIID ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int ,void**) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, IUnknown *VAR_1,
                    REFIID VAR_2, const struct qi_test *VAR_3, UINT VAR_4)
{
    ULONG VAR_5, VAR_6;
    IUnknown *VAR_7, *VAR_8;
    HRESULT VAR_9;
    UINT VAR_10, VAR_11;

    for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10)
    {
        VAR_9 = FUNC_0(VAR_1, VAR_3[VAR_10].iid, (void **)&VAR_7);
        FUNC_4(VAR_9 == VAR_3[VAR_10].hr, "Got hr %#x for test \"%s\" %u.\n", VAR_9, VAR_0, VAR_10);
        if (FUNC_3(VAR_9))
        {
            for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11)
            {
                VAR_9 = FUNC_0(VAR_7, VAR_3[VAR_11].iid, (void **)&VAR_8);
                FUNC_4(VAR_9 == VAR_3[VAR_11].hr, "Got hr %#x for test \"%s\" %u, %u.\n", VAR_9, VAR_0, VAR_10, VAR_11);
                if (FUNC_3(VAR_9))
                {
                    VAR_6 = 0;
                    if (FUNC_2(VAR_2, VAR_3[VAR_11].refcount_iid))
                        ++VAR_6;
                    if (FUNC_2(VAR_3[VAR_10].refcount_iid, VAR_3[VAR_11].refcount_iid))
                        ++VAR_6;
                    VAR_5 = FUNC_1(VAR_8);
                    FUNC_4(VAR_5 == VAR_6, "Got refcount %u for test \"%s\" %u, %u, expected %u.\n",
                                VAR_5, VAR_0, VAR_10, VAR_11, VAR_6);
                    if (VAR_3[VAR_10].vtable_iid && VAR_3[VAR_11].vtable_iid && FUNC_2(VAR_3[VAR_10].vtable_iid, VAR_3[VAR_11].vtable_iid))
                        FUNC_4(VAR_7 == VAR_8,
                                "Expected iface1 == iface2 for test \"%s\" %u, %u. Got iface1 = %p, iface 2 = %p.\n",
                                VAR_0, VAR_10, VAR_11, VAR_7, VAR_8);
                    else if (VAR_3[VAR_10].vtable_iid && VAR_3[VAR_11].vtable_iid)
                        FUNC_4(VAR_7 != VAR_8,
                                "Expected iface1 != iface2 for test \"%s\" %u, %u. Got iface1 == iface2 == %p.\n",
                                VAR_0, VAR_10, VAR_11, VAR_7);
                }
            }

            VAR_6 = 0;
            if (FUNC_2(VAR_2, VAR_3[VAR_10].refcount_iid))
                ++VAR_6;
            VAR_5 = FUNC_1(VAR_7);
            FUNC_4(VAR_5 == VAR_6, "Got refcount %u for test \"%s\" %u, expected %u.\n",
                        VAR_5, VAR_0, VAR_10, VAR_6);
        }
    }
}
