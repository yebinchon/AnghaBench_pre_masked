
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thread {int comm_set; int mg; int comm_list; } ;
struct comm {int list; } ;


 int VAR_0 ;
 struct comm* FUNC_0 (char const*,int ,int) ;
 int FUNC_1 (struct comm*,char const*,int ,int) ;
 int FUNC_2 (int *,int *) ;
 struct comm* FUNC_3 (struct thread*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct thread *VAR_1, const char *VAR_2,
    u64 VAR_3, bool VAR_4)
{
 struct comm *VAR_5, *VAR_6 = FUNC_3(VAR_1);


 if (!VAR_1->comm_set) {
  int VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4);
  if (VAR_7)
   return VAR_7;
 } else {
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
  if (!VAR_5)
   return -VAR_0;
  FUNC_2(&VAR_5->list, &VAR_1->comm_list);

  if (VAR_4)
   FUNC_4(VAR_1->mg);
 }

 VAR_1->comm_set = 1;

 return 0;
}
