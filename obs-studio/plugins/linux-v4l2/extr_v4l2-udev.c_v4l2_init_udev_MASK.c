
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_6(void)
{
 FUNC_2(&VAR_3);


 if (VAR_4 == 0) {
  if (FUNC_0(&VAR_1, VAR_0) != 0)
   goto fail;
  if (FUNC_1(&VAR_7, ((void*)0), VAR_2,
       ((void*)0)) != 0)
   goto fail;

  VAR_5 = FUNC_5();
  if (!VAR_5)
   goto fail;
  FUNC_4(VAR_5, VAR_6);
 }
 VAR_4++;

fail:
 FUNC_3(&VAR_3);
}
