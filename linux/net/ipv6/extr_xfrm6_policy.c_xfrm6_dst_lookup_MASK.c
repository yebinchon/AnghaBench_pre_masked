
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u32 ;
struct net {int dummy; } ;
struct flowi6 {int saddr; int daddr; int flowi6_mark; int flowi6_flags; int flowi6_oif; } ;
struct dst_entry {int error; } ;
typedef int fl6 ;


 struct dst_entry* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct dst_entry*) ;
 struct dst_entry* FUNC_2 (struct net*,int *,struct flowi6*) ;
 int FUNC_3 (struct net*,int) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (struct flowi6*,int ,int) ;

__attribute__((used)) static struct dst_entry *FUNC_6(struct net *VAR_1, int VAR_2, int VAR_3,
       const xfrm_address_t *VAR_4,
       const xfrm_address_t *VAR_5,
       u32 VAR_6)
{
 struct flowi6 VAR_7;
 struct dst_entry *VAR_8;
 int VAR_9;

 FUNC_5(&VAR_7, 0, sizeof(VAR_7));
 VAR_7 = FUNC_3(VAR_1, VAR_3);
 VAR_7 = VAR_0;
 VAR_7 = VAR_6;
 FUNC_4(&VAR_7, VAR_5, sizeof(VAR_7));
 if (VAR_4)
  FUNC_4(&VAR_7, VAR_4, sizeof(VAR_7));

 VAR_8 = FUNC_2(VAR_1, ((void*)0), &VAR_7);

 VAR_9 = VAR_8->error;
 if (VAR_8->error) {
  FUNC_1(VAR_8);
  VAR_8 = FUNC_0(VAR_9);
 }

 return VAR_8;
}
