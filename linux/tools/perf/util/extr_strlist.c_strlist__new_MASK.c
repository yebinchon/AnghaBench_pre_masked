
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strlist_config {char* dirname; int file_only; int dont_dupstr; } ;
struct TYPE_2__ {int node_delete; int node_new; int node_cmp; } ;
struct strlist {int dupstr; int file_only; TYPE_1__ rblist; } ;


 int FUNC_0 (struct strlist*) ;
 struct strlist* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct strlist*,char const*,char const*) ;

struct strlist *FUNC_4(const char *VAR_3, const struct strlist_config *VAR_4)
{
 struct strlist *VAR_5 = FUNC_1(sizeof(*VAR_5));

 if (VAR_5 != ((void*)0)) {
  bool VAR_6 = 1;
  bool VAR_7 = 0;
  const char *VAR_8 = ((void*)0);

  if (VAR_4) {
   VAR_6 = !VAR_4->dont_dupstr;
   VAR_8 = VAR_4->dirname;
   VAR_7 = VAR_4->file_only;
  }

  FUNC_2(&VAR_5->rblist);
  VAR_5->rblist.node_cmp = VAR_0;
  VAR_5->rblist.node_new = VAR_2;
  VAR_5->rblist.node_delete = VAR_1;

  VAR_5->dupstr = VAR_6;
  VAR_5->file_only = VAR_7;

  if (VAR_3 && FUNC_3(VAR_5, VAR_3, VAR_8) != 0)
   goto out_error;
 }

 return VAR_5;
out_error:
 FUNC_0(VAR_5);
 return ((void*)0);
}
