
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_dev {char const* type; int lecs; int local; int lock; int link_rate; int signal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct atm_dev* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct atm_dev *FUNC_3(const char *VAR_3)
{
 struct atm_dev *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return ((void*)0);
 VAR_4->type = VAR_3;
 VAR_4->signal = VAR_1;
 VAR_4->link_rate = VAR_0;
 FUNC_2(&VAR_4->lock);
 FUNC_0(&VAR_4->local);
 FUNC_0(&VAR_4->lecs);

 return VAR_4;
}
