
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long*) ;
 unsigned long* FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned long*,int ,unsigned int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (int ,unsigned int,unsigned long*) ;
 int FUNC_7 (int ,unsigned int,unsigned long*) ;

int FUNC_8(void)
{
 unsigned int VAR_2;
 unsigned long *VAR_3;
 unsigned int VAR_4;
 uint64_t VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;


 VAR_3 = ((void*)0);
 VAR_2 = 0;
 do {
  VAR_2 += sizeof(unsigned long);
  FUNC_1(VAR_3);
  VAR_3 = FUNC_2(VAR_2);
 } while (FUNC_6(0, VAR_2, VAR_3) == -VAR_0);

 VAR_9 = FUNC_4("/proc/uptime", VAR_1);
 FUNC_0(VAR_9 >= 0);

 FUNC_5(VAR_9, &VAR_5, &VAR_7);
 for (VAR_4 = 0; VAR_4 < VAR_2 * 8; VAR_4++) {
  FUNC_3(VAR_3, 0, VAR_2);
  VAR_3[VAR_4 / (8 * sizeof(unsigned long))] |= 1UL << (VAR_4 % (8 * sizeof(unsigned long)));


  FUNC_7(0, VAR_2, VAR_3);

  FUNC_5(VAR_9, &VAR_6, &VAR_8);
  FUNC_0(VAR_6 >= VAR_5);
  FUNC_0(VAR_8 >= VAR_7);
  VAR_5 = VAR_6;
  VAR_7 = VAR_8;
 }

 return 0;
}
