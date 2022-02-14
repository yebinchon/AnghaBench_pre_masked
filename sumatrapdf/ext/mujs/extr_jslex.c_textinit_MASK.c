
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cap; scalar_t__ len; scalar_t__ text; } ;
struct TYPE_6__ {TYPE_1__ lexbuf; } ;
typedef TYPE_2__ js_State ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_1(js_State *VAR_0)
{
 if (!VAR_0->lexbuf.text) {
  VAR_0->lexbuf.cap = 4096;
  VAR_0->lexbuf.text = FUNC_0(VAR_0, VAR_0->lexbuf.cap);
 }
 VAR_0->lexbuf.len = 0;
}
