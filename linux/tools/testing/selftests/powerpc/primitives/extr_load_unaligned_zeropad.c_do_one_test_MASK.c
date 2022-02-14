
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (char*) ;
 int FUNC_2 (char*,int,unsigned long,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(char *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;

 FUNC_0(FUNC_4());
 VAR_2 = *(unsigned long *)VAR_0;
 FUNC_0(FUNC_3());

 VAR_3 = FUNC_1(VAR_0);

 if (VAR_2 != VAR_3) {
  FUNC_2("offset %u load_unaligned_zeropad returned 0x%lx, should be 0x%lx\n", VAR_1, VAR_3, VAR_2);
  return 1;
 }

 return 0;
}
