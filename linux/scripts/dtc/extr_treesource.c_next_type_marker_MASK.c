
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct marker {struct marker* next; } ;


 int FUNC_0 (struct marker*) ;

__attribute__((used)) static struct marker *FUNC_1(struct marker *VAR_0)
{
 while (VAR_0 && !FUNC_0(VAR_0))
  VAR_0 = VAR_0->next;
 return VAR_0;
}
