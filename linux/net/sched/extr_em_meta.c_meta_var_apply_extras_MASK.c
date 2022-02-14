
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shift; } ;
struct meta_value {TYPE_1__ hdr; } ;
struct meta_obj {int len; } ;



__attribute__((used)) static void FUNC_0(struct meta_value *VAR_0,
      struct meta_obj *VAR_1)
{
 int VAR_2 = VAR_0->hdr.shift;

 if (VAR_2 && VAR_2 < VAR_1->len)
  VAR_1->len -= VAR_2;
}
