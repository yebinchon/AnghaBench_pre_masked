
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;


 unsigned long VAR_0 ;
 struct hlist_head* VAR_1 ;

__attribute__((used)) static struct hlist_head *FUNC_0(void *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_2;

 VAR_3 ^= VAR_3 >> 16;
 VAR_3 ^= VAR_3 >> 8;
 VAR_3 %= VAR_0;
 return &VAR_1[VAR_0 + VAR_3];
}
