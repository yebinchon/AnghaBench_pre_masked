
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int state; } ;
struct load_info {int sechdrs; int hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct module*) ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 (struct module*,int) ;
 int FUNC_3 (struct module*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct module*) ;

__attribute__((used)) static int FUNC_7(struct module *VAR_2, struct load_info *VAR_3)
{
 int VAR_4;

 FUNC_4(&VAR_1);


 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4 < 0)
  goto out;


 FUNC_0(VAR_3->hdr, VAR_3->sechdrs, VAR_2);

 FUNC_2(VAR_2, 0);
 FUNC_1(VAR_2);
 FUNC_3(VAR_2);



 VAR_2->state = VAR_0;
 FUNC_5(&VAR_1);

 return 0;

out:
 FUNC_5(&VAR_1);
 return VAR_4;
}
