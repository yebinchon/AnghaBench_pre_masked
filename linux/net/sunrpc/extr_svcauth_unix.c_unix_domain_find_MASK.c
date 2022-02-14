
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_domain {int * flavour; int * name; int ref; } ;
struct unix_domain {struct auth_domain h; } ;


 int VAR_0 ;
 struct auth_domain* FUNC_0 (char*) ;
 struct auth_domain* FUNC_1 (char*,struct auth_domain*) ;
 int FUNC_2 (struct auth_domain*) ;
 int FUNC_3 (struct unix_domain*) ;
 struct unix_domain* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int ) ;
 int VAR_1 ;
 int FUNC_7 (struct auth_domain*) ;

struct auth_domain *FUNC_8(char *VAR_2)
{
 struct auth_domain *VAR_3;
 struct unix_domain *VAR_4 = ((void*)0);

 VAR_3 = FUNC_0(VAR_2);
 while(1) {
  if (VAR_3) {
   if (VAR_4 && VAR_3 != &VAR_4->h)
    FUNC_7(&VAR_4->h);

   if (VAR_3->flavour != &VAR_1) {
    FUNC_2(VAR_3);
    return ((void*)0);
   }
   return VAR_3;
  }

  VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
  if (VAR_4 == ((void*)0))
   return ((void*)0);
  FUNC_5(&VAR_4->h.ref);
  VAR_4->h.name = FUNC_6(VAR_2, VAR_0);
  if (VAR_4->h.name == ((void*)0)) {
   FUNC_3(VAR_4);
   return ((void*)0);
  }
  VAR_4->h.flavour = &VAR_1;
  VAR_3 = FUNC_1(VAR_2, &VAR_4->h);
 }
}
