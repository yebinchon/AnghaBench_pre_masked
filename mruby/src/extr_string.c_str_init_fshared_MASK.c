
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct RString* fshared; } ;
struct TYPE_5__ {TYPE_1__ aux; int len; int ptr; } ;
struct TYPE_6__ {TYPE_2__ heap; } ;
struct RString {TYPE_3__ as; } ;


 int VAR_0 ;
 int FUNC_0 (struct RString*,int ) ;

__attribute__((used)) static struct RString*
FUNC_1(const struct RString *VAR_1, struct RString *VAR_2, struct RString *VAR_3)
{
  VAR_2->as.heap.ptr = VAR_1->as.heap.ptr;
  VAR_2->as.heap.len = VAR_1->as.heap.len;
  VAR_2->as.heap.aux.fshared = VAR_3;
  FUNC_0(VAR_2, VAR_0);
  return VAR_2;
}
