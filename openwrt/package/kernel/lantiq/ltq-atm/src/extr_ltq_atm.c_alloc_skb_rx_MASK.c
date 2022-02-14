
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
typedef int skb ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static inline struct sk_buff* FUNC_4(void)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(VAR_2 + VAR_0);
 if ( VAR_3 != ((void*)0) ) {

  if ( ((unsigned int)VAR_3->data & (VAR_0 - 1)) != 0 )
   FUNC_3(VAR_3, ~((unsigned int)VAR_3->data + (VAR_0 - 1)) & (VAR_0 - 1));

  *((struct sk_buff **)VAR_3->data - 1) = VAR_3;

  FUNC_2((unsigned long)VAR_3->data - sizeof(VAR_3), sizeof(VAR_3));




  FUNC_1((unsigned long)VAR_3->data, VAR_2);

 }
 return VAR_3;
}
