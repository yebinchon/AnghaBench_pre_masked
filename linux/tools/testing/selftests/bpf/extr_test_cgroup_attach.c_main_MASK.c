
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int (*) ()) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(void)
{
 int (*VAR_5[])(void) = {
  VAR_3,
  VAR_4,
  VAR_2,
 };
 int VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5); VAR_7++)
  if (VAR_5[VAR_7]())
   VAR_6++;

 if (VAR_6)
  FUNC_1("test_cgroup_attach:FAIL\n");
 else
  FUNC_1("test_cgroup_attach:PASS\n");

 return VAR_6 ? VAR_0 : VAR_1;
}
