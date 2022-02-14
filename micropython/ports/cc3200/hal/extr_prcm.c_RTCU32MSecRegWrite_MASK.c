
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_1)
{
   unsigned int VAR_2;


   VAR_2 = FUNC_0(VAR_0) & (~(0x03FF << 16));


   FUNC_1(VAR_0, VAR_2 | ((VAR_1 & 0x03FF) << 16));
}
