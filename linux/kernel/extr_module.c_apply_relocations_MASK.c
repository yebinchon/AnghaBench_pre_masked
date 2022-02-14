
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_6__ {int sym; } ;
struct load_info {TYPE_2__ index; int strtab; TYPE_3__* sechdrs; TYPE_1__* hdr; } ;
struct TYPE_7__ {unsigned int sh_info; int sh_flags; scalar_t__ sh_type; } ;
struct TYPE_5__ {unsigned int e_shnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ,unsigned int,struct module*) ;
 int FUNC_1 (TYPE_3__*,int ,int ,unsigned int,struct module*) ;

__attribute__((used)) static int FUNC_2(struct module *VAR_4, const struct load_info *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7 = 0;


 for (VAR_6 = 1; VAR_6 < VAR_5->hdr->e_shnum; VAR_6++) {
  unsigned int VAR_8 = VAR_5->sechdrs[VAR_6].sh_info;


  if (VAR_8 >= VAR_5->hdr->e_shnum)
   continue;


  if (!(VAR_5->sechdrs[VAR_8].sh_flags & VAR_0))
   continue;


  if (VAR_5->sechdrs[VAR_6].sh_flags & VAR_1)
   continue;

  if (VAR_5->sechdrs[VAR_6].sh_type == VAR_2)
   VAR_7 = FUNC_0(VAR_5->sechdrs, VAR_5->strtab,
          VAR_5->index.sym, VAR_6, VAR_4);
  else if (VAR_5->sechdrs[VAR_6].sh_type == VAR_3)
   VAR_7 = FUNC_1(VAR_5->sechdrs, VAR_5->strtab,
       VAR_5->index.sym, VAR_6, VAR_4);
  if (VAR_7 < 0)
   break;
 }
 return VAR_7;
}
