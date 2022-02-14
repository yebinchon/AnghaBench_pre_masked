
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpuset ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int,int *) ;

void FUNC_5(void *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8, VAR_9, VAR_10;
 cpu_set_t VAR_11;

 FUNC_1(&VAR_11);
 VAR_6 = (unsigned long)VAR_4 >> 1;
 FUNC_0(VAR_6, &VAR_11);
 FUNC_4(0, sizeof(VAR_11), &VAR_11);


 VAR_9 = ((unsigned long)VAR_4) + 1;
 VAR_9 += 2;
 FUNC_3(VAR_1, VAR_9);


 VAR_7 = ((unsigned long)VAR_4);
 VAR_7 &= ~0x3UL;
 VAR_7 += 4;
 FUNC_3(VAR_0, VAR_7);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_8 = FUNC_2(VAR_0);
  VAR_10 = FUNC_2(VAR_1);
  if ( (VAR_7 != VAR_8) || (VAR_9 != VAR_10) ) {
   VAR_3 = 0;
   return;
  }
 }
 return;
}
