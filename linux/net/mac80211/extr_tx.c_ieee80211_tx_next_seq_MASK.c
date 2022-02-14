
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sta_info {int* tid_seq; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static __le16 FUNC_1(struct sta_info *VAR_1, int VAR_2)
{
 u16 *VAR_3 = &VAR_1->tid_seq[VAR_2];
 __le16 VAR_4 = FUNC_0(*VAR_3);


 *VAR_3 = (*VAR_3 + 0x10) & VAR_0;

 return VAR_4;
}
