
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmalloced_param {void* val; int list; } ;


 int VAR_0 ;
 struct kmalloced_param* FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void *FUNC_4(unsigned int VAR_3)
{
 struct kmalloced_param *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4) + VAR_3, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_2(&VAR_2);
 FUNC_1(&VAR_4->list, &VAR_1);
 FUNC_3(&VAR_2);

 return VAR_4->val;
}
