
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct auth_domain {struct gss_domain* name; int * flavour; int ref; } ;
struct gss_domain {struct auth_domain h; int pseudoflavor; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct auth_domain* FUNC_0 (char*,struct auth_domain*) ;
 int FUNC_1 (struct auth_domain*) ;
 int FUNC_2 (struct gss_domain*) ;
 struct gss_domain* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 struct gss_domain* FUNC_5 (char*,int ) ;
 int VAR_2 ;

int
FUNC_6(u32 VAR_3, char * VAR_4)
{
 struct gss_domain *VAR_5;
 struct auth_domain *VAR_6;
 int VAR_7 = -VAR_0;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  goto out;
 FUNC_4(&VAR_5->h.ref);
 VAR_5->h.name = FUNC_5(VAR_4, VAR_1);
 if (!VAR_5->h.name)
  goto out_free_dom;
 VAR_5->h.flavour = &VAR_2;
 VAR_5->pseudoflavor = VAR_3;

 VAR_7 = 0;
 VAR_6 = FUNC_0(VAR_4, &VAR_5->h);
 if (VAR_6 != &VAR_5->h) {
  FUNC_1(VAR_6);
  FUNC_2(VAR_5->h.name);
  goto out_free_dom;
 }
 return 0;

out_free_dom:
 FUNC_2(VAR_5);
out:
 return VAR_7;
}
