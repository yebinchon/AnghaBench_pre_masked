
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef int Point ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int16
FUNC_2(Point *VAR_7, Point *VAR_8)
{
 if ((FUNC_0(VAR_1, VAR_8, VAR_7) ||
   FUNC_0(VAR_3, VAR_8, VAR_7)) &&
  (FUNC_0(VAR_5, VAR_8, VAR_7) ||
   FUNC_0(VAR_6, VAR_8, VAR_7)))
  return 1;

 if (FUNC_0(VAR_2, VAR_8, VAR_7) &&
  (FUNC_0(VAR_5, VAR_8, VAR_7) ||
   FUNC_0(VAR_6, VAR_8, VAR_7)))
  return 2;

 if ((FUNC_0(VAR_2, VAR_8, VAR_7) ||
   FUNC_0(VAR_3, VAR_8, VAR_7)) &&
  FUNC_0(VAR_4, VAR_8, VAR_7))
  return 3;

 if (FUNC_0(VAR_1, VAR_8, VAR_7) &&
  FUNC_0(VAR_4, VAR_8, VAR_7))
  return 4;

 FUNC_1(VAR_0, "getQuadrant: impossible case");
 return 0;
}
