
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct bitmap_port {scalar_t__ first_port; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct sk_buff *VAR_1, const struct bitmap_port *VAR_2, u32 VAR_3,
      size_t VAR_4)
{
 return FUNC_1(VAR_1, VAR_0,
        FUNC_0(VAR_2->first_port + VAR_3));
}
