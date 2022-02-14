
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {void* data; } ;
typedef int _ports ;
typedef int __be32 ;


 int * FUNC_0 (struct sk_buff const*,int,int,void*,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff const*) ;

__be32 FUNC_3(const struct sk_buff *VAR_0, int VAR_1, u8 VAR_2,
       void *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_1(VAR_2);

 if (!VAR_3) {
  VAR_3 = VAR_0->data;
  VAR_4 = FUNC_2(VAR_0);
 }

 if (VAR_5 >= 0) {
  __be32 *VAR_6, VAR_7;

  VAR_6 = FUNC_0(VAR_0, VAR_1 + VAR_5,
          sizeof(VAR_7), VAR_3, VAR_4, &VAR_7);
  if (VAR_6)
   return *VAR_6;
 }

 return 0;
}
