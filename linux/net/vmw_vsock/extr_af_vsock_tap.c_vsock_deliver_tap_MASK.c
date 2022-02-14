
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct sk_buff sk_buff ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_0 ;

void FUNC_6(struct sk_buff *VAR_1(void *VAR_2), void *VAR_3)
{
 struct sk_buff *VAR_4;

 FUNC_4();

 if (FUNC_2(FUNC_3(&VAR_0)))
  goto out;

 VAR_4 = VAR_1(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_4);
  FUNC_1(VAR_4);
 }

out:
 FUNC_5();
}
