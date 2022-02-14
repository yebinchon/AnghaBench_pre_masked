
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_debug_info {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (char*,char*,char const*,int) ;

__attribute__((used)) static void FUNC_6(char *VAR_6, int VAR_7, int VAR_8,
          struct ppc_debug_info *VAR_9, bool VAR_10)
{
 const char *VAR_11;
 unsigned long VAR_12 = (unsigned long)(VAR_5);
 int VAR_13, VAR_14;

 VAR_12 &= ~0x7UL;

 if (VAR_7 == VAR_0) {
  VAR_12 |= (1UL << 1);
  VAR_11 = "write";
 } else {
  VAR_12 |= (1UL << 0);
  VAR_12 |= (1UL << 1);
  VAR_11 = "read";
 }


 VAR_12 |= (1UL << 2);


 FUNC_3((void *)VAR_12);
 FUNC_2(VAR_3, VAR_4, ((void*)0), 0);
 FUNC_5(VAR_6, "Test %s watchpoint with len: %d ", VAR_11, VAR_8);
 FUNC_0(VAR_6);

 FUNC_3(((void*)0));

 VAR_12 = (VAR_12 & ~7);


 if (!(VAR_9->features & VAR_2))
  return;
 VAR_13 = FUNC_4((void *)VAR_12, 0);
 FUNC_2(VAR_3, VAR_4, ((void*)0), 0);
 FUNC_5(VAR_6, "Test %s watchpoint with len: %d ", VAR_11, VAR_8);
 FUNC_0(VAR_6);

 FUNC_1(VAR_13);


 VAR_14 = 8;
 if (VAR_10)
  VAR_14 = 512 - ((int)VAR_12 & (VAR_1 - 1));
 VAR_13 = FUNC_4((void *)VAR_12, VAR_14);
 FUNC_2(VAR_3, VAR_4, ((void*)0), 0);
 FUNC_5(VAR_6, "Test %s watchpoint with len: %d ", VAR_11, VAR_8);
 FUNC_0(VAR_6);

 FUNC_1(VAR_13);
}
