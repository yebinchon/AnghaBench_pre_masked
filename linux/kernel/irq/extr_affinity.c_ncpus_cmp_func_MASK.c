
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_vectors {int ncpus; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct node_vectors *VAR_2 = VAR_0;
 const struct node_vectors *VAR_3 = VAR_1;

 return VAR_2->ncpus - VAR_3->ncpus;
}
