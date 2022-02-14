
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(void)
{
 FUNC_1(FUNC_0("\nCompare open_sync with different write sizes:\n"));
 FUNC_1(FUNC_0("(This is designed to compare the cost of writing 16kB in different write\n"
    "open_sync sizes.)\n"));

 FUNC_2(FUNC_0(" 1 * 16kB open_sync write"), 16);
 FUNC_2(FUNC_0(" 2 *  8kB open_sync writes"), 8);
 FUNC_2(FUNC_0(" 4 *  4kB open_sync writes"), 4);
 FUNC_2(FUNC_0(" 8 *  2kB open_sync writes"), 2);
 FUNC_2(FUNC_0("16 *  1kB open_sync writes"), 1);
}
