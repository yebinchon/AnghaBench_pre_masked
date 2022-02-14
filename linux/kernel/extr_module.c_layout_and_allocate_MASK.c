
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_3__ {size_t pcpu; size_t mod; } ;
struct load_info {TYPE_1__ index; TYPE_2__* sechdrs; int mod; int secstrings; int hdr; } ;
struct TYPE_4__ {unsigned long sh_flags; scalar_t__ sh_addr; } ;


 struct module* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int ,struct load_info*,int) ;
 unsigned int FUNC_2 (struct load_info*,char*) ;
 int FUNC_3 (struct module*,struct load_info*) ;
 int FUNC_4 (int ,struct load_info*) ;
 int FUNC_5 (int ,struct load_info*) ;
 int FUNC_6 (int ,TYPE_2__*,int ,int ) ;
 int FUNC_7 (int ,struct load_info*) ;

__attribute__((used)) static struct module *FUNC_8(struct load_info *VAR_2, int VAR_3)
{
 struct module *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2->mod, VAR_2, VAR_3);
 if (VAR_6)
  return FUNC_0(VAR_6);


 VAR_6 = FUNC_6(VAR_2->hdr, VAR_2->sechdrs,
     VAR_2->secstrings, VAR_2->mod);
 if (VAR_6 < 0)
  return FUNC_0(VAR_6);


 VAR_2->sechdrs[VAR_2->index.pcpu].sh_flags &= ~(unsigned long)VAR_0;






 VAR_5 = FUNC_2(VAR_2, ".data..ro_after_init");
 if (VAR_5)
  VAR_2->sechdrs[VAR_5].sh_flags |= VAR_1;






 VAR_5 = FUNC_2(VAR_2, "__jump_table");
 if (VAR_5)
  VAR_2->sechdrs[VAR_5].sh_flags |= VAR_1;




 FUNC_4(VAR_2->mod, VAR_2);
 FUNC_5(VAR_2->mod, VAR_2);


 VAR_6 = FUNC_7(VAR_2->mod, VAR_2);
 if (VAR_6)
  return FUNC_0(VAR_6);


 VAR_4 = (void *)VAR_2->sechdrs[VAR_2->index.mod].sh_addr;
 FUNC_3(VAR_4, VAR_2);
 return VAR_4;
}
