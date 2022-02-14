
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zic_t ;



__attribute__((used)) static void
FUNC_0(const zic_t VAR_0, char *const VAR_1)
{
 int VAR_2;
 int VAR_3;
 unsigned char *const VAR_4 = (unsigned char *) VAR_1;

 for (VAR_2 = 0, VAR_3 = 56; VAR_2 < 8; ++VAR_2, VAR_3 -= 8)
  VAR_4[VAR_2] = VAR_0 >> VAR_3;
}
