
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct symbol {int dummy; } ;
struct map {int prot; int flags; scalar_t__ ino_generation; scalar_t__ ino; scalar_t__ min; scalar_t__ maj; } ;
struct hist_entry {char level; scalar_t__ cpumode; TYPE_2__* mem_info; } ;
struct TYPE_3__ {struct symbol* sym; struct map* map; int al_addr; } ;
struct TYPE_4__ {TYPE_1__ daddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct map*,struct symbol*,int ,char,char*,size_t,unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hist_entry *VAR_3, char *VAR_4,
       size_t VAR_5, unsigned int VAR_6)
{

 uint64_t VAR_7 = 0;
 struct map *VAR_8 = ((void*)0);
 struct symbol *VAR_9 = ((void*)0);
 char VAR_10 = VAR_3->level;

 if (VAR_3->mem_info) {
  VAR_7 = FUNC_1(VAR_3->mem_info->daddr.al_addr);
  VAR_8 = VAR_3->mem_info->daddr.map;
  VAR_9 = VAR_3->mem_info->daddr.sym;


  if ((VAR_3->cpumode != VAR_1) &&
       VAR_8 && !(VAR_8->prot & VAR_2) &&
      (VAR_8->flags & VAR_0) &&
      (VAR_8->maj || VAR_8->min || VAR_8->ino ||
       VAR_8->ino_generation))
   VAR_10 = 's';
  else if (!VAR_8)
   VAR_10 = 'X';
 }
 return FUNC_0(VAR_8, VAR_9, VAR_7, VAR_10, VAR_4, VAR_5,
      VAR_6);
}
