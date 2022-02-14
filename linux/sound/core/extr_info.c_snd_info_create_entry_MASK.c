
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {int mode; int access; int children; int list; struct module* module; struct snd_info_entry* parent; int content; int * name; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct snd_info_entry*) ;
 int * FUNC_2 (char const*,int ) ;
 struct snd_info_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct snd_info_entry *
FUNC_8(const char *VAR_3, struct snd_info_entry *VAR_4,
        struct module *VAR_5)
{
 struct snd_info_entry *VAR_6;
 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_6->name = FUNC_2(VAR_3, VAR_0);
 if (VAR_6->name == ((void*)0)) {
  FUNC_1(VAR_6);
  return ((void*)0);
 }
 VAR_6->mode = VAR_2 | 0444;
 VAR_6->content = VAR_1;
 FUNC_5(&VAR_6->access);
 FUNC_0(&VAR_6->children);
 FUNC_0(&VAR_6->list);
 VAR_6->parent = VAR_4;
 VAR_6->module = VAR_5;
 if (VAR_4) {
  FUNC_6(&VAR_4->access);
  FUNC_4(&VAR_6->list, &VAR_4->children);
  FUNC_7(&VAR_4->access);
 }
 return VAR_6;
}
