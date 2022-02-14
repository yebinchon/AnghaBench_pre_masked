
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hlist_head {int dummy; } ;
struct datapath {struct hlist_head* meters; } ;


 int VAR_0 ;

__attribute__((used)) static struct hlist_head *FUNC_0(const struct datapath *VAR_1,
         u32 VAR_2)
{
 return &VAR_1->meters[VAR_2 & (VAR_0 - 1)];
}
