
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int*,int,unsigned int,int ) ;
 int FUNC_3 (unsigned int*,unsigned int,unsigned int) ;

int FUNC_4(unsigned int *VAR_0)
{
 if (FUNC_0(*VAR_0)) {
  unsigned int VAR_1 = FUNC_1(*VAR_0);

  if (VAR_1 & 0x10000)
   FUNC_2(VAR_0, 0x40, VAR_1 & 0xffff, 0);
  if (VAR_1 & 0x20000)
   FUNC_3(VAR_0, (VAR_1 >> 8) & 0xff,
        VAR_1 & 0xff);
 }

 return 0;
}
