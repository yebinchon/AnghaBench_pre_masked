
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int grub_uint8_t ;
typedef int grub_uint16_t ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int *,int *,int) ;

__attribute__((used)) static char *
FUNC_3 (grub_uint16_t *VAR_0, int VAR_1)
{
  char *VAR_2;
  int VAR_3;

  VAR_2 = FUNC_1 (VAR_1 * 4 + 1);
  if (! VAR_2)
    return VAR_2;

  for (VAR_3=0; VAR_3<VAR_1; VAR_3++)
    VAR_0[VAR_3] = FUNC_0 (VAR_0[VAR_3]);

  *FUNC_2 ((grub_uint8_t *) VAR_2, VAR_0, VAR_1) = '\0';

  return VAR_2;
}
