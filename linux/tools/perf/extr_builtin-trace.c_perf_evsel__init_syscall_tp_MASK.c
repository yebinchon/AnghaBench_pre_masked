
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_tp {int id; } ;
struct evsel {struct syscall_tp* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct syscall_tp* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct evsel*,int *,char*) ;
 int FUNC_2 (struct syscall_tp**) ;

__attribute__((used)) static int FUNC_3(struct evsel *VAR_2)
{
 struct syscall_tp *VAR_3 = VAR_2->priv = FUNC_0(sizeof(struct syscall_tp));

 if (VAR_2->priv != ((void*)0)) {
  if (FUNC_1(VAR_2, &VAR_3->id, "__syscall_nr") &&
      FUNC_1(VAR_2, &VAR_3->id, "nr"))
   goto out_delete;
  return 0;
 }

 return -VAR_1;
out_delete:
 FUNC_2(&VAR_2->priv);
 return -VAR_0;
}
