
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_class_key {int dummy; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (uintptr_t,int ) ;
 struct hlist_head* VAR_1 ;

__attribute__((used)) static inline struct hlist_head *FUNC_1(const struct lock_class_key *VAR_2)
{
 unsigned long VAR_3 = FUNC_0((uintptr_t)VAR_2, VAR_0);

 return VAR_1 + VAR_3;
}
