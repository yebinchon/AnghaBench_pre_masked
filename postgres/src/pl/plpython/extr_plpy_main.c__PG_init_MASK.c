
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int* VAR_3 ;

void
FUNC_2(void)
{
 int **VAR_4;
 VAR_4 = (int **) FUNC_0("plpython_version_bitmask");
 if (!(*VAR_4))
  *VAR_4 = &VAR_2;

 VAR_3 = *VAR_4;

 *VAR_3 |= (1 << VAR_0);






 FUNC_1(VAR_1);
}
