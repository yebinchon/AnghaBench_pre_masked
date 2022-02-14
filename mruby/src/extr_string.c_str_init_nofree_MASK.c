
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ capa; } ;
struct TYPE_5__ {char* ptr; TYPE_1__ aux; scalar_t__ len; } ;
struct TYPE_6__ {TYPE_2__ heap; } ;
struct RString {TYPE_3__ as; } ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 int FUNC_0 (struct RString*,int ) ;

__attribute__((used)) static struct RString*
FUNC_1(struct RString *VAR_1, const char *VAR_2, size_t VAR_3)
{
  VAR_1->as.heap.ptr = (char *)VAR_2;
  VAR_1->as.heap.len = (mrb_int)VAR_3;
  VAR_1->as.heap.aux.capa = 0;
  FUNC_0(VAR_1, VAR_0);
  return VAR_1;
}
