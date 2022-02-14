
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strfilter_node {int dummy; } ;
struct strfilter {struct strfilter_node* root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strfilter_node* FUNC_0 (int ,struct strfilter_node*,struct strfilter_node*) ;
 int FUNC_1 (struct strfilter_node*) ;
 struct strfilter_node* FUNC_2 (char const*,char const**) ;

__attribute__((used)) static int FUNC_3(struct strfilter *VAR_4, bool VAR_5,
        const char *VAR_6, const char **VAR_7)
{
 struct strfilter_node *VAR_8, *VAR_9;
 const char *VAR_10 = ((void*)0);

 if (!VAR_4 || !VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_6, &VAR_10);
 if (!VAR_8 || *VAR_10 != '\0') {
  if (VAR_7)
   *VAR_7 = VAR_10;
  goto error;
 }
 VAR_9 = FUNC_0(VAR_5 ? VAR_3 : VAR_2, VAR_4->root, VAR_8);
 if (!VAR_9) {
  VAR_10 = ((void*)0);
  goto error;
 }

 VAR_4->root = VAR_9;
 return 0;

error:
 FUNC_1(VAR_8);
 return VAR_10 ? -VAR_0 : -VAR_1;
}
