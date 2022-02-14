
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (unsigned char,int) ;
 int * VAR_0 ;
 int FUNC_1 (unsigned char*,int ,int) ;

__attribute__((used)) static void
FUNC_2(unsigned char *VAR_1, unsigned char *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = VAR_3 >> 3;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  FUNC_1(VAR_1, VAR_0[*VAR_2++], 8);
  VAR_1 += 8;
 }
 VAR_6 = VAR_6 << 3;
 if (VAR_6 < VAR_3)
  FUNC_1(VAR_1, VAR_0[FUNC_0(*VAR_2, VAR_3 - VAR_6)], VAR_3 - VAR_6);
}
