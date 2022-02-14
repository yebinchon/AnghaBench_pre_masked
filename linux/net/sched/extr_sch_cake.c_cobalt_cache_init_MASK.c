
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
struct cobalt_vars {unsigned int rec_inv_sqrt; int count; } ;


 int VAR_0 ;
 int FUNC_0 (struct cobalt_vars*) ;
 unsigned int* VAR_1 ;
 int FUNC_1 (struct cobalt_vars*,int ,int) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct cobalt_vars VAR_2;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.rec_inv_sqrt = ~0U;
 VAR_1[0] = VAR_2.rec_inv_sqrt;

 for (VAR_2.count = 1; VAR_2.count < VAR_0; VAR_2.count++) {
  FUNC_0(&VAR_2);
  FUNC_0(&VAR_2);
  FUNC_0(&VAR_2);
  FUNC_0(&VAR_2);

  VAR_1[VAR_2.count] = VAR_2.rec_inv_sqrt;
 }
}
