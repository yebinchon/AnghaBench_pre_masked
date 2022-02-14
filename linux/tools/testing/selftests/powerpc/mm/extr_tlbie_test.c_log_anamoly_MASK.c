
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int ** VAR_0 ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static inline void FUNC_4(unsigned int VAR_1, unsigned int *VAR_2,
          unsigned int VAR_3, unsigned int VAR_4)
{
 FILE *VAR_5 = VAR_0[VAR_1];

 FUNC_3(VAR_5, "Thread %02d: Addr 0x%lx: Expected 0x%x, Observed 0x%x\n",
         VAR_1, (unsigned long)VAR_2, VAR_3, VAR_4);
 FUNC_3(VAR_5, "Thread %02d: Expected Thread id   = %02d\n", VAR_1, FUNC_1(VAR_3));
 FUNC_3(VAR_5, "Thread %02d: Observed Thread id   = %02d\n", VAR_1, FUNC_1(VAR_4));
 FUNC_3(VAR_5, "Thread %02d: Expected Word offset = %03d\n", VAR_1, FUNC_2(VAR_3));
 FUNC_3(VAR_5, "Thread %02d: Observed Word offset = %03d\n", VAR_1, FUNC_2(VAR_4));
 FUNC_3(VAR_5, "Thread %02d: Expected sweep-id    = 0x%x\n", VAR_1, FUNC_0(VAR_3));
 FUNC_3(VAR_5, "Thread %02d: Observed sweep-id    = 0x%x\n", VAR_1, FUNC_0(VAR_4));
 FUNC_3(VAR_5, "----------------------------------------------------------\n");
}
