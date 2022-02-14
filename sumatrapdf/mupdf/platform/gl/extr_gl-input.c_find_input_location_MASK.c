
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct line {int b; int a; } ;
struct TYPE_2__ {float lineheight; } ;


 char* FUNC_0 (int ,int ,float,float) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static char *FUNC_1(struct line *VAR_1, int VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6)
{
 int VAR_7 = 0;
 if (VAR_6 > VAR_4) VAR_7 = (VAR_6 - VAR_4) / VAR_0.lineheight;
 if (VAR_7 >= VAR_2) VAR_7 = VAR_2 - 1;
 return FUNC_0(VAR_1[VAR_7].a, VAR_1[VAR_7].b, VAR_3, VAR_5);
}
