
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_2,
     unsigned int VAR_3,
     unsigned int VAR_4,
     unsigned int VAR_5,
     unsigned int VAR_6)
{
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;

 if (VAR_4 > 0)
  VAR_8 |= (VAR_4 | 1) << 16;
 if (VAR_3 > 0)
  VAR_8 |= (VAR_3 | 1);
 if (VAR_6 > 0)
  VAR_7 |= (VAR_6 | 1) << 16;
 if (VAR_5 > 0)
  VAR_7 |= (VAR_5 | 1);
 FUNC_0(VAR_2, VAR_0, VAR_7);
 FUNC_0(VAR_2, VAR_1, VAR_8);
}
