
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static inline struct sk_buff* FUNC_2(unsigned int VAR_4)
{
 struct sk_buff *VAR_5;


 VAR_4 += VAR_3 + VAR_1 + VAR_2;
 VAR_4 &= ~(VAR_0 - 1);
 VAR_5 = FUNC_0(VAR_4 + VAR_0);

 if ( VAR_5 != ((void*)0) )
  FUNC_1(VAR_5, (~((unsigned int)VAR_5->data + (VAR_0 - 1)) & (VAR_0 - 1)) + VAR_3);
 return VAR_5;
}
