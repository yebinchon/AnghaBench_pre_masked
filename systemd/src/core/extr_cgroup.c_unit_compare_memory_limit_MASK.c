
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_13__ {scalar_t__ memory_high; scalar_t__ memory_max; scalar_t__ memory_swap_max; } ;
typedef TYPE_1__ Unit ;
typedef int CGroupMask ;
typedef TYPE_1__ CGroupContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (TYPE_1__*,int,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char const*,scalar_t__*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_13(Unit *VAR_5, const char *VAR_6, uint64_t *VAR_7, uint64_t *VAR_8) {
        CGroupContext *VAR_9;
        CGroupMask VAR_10;
        const char *VAR_11;
        uint64_t VAR_12;
        int VAR_13;
        FUNC_2(VAR_5);

        VAR_13 = FUNC_3();
        if (VAR_13 < 0)
                return FUNC_4(VAR_13, "Failed to determine cgroup hierarchy version: %m");





        if (VAR_13 == 0)
                return -VAR_3;


        if (FUNC_12(VAR_5, VAR_4))
                return -VAR_3;





        VAR_10 = FUNC_11(VAR_5);
        if (!FUNC_0(VAR_10, VAR_1))
                return -VAR_3;

        VAR_9 = FUNC_9(VAR_5);
        FUNC_2(VAR_9);

        if (FUNC_6(VAR_6, "MemoryLow")) {
                VAR_12 = FUNC_7(VAR_5);
                VAR_11 = "memory.low";
        } else if (FUNC_6(VAR_6, "MemoryMin")) {
                VAR_12 = FUNC_8(VAR_5);
                VAR_11 = "memory.min";
        } else if (FUNC_6(VAR_6, "MemoryHigh")) {
                VAR_12 = VAR_9->memory_high;
                VAR_11 = "memory.high";
        } else if (FUNC_6(VAR_6, "MemoryMax")) {
                VAR_12 = VAR_9->memory_max;
                VAR_11 = "memory.max";
        } else if (FUNC_6(VAR_6, "MemorySwapMax")) {
                VAR_12 = VAR_9->memory_swap_max;
                VAR_11 = "memory.swap.max";
        } else
                return -VAR_2;

        VAR_13 = FUNC_10(VAR_5, VAR_11, VAR_8);
        if (VAR_13 < 0)
                return FUNC_5(VAR_5, VAR_13, "Failed to parse %s: %m", VAR_11);





        if (*VAR_8 == VAR_12) {
                *VAR_7 = VAR_12;
                return 1;
        }





        if (VAR_12 != VAR_0)
                VAR_12 = FUNC_1(VAR_12);

        *VAR_7 = VAR_12;

        return *VAR_8 == *VAR_7;
}
