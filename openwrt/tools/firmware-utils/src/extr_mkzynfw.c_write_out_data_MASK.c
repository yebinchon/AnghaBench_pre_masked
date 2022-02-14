
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct csum_state {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,size_t,struct csum_state*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,size_t,int,int *) ;

int
FUNC_3(FILE *VAR_1, uint8_t *VAR_2, size_t VAR_3,
  struct csum_state *VAR_4)
{
 VAR_0 = 0;

 FUNC_2(VAR_2, VAR_3, 1, VAR_1);
 if (VAR_0) {
  FUNC_0("unable to write output file");
  return -1;
 }

 if (VAR_4) {
  FUNC_1(VAR_2, VAR_3, VAR_4);
 }

 return 0;
}
