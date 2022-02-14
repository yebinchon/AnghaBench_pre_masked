
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pos; } ;
struct TYPE_4__ {TYPE_1__ pos; int len; int word; } ;
typedef TYPE_2__ ParsedWord ;


 int FUNC_0 (int ,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(
        ((const ParsedWord *) VAR_0)->word, ((const ParsedWord *) VAR_0)->len,
        ((const ParsedWord *) VAR_1)->word, ((const ParsedWord *) VAR_1)->len,
        0);

 if (VAR_2 == 0)
 {
  if (((const ParsedWord *) VAR_0)->pos.pos == ((const ParsedWord *) VAR_1)->pos.pos)
   return 0;

  VAR_2 = (((const ParsedWord *) VAR_0)->pos.pos > ((const ParsedWord *) VAR_1)->pos.pos) ? 1 : -1;
 }

 return VAR_2;
}
