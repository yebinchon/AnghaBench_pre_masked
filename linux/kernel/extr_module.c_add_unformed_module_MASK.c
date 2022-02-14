
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {scalar_t__ state; int list; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct module* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct module*) ;
 int FUNC_4 (struct module*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct module *VAR_6)
{
 int VAR_7;
 struct module *VAR_8;

 VAR_6->state = VAR_2;

again:
 FUNC_5(&VAR_3);
 VAR_8 = FUNC_0(VAR_6->name, FUNC_7(VAR_6->name), 1);
 if (VAR_8 != ((void*)0)) {
  if (VAR_8->state != VAR_1) {

   FUNC_6(&VAR_3);
   VAR_7 = FUNC_8(VAR_4,
            FUNC_1(VAR_6->name));
   if (VAR_7)
    goto out_unlocked;
   goto again;
  }
  VAR_7 = -VAR_0;
  goto out;
 }
 FUNC_4(VAR_6);
 FUNC_2(&VAR_6->list, &VAR_5);
 FUNC_3(VAR_6);
 VAR_7 = 0;

out:
 FUNC_6(&VAR_3);
out_unlocked:
 return VAR_7;
}
