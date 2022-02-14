
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct aifs_status {int streams; } ;



__attribute__((used)) static inline void FUNC_0(struct aifs_status *VAR_0,
  int VAR_1, bool VAR_2)
{
 u8 VAR_3 = ~(0x01 << (VAR_1 * 2 + !VAR_2));

 VAR_0->streams &= VAR_3;
}
