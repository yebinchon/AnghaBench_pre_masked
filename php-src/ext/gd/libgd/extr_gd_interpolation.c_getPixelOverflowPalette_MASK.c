
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_4__ {int** pixels; int const transparent; } ;


 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const,int const) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_3(gdImagePtr VAR_0, const int VAR_1, const int VAR_2, const int VAR_3)
{
 if (FUNC_1(VAR_0, VAR_1, VAR_2)) {
  const int VAR_4 = VAR_0->pixels[VAR_2][VAR_1];
  if (VAR_4 == VAR_0->transparent) {
   return VAR_3 == -1 ? FUNC_2(0, 0, 0, 127) : VAR_3;
  }
  return FUNC_0(VAR_4);
 } else {
  return VAR_3;
 }
}
