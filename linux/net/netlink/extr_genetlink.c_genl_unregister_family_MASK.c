
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_family {int attrbuf; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct genl_family const*,int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct genl_family const*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int) ;

int FUNC_11(const struct genl_family *VAR_6)
{
 FUNC_3();

 if (!FUNC_2(VAR_6->id)) {
  FUNC_5();
  return -VAR_1;
 }

 FUNC_6(VAR_6);

 FUNC_7(&VAR_3, VAR_6->id);

 FUNC_9(&VAR_2);
 FUNC_10(VAR_5,
     FUNC_0(&VAR_4) == 0);
 FUNC_4();

 FUNC_8(VAR_6->attrbuf);

 FUNC_1(VAR_0, VAR_6, ((void*)0), 0);

 return 0;
}
