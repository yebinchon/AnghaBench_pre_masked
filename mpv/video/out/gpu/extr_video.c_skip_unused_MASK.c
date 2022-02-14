
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_video {int dummy; } ;


 int FUNC_0 (char*,char,double) ;

__attribute__((used)) static void FUNC_1(struct gl_video *VAR_0, int VAR_1)
{
    for (int VAR_2 = VAR_1; VAR_2 < 4; VAR_2++)
        FUNC_0("color.%c = %f;\n", "rgba"[VAR_2], VAR_2 < 3 ? 0.0 : 1.0);
}
