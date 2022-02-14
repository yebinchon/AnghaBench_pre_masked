
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_1(unsigned char * VAR_4)
{
 unsigned char VAR_5, VAR_6, VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 for (VAR_6 = 0; VAR_6 < VAR_2 / VAR_0; VAR_6++) {
  VAR_3[VAR_5 * VAR_2 / VAR_0 +
   VAR_6] = 0;
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   if (VAR_4[VAR_5 * VAR_2 +
    VAR_6 * VAR_0 + VAR_7])
    VAR_3[VAR_5 * VAR_2 /
     VAR_0 + VAR_6] |=
     FUNC_0(VAR_7);
 }
}
