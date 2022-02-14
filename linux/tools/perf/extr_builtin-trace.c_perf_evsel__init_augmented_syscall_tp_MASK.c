
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {int offset; int size; } ;
struct syscall_tp {int id; } ;
struct evsel {struct syscall_tp* priv; int needs_swap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ) ;
 struct syscall_tp* FUNC_1 (int) ;
 struct tep_format_field* FUNC_2 (struct evsel*,char*) ;
 int FUNC_3 (struct syscall_tp**) ;

__attribute__((used)) static int FUNC_4(struct evsel *VAR_2, struct evsel *VAR_3)
{
 struct syscall_tp *VAR_4 = VAR_2->priv = FUNC_1(sizeof(struct syscall_tp));

 if (VAR_2->priv != ((void*)0)) {
  struct tep_format_field *VAR_5 = FUNC_2(VAR_3, "id");
  if (VAR_5 == ((void*)0))
   VAR_5 = FUNC_2(VAR_3, "__syscall_nr");
  if (VAR_5 == ((void*)0))
   goto out_delete;
  if (FUNC_0(&VAR_4->id, VAR_5->size, VAR_5->offset, VAR_2->needs_swap))
   goto out_delete;

  return 0;
 }

 return -VAR_1;
out_delete:
 FUNC_3(&VAR_2->priv);
 return -VAR_0;
}
