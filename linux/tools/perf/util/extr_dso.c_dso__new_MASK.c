
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; int open_entry; int status; int cache; } ;
struct dso {int is_64_bit; int has_srcline; int a2l_fails; int refcnt; int lock; TYPE_1__ data; int node; int * root; int rb_node; int comp; int needs_swap; int kernel; scalar_t__ has_build_id; scalar_t__ sorted_by_name; scalar_t__ rel; scalar_t__ loaded; void* binary_type; void* symtab_type; void* srclines; void* inlined_nodes; void* symbol_names; void* symbols; int name; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 void* VAR_6 ;
 struct dso* FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct dso*,int ,int) ;
 int FUNC_4 (struct dso*,int ,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;

struct dso *FUNC_9(const char *VAR_7)
{
 struct dso *VAR_8 = FUNC_2(1, sizeof(*VAR_8) + FUNC_8(VAR_7) + 1);

 if (VAR_8 != ((void*)0)) {
  FUNC_7(VAR_8->name, VAR_7);
  FUNC_3(VAR_8, VAR_8->name, 0);
  FUNC_4(VAR_8, VAR_8->name, 0);
  VAR_8->symbols = VAR_8->symbol_names = VAR_6;
  VAR_8->data.cache = VAR_5;
  VAR_8->inlined_nodes = VAR_6;
  VAR_8->srclines = VAR_6;
  VAR_8->data.fd = -1;
  VAR_8->data.status = VAR_2;
  VAR_8->symtab_type = VAR_1;
  VAR_8->binary_type = VAR_1;
  VAR_8->is_64_bit = (sizeof(void *) == 8);
  VAR_8->loaded = 0;
  VAR_8->rel = 0;
  VAR_8->sorted_by_name = 0;
  VAR_8->has_build_id = 0;
  VAR_8->has_srcline = 1;
  VAR_8->a2l_fails = 1;
  VAR_8->kernel = VAR_4;
  VAR_8->needs_swap = VAR_3;
  VAR_8->comp = VAR_0;
  FUNC_1(&VAR_8->rb_node);
  VAR_8->root = ((void*)0);
  FUNC_0(&VAR_8->node);
  FUNC_0(&VAR_8->data.open_entry);
  FUNC_5(&VAR_8->lock, ((void*)0));
  FUNC_6(&VAR_8->refcnt, 1);
 }

 return VAR_8;
}
