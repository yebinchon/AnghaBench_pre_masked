
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;
typedef int stbi__uint16 ;
typedef int stbi__context ;


 int FUNC_0 (int *) ;

void FUNC_1(stbi__context *VAR_0, stbi_uc* VAR_1)
{
   stbi__uint16 VAR_2 = FUNC_0(VAR_0);
   stbi__uint16 VAR_3 = 31;

   int VAR_4 = (VAR_2 >> 10) & VAR_3;
   int VAR_5 = (VAR_2 >> 5) & VAR_3;
   int VAR_6 = VAR_2 & VAR_3;

   VAR_1[0] = (VAR_4 * 255)/31;
   VAR_1[1] = (VAR_5 * 255)/31;
   VAR_1[2] = (VAR_6 * 255)/31;





}
