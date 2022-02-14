
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t w_pos; char** w; scalar_t__ avail; } ;
struct tomoyo_io_buffer {size_t read_user_buf_avail; TYPE_1__ r; scalar_t__ read_user_buf; scalar_t__ poll; } ;


 scalar_t__ FUNC_0 (scalar_t__,char const*,int) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static bool FUNC_2(struct tomoyo_io_buffer *VAR_0)
{
 while (VAR_0->r.w_pos) {
  const char *VAR_1 = VAR_0->r.w[0];
  size_t VAR_2 = FUNC_1(VAR_1);

  if (VAR_2) {
   if (VAR_2 > VAR_0->read_user_buf_avail)
    VAR_2 = VAR_0->read_user_buf_avail;
   if (!VAR_2)
    return 0;
   if (FUNC_0(VAR_0->read_user_buf, VAR_1, VAR_2))
    return 0;
   VAR_0->read_user_buf_avail -= VAR_2;
   VAR_0->read_user_buf += VAR_2;
   VAR_1 += VAR_2;
  }
  VAR_0->r.w[0] = VAR_1;
  if (*VAR_1)
   return 0;

  if (VAR_0->poll) {
   if (!VAR_0->read_user_buf_avail ||
       FUNC_0(VAR_0->read_user_buf, "", 1))
    return 0;
   VAR_0->read_user_buf_avail--;
   VAR_0->read_user_buf++;
  }
  VAR_0->r.w_pos--;
  for (VAR_2 = 0; VAR_2 < VAR_0->r.w_pos; VAR_2++)
   VAR_0->r.w[VAR_2] = VAR_0->r.w[VAR_2 + 1];
 }
 VAR_0->r.avail = 0;
 return 1;
}
