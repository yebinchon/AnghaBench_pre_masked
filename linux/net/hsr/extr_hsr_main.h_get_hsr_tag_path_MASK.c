
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hsr_tag {int path_and_LSDU_size; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u16 FUNC_1(struct hsr_tag *VAR_0)
{
 return FUNC_0(VAR_0->path_and_LSDU_size) >> 12;
}
