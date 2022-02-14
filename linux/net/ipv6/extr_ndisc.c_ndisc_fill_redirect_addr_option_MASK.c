
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,void*,int ) ;
 int FUNC_1 (int ,struct sk_buff*,int const*) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_2,
         void *VAR_3,
         const u8 *VAR_4)
{
 FUNC_0(VAR_2, VAR_1, VAR_3, VAR_0);
 FUNC_1(VAR_2->dev, VAR_2, VAR_4);
}
