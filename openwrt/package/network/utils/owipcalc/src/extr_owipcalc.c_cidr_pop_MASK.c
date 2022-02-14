
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cidr {struct cidr* next; } ;


 int FUNC_0 (struct cidr*) ;
 struct cidr* VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct cidr *VAR_1)
{
 struct cidr *VAR_2 = VAR_0;

 if (VAR_2)
 {
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_2);

  return 1;
 }

 return 0;
}
