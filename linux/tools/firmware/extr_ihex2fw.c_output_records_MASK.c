
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct ihex_binrec {unsigned char addr; struct ihex_binrec* next; int len; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 unsigned char FUNC_1 (unsigned char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ihex_binrec*) ;
 struct ihex_binrec* VAR_0 ;
 int FUNC_4 (int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_5(int VAR_1)
{
 unsigned char VAR_2[6] = {0, 0, 0, 0, 0, 0};
 struct ihex_binrec *VAR_3 = VAR_0;

 while (VAR_3) {
  uint16_t VAR_4 = FUNC_0(FUNC_3(VAR_3), 4);

  VAR_3->addr = FUNC_1(VAR_3->addr);
  VAR_3->len = FUNC_2(VAR_3->len);
  if (FUNC_4(VAR_1, &VAR_3->addr, VAR_4) != VAR_4)
   return 1;
  VAR_3 = VAR_3->next;
 }


 if (FUNC_4(VAR_1, VAR_2, 6) != 6)
  return 1;
 return 0;
}
