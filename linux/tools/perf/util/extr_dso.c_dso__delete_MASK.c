
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int short_name_allocated; int long_name_allocated; char* symsrc_filename; int lock; int nsinfo; int auxtrace_cache; int long_name; int short_name; int symbols; int srclines; int inlined_nodes; int rb_node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dso*) ;
 int FUNC_3 (struct dso*) ;
 int FUNC_4 (struct dso*) ;
 int FUNC_5 (struct dso*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char**) ;

void FUNC_13(struct dso *VAR_0)
{
 if (!FUNC_0(&VAR_0->rb_node))
  FUNC_8("DSO %s is still in rbtree when being deleted!\n",
         VAR_0->long_name);


 FUNC_6(&VAR_0->inlined_nodes);
 FUNC_10(&VAR_0->srclines);
 FUNC_11(&VAR_0->symbols);

 if (VAR_0->short_name_allocated) {
  FUNC_12((char **)&VAR_0->short_name);
  VAR_0->short_name_allocated = 0;
 }

 if (VAR_0->long_name_allocated) {
  FUNC_12((char **)&VAR_0->long_name);
  VAR_0->long_name_allocated = 0;
 }

 FUNC_2(VAR_0);
 FUNC_1(VAR_0->auxtrace_cache);
 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
 FUNC_12(&VAR_0->symsrc_filename);
 FUNC_7(VAR_0->nsinfo);
 FUNC_9(&VAR_0->lock);
 FUNC_5(VAR_0);
}
