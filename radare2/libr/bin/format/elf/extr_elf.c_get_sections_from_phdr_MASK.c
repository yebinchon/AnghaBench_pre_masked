
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_11__ {int e_phnum; } ;
struct TYPE_15__ {int dyn_entries; TYPE_3__* dyn_buf; TYPE_1__ ehdr; scalar_t__ phdr; } ;
struct TYPE_14__ {int last; } ;
struct TYPE_12__ {int d_ptr; int d_val; } ;
struct TYPE_13__ {int d_tag; TYPE_2__ d_un; } ;
typedef TYPE_4__ RBinElfSection ;
typedef TYPE_5__ ELFOBJ ;
 TYPE_4__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,int*,char*,int ,int ) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static RBinElfSection *FUNC_3(ELFOBJ *VAR_0) {
 RBinElfSection *VAR_1;
 int VAR_2, VAR_3 = 0;
 ut64 VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 ut64 VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 FUNC_2 (VAR_0 && VAR_0->phdr, ((void*)0));
 if (!VAR_0->ehdr.e_phnum || !VAR_0->dyn_buf) {
  return ((void*)0);
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->dyn_entries; VAR_2++) {
  switch (VAR_0->dyn_buf[VAR_2].d_tag) {
  case 131:
   VAR_4 = VAR_0->dyn_buf[VAR_2].d_un.d_ptr;
   VAR_3++;
   break;
  case 130:
   VAR_7 = VAR_0->dyn_buf[VAR_2].d_un.d_ptr;
   VAR_3++;
   break;
  case 128:
   VAR_8 = VAR_0->dyn_buf[VAR_2].d_un.d_val;
   break;
  case 129:
   VAR_9 = VAR_0->dyn_buf[VAR_2].d_un.d_val;
   break;
  case 133:
   VAR_6 = VAR_0->dyn_buf[VAR_2].d_un.d_ptr;
   VAR_3++;
   break;
  case 132:
   VAR_10 = VAR_0->dyn_buf[VAR_2].d_un.d_val;
   break;
  case 134:
   VAR_5 = VAR_0->dyn_buf[VAR_2].d_un.d_ptr;
   VAR_3++;
   break;
  default: break;
  }
 }
 VAR_1 = FUNC_0 (VAR_3 + 1, sizeof(RBinElfSection));
 if (!VAR_1) {
  return ((void*)0);
 }
 VAR_2 = 0;
 FUNC_1 (VAR_0, VAR_1, &VAR_2, ".rel.dyn", VAR_4, VAR_8);
 FUNC_1 (VAR_0, VAR_1, &VAR_2, ".rela.plt", VAR_5, VAR_10);
 FUNC_1 (VAR_0, VAR_1, &VAR_2, ".rel.plt", VAR_7, VAR_9);
 FUNC_1 (VAR_0, VAR_1, &VAR_2, ".got.plt", VAR_6, VAR_10);
 VAR_1[VAR_2].last = 1;
 return VAR_1;
}
