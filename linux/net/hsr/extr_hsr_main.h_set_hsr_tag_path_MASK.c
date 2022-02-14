
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hsr_tag {int path_and_LSDU_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct hsr_tag *VAR_0, u16 VAR_1)
{
 VAR_0->path_and_LSDU_size =
  FUNC_0((FUNC_1(VAR_0->path_and_LSDU_size) & 0x0FFF) | (VAR_1 << 12));
}
