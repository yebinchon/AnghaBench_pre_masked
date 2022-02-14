
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* fmt; } ;
typedef TYPE_1__ hexagon_operand ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static const hexagon_operand *
FUNC_2
(const hexagon_operand *VAR_2, char *VAR_3)
{
  char VAR_4[100];
  size_t VAR_5;

  FUNC_0(VAR_4, "%s%s", VAR_2->fmt, VAR_3);
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
    const hexagon_operand *VAR_6 = &VAR_1[VAR_5];
    if (!FUNC_1(VAR_6->fmt, VAR_4)) {
      return VAR_6;
    }
  }
  return ((void*)0);
}
