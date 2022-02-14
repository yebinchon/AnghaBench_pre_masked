
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {int dummy; } ;


 int FUNC_0 () ;
 struct sparsebit* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;

struct sparsebit *FUNC_3(void)
{
 struct sparsebit *VAR_0;


 VAR_0 = FUNC_1(1, sizeof(*VAR_0));
 if (!VAR_0) {
  FUNC_2("calloc");
  FUNC_0();
 }

 return VAR_0;
}
