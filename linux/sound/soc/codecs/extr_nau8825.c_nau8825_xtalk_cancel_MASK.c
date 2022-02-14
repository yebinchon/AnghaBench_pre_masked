
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8825 {scalar_t__ xtalk_state; int xtalk_protect; int xtalk_work; scalar_t__ xtalk_enable; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nau8825*) ;
 int FUNC_2 (struct nau8825*,int) ;

__attribute__((used)) static void FUNC_3(struct nau8825 *VAR_1)
{




 if (VAR_1->xtalk_enable && VAR_1->xtalk_state !=
  VAR_0) {
  FUNC_0(&VAR_1->xtalk_work);
  FUNC_2(VAR_1, 1);
 }

 FUNC_1(VAR_1);
 VAR_1->xtalk_state = VAR_0;
 VAR_1->xtalk_protect = 0;
}
