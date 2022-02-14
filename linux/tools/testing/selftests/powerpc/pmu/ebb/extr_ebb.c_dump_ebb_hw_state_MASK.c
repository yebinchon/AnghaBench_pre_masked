
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (void*) ;
 char* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,void*,void*,void*,int ,void*,void*,void*,void*,void*,void*,void*) ;

void FUNC_4(void)
{
 u64 VAR_11;
 u32 VAR_12;

 VAR_12 = FUNC_2(VAR_2);
 VAR_11 = FUNC_2(VAR_0);

 FUNC_3("HW state:\n" "MMCR0 0x%016x %s\n" "MMCR2 0x%016lx\n" "EBBHR 0x%016lx\n" "BESCR 0x%016llx %s\n" "PMC1  0x%016lx\n" "PMC2  0x%016lx\n" "PMC3  0x%016lx\n" "PMC4  0x%016lx\n" "PMC5  0x%016lx\n" "PMC6  0x%016lx\n" "SIAR  0x%016lx\n",
        VAR_12, FUNC_1(VAR_12), FUNC_2(VAR_3),
        FUNC_2(VAR_1), VAR_11, FUNC_0(VAR_11),
        FUNC_2(VAR_4), FUNC_2(VAR_5), FUNC_2(VAR_6),
        FUNC_2(VAR_7), FUNC_2(VAR_8), FUNC_2(VAR_9),
        FUNC_2(VAR_10));
}
