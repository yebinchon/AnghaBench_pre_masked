
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int_digest {int (* init ) (int *) ;scalar_t__ name; } ;
typedef int PX_MD ;


 int VAR_0 ;
 struct int_digest* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;

int
FUNC_3(const char *VAR_2, PX_MD **VAR_3)
{
 const struct int_digest *VAR_4;
 PX_MD *VAR_5;

 for (VAR_4 = VAR_1; VAR_4->name; VAR_4++)
  if (FUNC_0(VAR_4->name, VAR_2) == 0)
  {
   VAR_5 = FUNC_1(sizeof(*VAR_5));
   VAR_4->init(VAR_5);

   *VAR_3 = VAR_5;

   return 0;
  }
 return VAR_0;
}
