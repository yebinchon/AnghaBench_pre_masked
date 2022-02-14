
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct key*) ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (int *,int ,int ) ;

int FUNC_3(struct key *VAR_4, bool VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_4->flags, VAR_1,
     VAR_5 ? VAR_2 : VAR_3);
 if (VAR_6)
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;
 return FUNC_1(VAR_4);
}
