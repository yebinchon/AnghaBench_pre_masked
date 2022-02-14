
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a4; } ;
typedef TYPE_1__ xfrm_address_t ;
typedef int __u8 ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_3(const xfrm_address_t *VAR_0,
          const xfrm_address_t *VAR_1,
          __u8 VAR_2,
          __u8 VAR_3)
{
 return FUNC_1(FUNC_2(VAR_0->a4) & FUNC_0(VAR_2),
       FUNC_2(VAR_1->a4) & FUNC_0(VAR_3),
       0);
}
