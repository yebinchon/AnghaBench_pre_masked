
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_vcc {int * push_oam; int * pop; int * push; int * dev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct atm_vcc* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct atm_vcc*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct atm_vcc *VAR_9)
{
 FUNC_1();
 if (VAR_5) {
  FUNC_2();
  return -VAR_3;
 }

 FUNC_0(&VAR_7, VAR_8 + VAR_2 * VAR_4);

 VAR_5 = VAR_9;
 FUNC_3(VAR_0, &VAR_9->flags);
 FUNC_3(VAR_1, &VAR_9->flags);

 VAR_9->dev = &VAR_6;
 FUNC_5(FUNC_4(VAR_9));
 VAR_9->push = ((void*)0);
 VAR_9->pop = ((void*)0);
 VAR_9->push_oam = ((void*)0);
 FUNC_2();
 return 0;
}
