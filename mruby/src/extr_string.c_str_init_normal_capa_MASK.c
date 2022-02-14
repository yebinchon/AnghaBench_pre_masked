
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* capa; } ;
struct TYPE_6__ {char* ptr; TYPE_1__ aux; void* len; } ;
struct TYPE_5__ {TYPE_3__ heap; } ;
struct RString {TYPE_2__ as; } ;
typedef int mrb_state ;
typedef void* mrb_int ;


 int FUNC_0 (struct RString*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 scalar_t__ FUNC_2 (int *,size_t) ;

__attribute__((used)) static struct RString*
FUNC_3(mrb_state *VAR_0, struct RString *VAR_1,
                     const char *VAR_2, size_t VAR_3, size_t VAR_4)
{
  char *VAR_5 = (char *)FUNC_2(VAR_0, VAR_4 + 1);
  if (VAR_2) FUNC_1(VAR_5, VAR_2, VAR_3);
  VAR_5[VAR_3] = '\0';
  VAR_1->as.heap.ptr = VAR_5;
  VAR_1->as.heap.len = (mrb_int)VAR_3;
  VAR_1->as.heap.aux.capa = (mrb_int)VAR_4;
  FUNC_0(VAR_1);
  return VAR_1;
}
