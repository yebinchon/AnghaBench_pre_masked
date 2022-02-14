
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct csum_state {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,size_t,struct csum_state*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,size_t,int,int *) ;

int
FUNC_3(FILE *VAR_2, uint8_t *VAR_3, size_t VAR_4,
  struct csum_state *VAR_5)
{
 VAR_1 = 0;

 FUNC_2(VAR_3, VAR_4, 1, VAR_2);
 if (VAR_1) {
  FUNC_0("unable to write output file");
  return VAR_0;
 }

 if (VAR_5) {
  FUNC_1(VAR_3, VAR_4, VAR_5);
 }

 return 0;
}
