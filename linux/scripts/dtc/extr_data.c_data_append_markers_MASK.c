
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct marker {struct marker* next; } ;
struct data {struct marker* markers; } ;



__attribute__((used)) static struct data FUNC_0(struct data VAR_0, struct marker *VAR_1)
{
 struct marker **VAR_2 = &VAR_0.markers;


 while (*VAR_2)
  VAR_2 = &((*VAR_2)->next);
 *VAR_2 = VAR_1;
 return VAR_0;
}
