
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_tp {int dummy; } ;
struct evsel {int * priv; void* handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct evsel*,int ) ;
 int FUNC_2 (int **) ;

__attribute__((used)) static int FUNC_3(struct evsel *VAR_3, void *VAR_4)
{
 VAR_3->priv = FUNC_0(sizeof(struct syscall_tp));
 if (VAR_3->priv != ((void*)0)) {
  if (FUNC_1(VAR_3, VAR_2))
   goto out_delete;

  VAR_3->handler = VAR_4;
  return 0;
 }

 return -VAR_1;

out_delete:
 FUNC_2(&VAR_3->priv);
 return -VAR_0;
}
