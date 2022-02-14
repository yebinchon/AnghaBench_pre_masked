
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int cap; int text; } ;
struct TYPE_6__ {TYPE_1__ lexbuf; } ;
typedef TYPE_2__ js_State ;
typedef int Rune ;


 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(js_State *VAR_0, Rune VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);
 if (VAR_0->lexbuf.len + VAR_2 > VAR_0->lexbuf.cap) {
  VAR_0->lexbuf.cap = VAR_0->lexbuf.cap * 2;
  VAR_0->lexbuf.text = FUNC_0(VAR_0, VAR_0->lexbuf.text, VAR_0->lexbuf.cap);
 }
 VAR_0->lexbuf.len += FUNC_2(VAR_0->lexbuf.text + VAR_0->lexbuf.len, &VAR_1);
}
