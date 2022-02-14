
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int _u ;
typedef int __be16 ;


 int * FUNC_0 (struct sk_buff const*,int,int,void*,int,int *) ;

__attribute__((used)) static __be16 FUNC_1(const struct sk_buff *VAR_0, int VAR_1,
    void *VAR_2, int VAR_3)
{
 __be16 *VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1, sizeof(VAR_5), VAR_2, VAR_3, &VAR_5);
 if (VAR_4)
  return *VAR_4;

 return 0;
}
