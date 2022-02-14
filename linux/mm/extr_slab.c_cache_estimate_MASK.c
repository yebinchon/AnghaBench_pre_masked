
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int slab_flags_t ;
typedef int freelist_idx_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned long VAR_3, size_t VAR_4,
  slab_flags_t VAR_5, size_t *VAR_6)
{
 unsigned int VAR_7;
 size_t VAR_8 = VAR_2 << VAR_3;
 if (VAR_5 & (VAR_0 | VAR_1)) {
  VAR_7 = VAR_8 / VAR_4;
  *VAR_6 = VAR_8 % VAR_4;
 } else {
  VAR_7 = VAR_8 / (VAR_4 + sizeof(freelist_idx_t));
  *VAR_6 = VAR_8 %
   (VAR_4 + sizeof(freelist_idx_t));
 }

 return VAR_7;
}
