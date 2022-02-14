
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ass_draw {int scale; int text; } ;


 int FUNC_0 (float) ;
 int FUNC_1 (int ,char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct ass_draw *VAR_0, float VAR_1, float VAR_2)
{
    int VAR_3 = FUNC_0(VAR_1 * (1 << (VAR_0->scale - 1)));
    int VAR_4 = FUNC_0(VAR_2 * (1 << (VAR_0->scale - 1)));
    VAR_0->text = FUNC_1(VAR_0->text, " %d %d", VAR_3, VAR_4);
}
