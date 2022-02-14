
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct net_dm_hw_metadata {int trap_name; int trap_group_name; } ;
struct TYPE_2__ {scalar_t__ hdrsize; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static size_t
FUNC_5(size_t VAR_2,
        const struct net_dm_hw_metadata *VAR_3)
{
 size_t VAR_4;

 VAR_4 = FUNC_3(VAR_0 + VAR_1.hdrsize);

 return FUNC_0(VAR_4) +

        FUNC_2(sizeof(u16)) +

        FUNC_2(FUNC_4(VAR_3->trap_group_name) + 1) +

        FUNC_2(FUNC_4(VAR_3->trap_name) + 1) +

        FUNC_1() +

        FUNC_2(sizeof(u64)) +

        FUNC_2(sizeof(u32)) +

        FUNC_2(sizeof(u16)) +

        FUNC_2(VAR_2);
}
