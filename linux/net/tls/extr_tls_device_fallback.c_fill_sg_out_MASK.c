
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int dummy; } ;
struct sk_buff {void* data; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scatterlist*,void*,int) ;

__attribute__((used)) static void FUNC_1(struct scatterlist VAR_1[3], void *VAR_2,
   struct tls_context *VAR_3,
   struct sk_buff *VAR_4,
   int VAR_5,
   int VAR_6,
   int VAR_7,
   void *VAR_8)
{
 FUNC_0(&VAR_1[0], VAR_8, VAR_7);
 FUNC_0(&VAR_1[1], VAR_4->data + VAR_5, VAR_6);

 VAR_8 += VAR_7;
 FUNC_0(&VAR_1[2], VAR_8, VAR_0);
}
