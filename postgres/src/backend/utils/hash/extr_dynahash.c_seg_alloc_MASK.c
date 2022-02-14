
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ssize; scalar_t__ (* alloc ) (int) ;int hcxt; } ;
typedef TYPE_1__ HTAB ;
typedef int * HASHSEGMENT ;
typedef int HASHBUCKET ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static HASHSEGMENT
FUNC_2(HTAB *VAR_1)
{
 HASHSEGMENT VAR_2;

 VAR_0 = VAR_1->hcxt;
 VAR_2 = (HASHSEGMENT) VAR_1->alloc(sizeof(HASHBUCKET) * VAR_1->ssize);

 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_2, 0, sizeof(HASHBUCKET) * VAR_1->ssize);

 return VAR_2;
}
