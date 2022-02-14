
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int db_id; } ;
struct machine {int dummy; } ;
struct db_export {int dummy; } ;
struct comm {int dummy; } ;


 int FUNC_0 (struct db_export*,struct comm*,struct thread*) ;
 int FUNC_1 (struct db_export*,struct comm*,struct thread*) ;
 int FUNC_2 (struct db_export*,struct comm*,struct thread*) ;
 int FUNC_3 (struct db_export*,struct thread*,struct machine*,struct thread*) ;
 struct comm* FUNC_4 (struct machine*,struct thread*) ;
 struct comm* FUNC_5 (struct thread*) ;

__attribute__((used)) static int FUNC_6(struct db_export *VAR_0, struct thread *VAR_1,
         struct thread *VAR_2,
         struct machine *VAR_3, struct comm **VAR_4)
{
 struct comm *VAR_5 = ((void*)0);
 struct comm *VAR_6;
 int VAR_7;

 if (VAR_2) {




  VAR_7 = FUNC_3(VAR_0, VAR_2, VAR_3, VAR_2);
  if (VAR_7)
   return VAR_7;




  VAR_5 = FUNC_4(VAR_3, VAR_2);
  if (VAR_5) {
   VAR_7 = FUNC_2(VAR_0, VAR_5, VAR_2);
   if (VAR_7)
    return VAR_7;
   *VAR_4 = VAR_5;
  }
 }

 if (VAR_1 != VAR_2) {




  bool VAR_8 = VAR_5 && !VAR_1->db_id;

  VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_3, VAR_2);
  if (VAR_7)
   return VAR_7;

  if (VAR_8) {
   VAR_7 = FUNC_1(VAR_0, VAR_5, VAR_1);
   if (VAR_7)
    return VAR_7;
  }
 }

 VAR_6 = FUNC_5(VAR_1);
 if (VAR_6)
  return FUNC_0(VAR_0, VAR_6, VAR_1);

 return 0;
}
