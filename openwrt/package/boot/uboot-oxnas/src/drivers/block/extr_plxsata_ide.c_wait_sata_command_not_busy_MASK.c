
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int** VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(int VAR_4)
{

 int VAR_5 = 0;
 int VAR_6 = VAR_0;
 do {
  if (!(*(VAR_3[VAR_4] + VAR_2)
   & (1 << VAR_1))) {
   VAR_5 = 1;
   break;
  }
  FUNC_1(100);
 } while (--VAR_6);

 if (!VAR_6) {
  FUNC_0("wait_sata_command_not_busy() Timed out of wait for SATA command to finish\n");
 }

 return VAR_5;
}
