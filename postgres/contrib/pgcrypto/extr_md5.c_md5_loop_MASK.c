
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {unsigned int md5_n; unsigned int md5_i; int const* md5_buf; } ;
typedef TYPE_1__ md5_ctxt ;


 unsigned int VAR_0 ;
 int FUNC_0 (int const*,TYPE_1__*) ;
 int FUNC_1 (int const*,int const*,unsigned int) ;

void
FUNC_2(md5_ctxt *VAR_1, const uint8 *VAR_2, unsigned VAR_3)
{
 unsigned int VAR_4,
    VAR_5;

 VAR_1->md5_n += VAR_3 * 8;
 VAR_4 = VAR_0 - VAR_1->md5_i;

 if (VAR_3 >= VAR_4)
 {
  FUNC_1(VAR_1->md5_buf + VAR_1->md5_i, VAR_2, VAR_4);
  FUNC_0(VAR_1->md5_buf, VAR_1);

  for (VAR_5 = VAR_4; VAR_5 + VAR_0 <= VAR_3; VAR_5 += VAR_0)
   FUNC_0(VAR_2 + VAR_5, VAR_1);

  VAR_1->md5_i = VAR_3 - VAR_5;
  FUNC_1(VAR_1->md5_buf, VAR_2 + VAR_5, VAR_1->md5_i);
 }
 else
 {
  FUNC_1(VAR_1->md5_buf + VAR_1->md5_i, VAR_2, VAR_3);
  VAR_1->md5_i += VAR_3;
 }
}
