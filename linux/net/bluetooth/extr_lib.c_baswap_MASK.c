
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bdaddr_t ;



void FUNC_0(bdaddr_t *VAR_0, const bdaddr_t *VAR_1)
{
 const unsigned char *VAR_2 = (const unsigned char *)VAR_1;
 unsigned char *VAR_3 = (unsigned char *)VAR_0;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
  VAR_3[VAR_4] = VAR_2[5 - VAR_4];
}
