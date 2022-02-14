
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input {scalar_t__ scroll; scalar_t__ end; scalar_t__ q; scalar_t__ text; scalar_t__ p; } ;


 int FUNC_0 (scalar_t__,char const*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void FUNC_2(struct input *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0->text, VAR_1, sizeof VAR_0->text);
 VAR_0->end = VAR_0->text + FUNC_1(VAR_0->text);
 VAR_0->p = VAR_0->text;
 VAR_0->q = VAR_0->end;
 VAR_0->scroll = 0;
}
