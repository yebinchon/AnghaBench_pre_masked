
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {char* name; char* classname; char* dname; int vaddr; scalar_t__ paddr; int type; } ;
struct TYPE_11__ {TYPE_1__* bin; int config; } ;
struct TYPE_10__ {char const* name; int * demname; int * demflag; int * methflag; int * methname; int * classflag; int * classname; void* nameflag; } ;
struct TYPE_9__ {int cur; } ;
typedef TYPE_2__ SymName ;
typedef TYPE_3__ RCore ;
typedef TYPE_4__ RBinSymbol ;


 int VAR_0 ;
 void* FUNC_0 (char const*,int *,int) ;
 char* FUNC_1 (int ) ;
 int * FUNC_2 (int ,char const*,char const*,int ,int) ;
 int * FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int) ;
 void* FUNC_6 (char*,int *,char const*) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(RCore *VAR_1, SymName *VAR_2, RBinSymbol *VAR_3, const char *VAR_4) {
 int VAR_5 = VAR_4 != ((void*)0);
 bool VAR_6 = FUNC_4 (VAR_1->config, "bin.demangle.libs");
 if (!VAR_1 || !VAR_3 || !VAR_3->name) {
  return;
 }
 VAR_2->name = FUNC_7 (VAR_3->name);
 const char *VAR_7 = FUNC_1 (VAR_3->type);
 VAR_2->nameflag = FUNC_0 (VAR_7, FUNC_3 (VAR_3), VAR_0);
 if (VAR_3->classname && VAR_3->classname[0]) {
  VAR_2->classname = FUNC_7 (VAR_3->classname);
  VAR_2->classflag = FUNC_6 ("sym.%s.%s", VAR_2->classname, VAR_2->name);
  FUNC_5 (VAR_2->classflag, VAR_0);
  const char *VAR_8 = VAR_3->dname? VAR_3->dname: VAR_3->name;
  VAR_2->methname = FUNC_6 ("%s::%s", VAR_2->classname, VAR_8);
  VAR_2->methflag = FUNC_6 ("sym.%s.%s", VAR_2->classname, VAR_8);
  FUNC_5 (VAR_2->methflag, FUNC_8 (VAR_2->methflag));
 } else {
  VAR_2->classname = ((void*)0);
  VAR_2->classflag = ((void*)0);
  VAR_2->methname = ((void*)0);
  VAR_2->methflag = ((void*)0);
 }
 VAR_2->demname = ((void*)0);
 VAR_2->demflag = ((void*)0);
 if (VAR_5 && VAR_3->paddr) {
  VAR_2->demname = FUNC_2 (VAR_1->bin->cur, VAR_4, VAR_2->name, VAR_3->vaddr, VAR_6);
  if (VAR_2->demname) {
   VAR_2->demflag = FUNC_0 (VAR_7, VAR_2->demname, -1);
  }
 }
}
