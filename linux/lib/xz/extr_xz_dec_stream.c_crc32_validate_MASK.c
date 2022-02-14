
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xz_dec {int pos; int crc32; } ;
struct xz_buf {scalar_t__ in_pos; scalar_t__ in_size; int* in; } ;
typedef enum xz_ret { ____Placeholder_xz_ret } xz_ret ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum xz_ret FUNC_0(struct xz_dec *VAR_3, struct xz_buf *VAR_4)
{
 do {
  if (VAR_4->in_pos == VAR_4->in_size)
   return VAR_1;

  if (((VAR_3->crc32 >> VAR_3->pos) & 0xFF) != VAR_4->in[VAR_4->in_pos++])
   return VAR_0;

  VAR_3->pos += 8;

 } while (VAR_3->pos < 32);

 VAR_3->crc32 = 0;
 VAR_3->pos = 0;

 return VAR_2;
}
