
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int __be16 ;


 unsigned long FUNC_0 (struct sk_buff const*,int,int,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static __be16 FUNC_2(const struct sk_buff *VAR_0, int VAR_1)
{
 unsigned long VAR_2;


 VAR_2 = FUNC_0(VAR_0, 4, VAR_1-4, 0);


 return VAR_2 ? FUNC_1((unsigned short)VAR_2) : FUNC_1(0xFFFF);
}
