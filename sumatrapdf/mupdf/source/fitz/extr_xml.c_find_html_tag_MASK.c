
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* tag; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int*,char const*,int) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 while (VAR_4 != VAR_5)
 {
  int VAR_7;
  VAR_6 = (VAR_4 + VAR_5)>>1;
  VAR_7 = FUNC_1(VAR_1[VAR_6].tag, VAR_2, VAR_3);
  if (VAR_7 == 0)
   VAR_7 = VAR_1[VAR_6].tag[VAR_3];
  if (VAR_7 == 0)
   return VAR_6;
  if (VAR_7 < 0)
   VAR_4 = VAR_6+1;
  else
   VAR_5 = VAR_6;
 }

 return VAR_0;
}
