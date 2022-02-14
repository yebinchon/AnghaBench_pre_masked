
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UCHAR ;
struct TYPE_10__ {int dwAddr; int dwMask; } ;
struct TYPE_9__ {size_t dwNumEntries; TYPE_2__* table; } ;
typedef TYPE_1__* PMIB_IPADDRTABLE ;
typedef int MIB_IPADDRTABLE ;
typedef int MIB_IPADDRROW ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,size_t*,scalar_t__) ;
 int FUNC_1 () ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_9 (size_t,scalar_t__) ;

__attribute__((used)) static UCHAR FUNC_10(void)
{
    UCHAR VAR_13;
    DWORD VAR_14 = 0;

    FUNC_6("\n");

    if (FUNC_0(((void*)0), &VAR_14, VAR_2) == VAR_0)
    {
        PMIB_IPADDRTABLE VAR_15, VAR_16 = ((void*)0);
        DWORD VAR_17 = (VAR_14 - sizeof(MIB_IPADDRTABLE)) /
         sizeof(MIB_IPADDRROW) + 1;

        VAR_15 = FUNC_2(FUNC_1(), VAR_3, VAR_14);
        if (VAR_15)
            VAR_16 = FUNC_2(FUNC_1(),
             VAR_3, sizeof(MIB_IPADDRTABLE) +
             (FUNC_9(VAR_17, VAR_6 + 1) - 1) * sizeof(MIB_IPADDRROW));
        if (VAR_15 && VAR_16)
        {
            if (FUNC_0(VAR_15, &VAR_14, VAR_2) == VAR_1)
            {
                DWORD VAR_18;

                for (VAR_18 = 0; VAR_18 < VAR_15->dwNumEntries; VAR_18++)
                {
                    if ((VAR_15->table[VAR_18].dwAddr &
                     VAR_15->table[VAR_18].dwMask) !=
                     FUNC_7((VAR_4 & VAR_5)))
                    {
                        BOOL VAR_19 = VAR_11;
                        DWORD VAR_20;



                        for (VAR_20 = 0; VAR_19 &&
                         VAR_20 < VAR_16->dwNumEntries; VAR_20++)
                            if ((VAR_15->table[VAR_18].dwAddr &
                             VAR_15->table[VAR_18].dwMask) ==
                             (VAR_16->table[VAR_20].dwAddr
                             & VAR_16->table[VAR_20].dwMask))
                                VAR_19 = VAR_2;

                        if (VAR_19)
                            FUNC_8(&VAR_16->table[
                             VAR_16->dwNumEntries++],
                             &VAR_15->table[VAR_18], sizeof(MIB_IPADDRROW));
                    }
                }

                FUNC_4(VAR_12, VAR_10,
                 VAR_16);
                VAR_13 = VAR_7;
                for (VAR_18 = 0; VAR_13 == VAR_7 &&
                 VAR_18 < VAR_16->dwNumEntries; VAR_18++)
                    if (VAR_16->table[VAR_18].dwAddr != VAR_4)
                        VAR_13 = FUNC_5(&VAR_16->table[VAR_18]);
            }
            else
                VAR_13 = VAR_9;
            FUNC_3(FUNC_1(), 0, VAR_15);
            FUNC_3(FUNC_1(), 0, VAR_16);
        }
        else
            VAR_13 = VAR_8;
    }
    else
        VAR_13 = VAR_9;
    FUNC_6("returning 0x%02x\n", VAR_13);
    return VAR_13;
}
