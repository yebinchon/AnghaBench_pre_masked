
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct csum_state {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int *,int ,size_t) ;
 scalar_t__ FUNC_1 (int *,int *,size_t,struct csum_state*) ;

int
FUNC_2(FILE *VAR_0, size_t VAR_1, uint8_t VAR_2,
   struct csum_state *VAR_3)
{
 uint8_t VAR_4[512];
 size_t VAR_5 = sizeof(VAR_4);

 FUNC_0(VAR_4, VAR_2, VAR_5);
 while (VAR_1 > 0) {
  if (VAR_1 < VAR_5)
   VAR_5 = VAR_1;

  if (FUNC_1(VAR_0, VAR_4, VAR_5, VAR_3))
   return -1;

  VAR_1 -= VAR_5;
 }

 return 0;
}
