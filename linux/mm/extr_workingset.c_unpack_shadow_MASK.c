
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_data_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int * FUNC_0 (int) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, int *VAR_4, pg_data_t **VAR_5,
     unsigned long *VAR_6, bool *VAR_7)
{
 unsigned long VAR_8 = FUNC_1(VAR_3);
 int VAR_9, VAR_10;
 bool VAR_11;

 VAR_11 = VAR_8 & 1;
 VAR_8 >>= 1;
 VAR_10 = VAR_8 & ((1UL << VAR_1) - 1);
 VAR_8 >>= VAR_1;
 VAR_9 = VAR_8 & ((1UL << VAR_0) - 1);
 VAR_8 >>= VAR_0;

 *VAR_4 = VAR_9;
 *VAR_5 = FUNC_0(VAR_10);
 *VAR_6 = VAR_8 << VAR_2;
 *VAR_7 = VAR_11;
}
