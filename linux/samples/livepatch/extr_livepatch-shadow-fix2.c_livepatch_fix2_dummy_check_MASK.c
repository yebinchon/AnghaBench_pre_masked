
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy {int jiffies_expire; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (struct dummy*,int ,int,int ,int *,int *) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static bool FUNC_2(struct dummy *VAR_2, unsigned long VAR_3)
{
 int *VAR_4;






 VAR_4 = FUNC_0(VAR_2, VAR_1,
    sizeof(*VAR_4), VAR_0,
    ((void*)0), ((void*)0));
 if (VAR_4)
  *VAR_4 += 1;

 return FUNC_1(VAR_3, VAR_2->jiffies_expire);
}
