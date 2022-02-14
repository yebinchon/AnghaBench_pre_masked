
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int,char*,...) ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 FUNC_1(VAR_0[0], 64, FUNC_0(VAR_3));
 for (VAR_4=512, VAR_5=1, VAR_6=VAR_2; VAR_5<VAR_1; VAR_4<<=1, VAR_5++) {
  if (VAR_4 > 8192) {
   VAR_4 /= 1024;
   VAR_6++;
  }
  FUNC_1(VAR_0[VAR_5], 64, "%d %s", VAR_4, FUNC_0(VAR_6));
 }
}
