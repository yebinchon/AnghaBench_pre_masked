
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; scalar_t__ free; scalar_t__ used; int * data; } ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ free; scalar_t__ used; int * data; } ;
struct TYPE_7__ {TYPE_2__ out; TYPE_1__ in; } ;
typedef TYPE_3__ php_output_context ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(php_output_context *VAR_0)
{
 if (VAR_0->in.free && VAR_0->in.data) {
  FUNC_0(VAR_0->in.data);
 }
 VAR_0->in.data = VAR_0->out.data;
 VAR_0->in.used = VAR_0->out.used;
 VAR_0->in.free = VAR_0->out.free;
 VAR_0->in.size = VAR_0->out.size;
 VAR_0->out.data = ((void*)0);
 VAR_0->out.used = 0;
 VAR_0->out.free = 0;
 VAR_0->out.size = 0;
}
