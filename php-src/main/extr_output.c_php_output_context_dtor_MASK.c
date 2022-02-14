
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * data; scalar_t__ free; } ;
struct TYPE_5__ {int * data; scalar_t__ free; } ;
struct TYPE_7__ {TYPE_2__ out; TYPE_1__ in; } ;
typedef TYPE_3__ php_output_context ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(php_output_context *VAR_0)
{
 if (VAR_0->in.free && VAR_0->in.data) {
  FUNC_0(VAR_0->in.data);
  VAR_0->in.data = ((void*)0);
 }
 if (VAR_0->out.free && VAR_0->out.data) {
  FUNC_0(VAR_0->out.data);
  VAR_0->out.data = ((void*)0);
 }
}
