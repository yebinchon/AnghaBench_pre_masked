
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap {int dummy; } ;
struct btf_dump {int dummy; } ;


 int FUNC_0 (struct hashmap*,char const*,void**) ;
 int FUNC_1 (struct hashmap*,char const*,void*,int *,int *) ;

__attribute__((used)) static size_t FUNC_2(struct btf_dump *VAR_0, struct hashmap *VAR_1,
     const char *VAR_2)
{
 size_t VAR_3 = 0;

 FUNC_0(VAR_1, VAR_2, (void **)&VAR_3);
 VAR_3++;
 FUNC_1(VAR_1, VAR_2, (void *)VAR_3, ((void*)0), ((void*)0));

 return VAR_3;
}
