
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct machine*) ;
 scalar_t__ FUNC_1 (struct machine*) ;
 int FUNC_2 (struct machine*,char*,int ) ;
 struct machine* FUNC_3 (int) ;

struct machine *FUNC_4(void)
{
 struct machine *VAR_1 = FUNC_3(sizeof(*VAR_1));

 if (VAR_1 != ((void*)0)) {
  FUNC_2(VAR_1, "", VAR_0);

  if (FUNC_1(VAR_1) < 0)
   goto out_delete;
 }

 return VAR_1;
out_delete:
 FUNC_0(VAR_1);
 return ((void*)0);
}
