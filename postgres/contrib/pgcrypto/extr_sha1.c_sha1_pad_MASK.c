
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* b8; } ;
struct TYPE_3__ {int * b8; } ;
struct sha1_ctxt {TYPE_2__ c; TYPE_1__ m; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (struct sha1_ctxt*) ;

void
FUNC_3(struct sha1_ctxt *VAR_1)
{
 size_t VAR_2;
 size_t VAR_3;

 FUNC_0(0x80);

 VAR_3 = VAR_0 % 64;
 VAR_2 = 64 - VAR_3;
 if (VAR_2 < 8)
 {
  FUNC_1(&VAR_1->m.b8[VAR_3], 0, VAR_2);
  VAR_0 += VAR_2;
  VAR_0 %= 64;
  FUNC_2(VAR_1);
  VAR_3 = VAR_0 % 64;
  VAR_2 = 64 - VAR_3;
 }
 FUNC_1(&VAR_1->m.b8[VAR_3], 0, VAR_2 - 8);
 VAR_0 += (VAR_2 - 8);
 VAR_0 %= 64;
 FUNC_0(VAR_1->c.b8[7]);
 FUNC_0(VAR_1->c.b8[6]);
 FUNC_0(VAR_1->c.b8[5]);
 FUNC_0(VAR_1->c.b8[4]);
 FUNC_0(VAR_1->c.b8[3]);
 FUNC_0(VAR_1->c.b8[2]);
 FUNC_0(VAR_1->c.b8[1]);
 FUNC_0(VAR_1->c.b8[0]);

}
