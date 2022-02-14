
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_5)
{
 if (!FUNC_1(VAR_5, "graph", FUNC_0(VAR_5))) {
  VAR_4.mode = VAR_2;
  return 0;
 }
 if (!FUNC_1(VAR_5, "flat", FUNC_0(VAR_5))) {
  VAR_4.mode = VAR_0;
  return 0;
 }
 if (!FUNC_1(VAR_5, "fractal", FUNC_0(VAR_5))) {
  VAR_4.mode = VAR_3;
  return 0;
 }
 if (!FUNC_1(VAR_5, "folded", FUNC_0(VAR_5))) {
  VAR_4.mode = VAR_1;
  return 0;
 }
 return -1;
}
