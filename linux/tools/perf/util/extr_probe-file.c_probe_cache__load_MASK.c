
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_cache_entry {int sdt; int tevlist; int node; int pev; scalar_t__ spev; } ;
struct probe_cache {int entries; int fd; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (struct probe_cache_entry*) ;
 struct probe_cache_entry* FUNC_9 (int *) ;
 char* FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static int FUNC_13(struct probe_cache *VAR_4)
{
 struct probe_cache_entry *VAR_5 = ((void*)0);
 char VAR_6[VAR_2], *VAR_7;
 int VAR_8 = 0, VAR_9;
 FILE *VAR_10;

 VAR_9 = FUNC_1(VAR_4->fd);
 if (VAR_9 < 0)
  return -VAR_3;
 VAR_10 = FUNC_3(VAR_9, "r");
 if (!VAR_10) {
  FUNC_0(VAR_9);
  return -VAR_0;
 }

 while (!FUNC_4(VAR_10)) {
  if (!FUNC_5(VAR_6, VAR_2, VAR_10))
   break;
  VAR_7 = FUNC_10(VAR_6, '\n');
  if (VAR_7)
   *VAR_7 = '\0';

  if (VAR_6[0] == '#' || VAR_6[0] == '%') {
   VAR_5 = FUNC_9(((void*)0));
   if (!VAR_5) {
    VAR_8 = -VAR_1;
    goto out;
   }
   if (VAR_6[0] == '%')
    VAR_5->sdt = 1;
   VAR_5->spev = FUNC_11(VAR_6 + 1);
   if (VAR_5->spev)
    VAR_8 = FUNC_7(VAR_6 + 1,
        &VAR_5->pev);
   else
    VAR_8 = -VAR_1;
   if (VAR_8 < 0) {
    FUNC_8(VAR_5);
    goto out;
   }
   FUNC_6(&VAR_5->node, &VAR_4->entries);
  } else {
   if (!VAR_5) {
    VAR_8 = -VAR_0;
    goto out;
   }
   FUNC_12(VAR_5->tevlist, VAR_6);
  }
 }
out:
 FUNC_2(VAR_10);
 return VAR_8;
}
