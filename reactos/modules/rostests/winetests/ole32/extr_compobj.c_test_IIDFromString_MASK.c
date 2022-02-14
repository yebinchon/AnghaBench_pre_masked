
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int iid ;
typedef char WCHAR ;
struct TYPE_6__ {int Data1; } ;
typedef TYPE_1__ IID ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_5 ;
 char const* VAR_6 ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (int,char*,int) ;
 char const* VAR_7 ;
 int FUNC_4 (TYPE_1__*) ;
 char const* VAR_8 ;
 char const* VAR_9 ;

__attribute__((used)) static void FUNC_5(void)
{
    static const WCHAR VAR_10[] = {'{','0','0','0','0','0','0','0','1','-','0','0','0','0','-','0','0','0','0','-',
                                    'c','0','0','0','-','0','0','0','0','0','0','0','0','0','0','4','6','}',0};
    static const WCHAR VAR_11[] = {'{','0','0','0','0','0','0','0','1','-','0','0','0','0','-','0','0','0','0','-',
                                        'g','0','0','0','-','0','0','0','0','0','0','0','0','0','0','4','6','}',0};
    static const WCHAR VAR_12[] = {'{','0','0','0','0','0','0','0','1','=','0','0','0','0','-','0','0','0','0','-',
                                        'g','0','0','0','-','0','0','0','0','0','0','0','0','0','0','4','6','}',0};
    static const WCHAR VAR_13[] = {'b','r','o','k','e','n','0','0','1','=','0','0','0','0','-','0','0','0','0','-',
                                        'g','0','0','0','-','0','0','0','0','0','0','0','0','0','0','4','6','}',0};
    HRESULT VAR_14;
    IID VAR_15;

    VAR_14 = FUNC_0(VAR_8, &VAR_15);
    FUNC_3(VAR_14 == VAR_5, "got 0x%08x\n", VAR_14);
    FUNC_3(FUNC_1(&VAR_15, &VAR_1), "got iid %s\n", FUNC_4(&VAR_15));

    FUNC_2(&VAR_15, 0xab, sizeof(VAR_15));
    VAR_14 = FUNC_0(((void*)0), &VAR_15);
    FUNC_3(VAR_14 == VAR_5, "got 0x%08x\n", VAR_14);
    FUNC_3(FUNC_1(&VAR_15, &VAR_0), "got iid %s\n", FUNC_4(&VAR_15));

    VAR_14 = FUNC_0(VAR_10, &VAR_15);
    FUNC_3(VAR_14 == VAR_5, "got 0x%08x\n", VAR_14);
    FUNC_3(FUNC_1(&VAR_15, &VAR_4), "got iid %s\n", FUNC_4(&VAR_15));


    FUNC_2(&VAR_15, 0xab, sizeof(VAR_15));
    VAR_14 = FUNC_0(VAR_6, &VAR_15);
    FUNC_3(VAR_14 == VAR_3, "got 0x%08x\n", VAR_14);
    FUNC_3(VAR_15.Data1 == 0xabababab, "Got %08x\n", VAR_15.Data1);


    FUNC_2(&VAR_15, 0xab, sizeof(VAR_15));
    VAR_14 = FUNC_0(VAR_11, &VAR_15);
    FUNC_3(VAR_14 == VAR_2, "got 0x%08x\n", VAR_14);
    FUNC_3(VAR_15.Data1 == 0x00000001, "Got %08x\n", VAR_15.Data1);

    FUNC_2(&VAR_15, 0xab, sizeof(VAR_15));
    VAR_14 = FUNC_0(VAR_12, &VAR_15);
    FUNC_3(VAR_14 == VAR_2, "got 0x%08x\n", VAR_14);
    FUNC_3(VAR_15.Data1 == 0x00000001, "Got %08x\n", VAR_15.Data1);


    FUNC_2(&VAR_15, 0xab, sizeof(VAR_15));
    VAR_14 = FUNC_0(VAR_13, &VAR_15);
    FUNC_3(VAR_14 == VAR_2, "got 0x%08x\n", VAR_14);
    FUNC_3(VAR_15.Data1 == 0xabababab, "Got %08x\n", VAR_15.Data1);


    FUNC_2(&VAR_15, 0xab, sizeof(VAR_15));
    VAR_14 = FUNC_0(VAR_9, &VAR_15);
    FUNC_3(VAR_14 == VAR_3, "got 0x%08x\n", VAR_14);
    FUNC_3(VAR_15.Data1 == 0xabababab, "Got %08x\n", VAR_15.Data1);


    FUNC_2(&VAR_15, 0xab, sizeof(VAR_15));
    VAR_14 = FUNC_0(VAR_7, &VAR_15);
    FUNC_3(VAR_14 == VAR_3, "got 0x%08x\n", VAR_14);
    FUNC_3(VAR_15.Data1 == 0xabababab, "Got %08x\n", VAR_15.Data1);
}
