
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {size_t* b64; } ;
struct TYPE_3__ {int * b8; } ;
struct sha1_ctxt {TYPE_2__ c; TYPE_1__ m; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (struct sha1_ctxt*) ;

void
FUNC_2(struct sha1_ctxt *VAR_1, const uint8 *VAR_2, size_t VAR_3)
{
 const uint8 *VAR_4;
 size_t VAR_5;
 size_t VAR_6;
 size_t VAR_7;
 size_t VAR_8;

 VAR_4 = (const uint8 *) VAR_2;
 VAR_7 = 0;

 while (VAR_7 < VAR_3)
 {
  VAR_6 = VAR_0 % 64;
  VAR_5 = 64 - VAR_6;

  VAR_8 = (VAR_5 < VAR_3 - VAR_7) ? VAR_5 : VAR_3 - VAR_7;
  FUNC_0(&VAR_1->m.b8[VAR_6], &VAR_4[VAR_7], VAR_8);
  VAR_0 += VAR_8;
  VAR_0 %= 64;
  VAR_1->c.b64[0] += VAR_8 * 8;
  if (VAR_0 % 64 == 0)
   FUNC_1(VAR_1);
  VAR_7 += VAR_8;
 }
}
