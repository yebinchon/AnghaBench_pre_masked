
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned short const**) ;
 unsigned short* FUNC_1 (int ) ;

int FUNC_2(uint32_t VAR_0, uint32_t *VAR_1)
{
 int VAR_2, VAR_3;
 const unsigned short *VAR_4 = FUNC_1(VAR_0);
 VAR_3 = VAR_4[0] >> 8;

 if (VAR_3 == 0)
  return 0;

 VAR_4++;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  VAR_1[VAR_2] = FUNC_0(&VAR_4);

 return VAR_3;
}
