
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static unsigned long
FUNC_3()
{
 VAR_3 = 0;

 (void) FUNC_1(VAR_0, VAR_5);
 VAR_2 = 0;
 FUNC_2();



 while(VAR_3 == 0)

  VAR_2++;

 VAR_2 ^= (VAR_2>>3) ^ (VAR_2>>6) ^ VAR_6;
 VAR_2 &= 0x7;
 VAR_6=VAR_2;
 VAR_1 = (VAR_1<<3) ^ VAR_2;
 return VAR_1;

}
