
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ass_draw {int scale; int text; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct ass_draw *VAR_0)
{
    VAR_0->scale = FUNC_0(VAR_0->scale, 1);
    VAR_0->text = FUNC_1(VAR_0->text, "{\\p%d}", VAR_0->scale);
}
