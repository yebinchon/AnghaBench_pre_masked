
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int text; } ;
struct TYPE_4__ {TYPE_1__ input_file; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (char*,int,char*,char*,int,char*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_6(int VAR_2)
{
 char VAR_3[VAR_0], *VAR_4, *VAR_5;
 char VAR_6[VAR_0], VAR_7[VAR_0];
 int VAR_8;
 FUNC_2(VAR_3, VAR_1.input_file.text, sizeof VAR_3);
 VAR_4 = FUNC_4(VAR_3, '.');
 if (VAR_4)
 {
  VAR_5 = VAR_4;
  while (VAR_5 > VAR_3 && VAR_5[-1] >= '0' && VAR_5[-1] <= '9')
   --VAR_5;
  if (VAR_5 != VAR_4)
   VAR_8 = FUNC_0(VAR_5) + VAR_2;
  else
   VAR_8 = VAR_2;
  FUNC_3(VAR_6, VAR_3, VAR_5-VAR_3);
  VAR_6[VAR_5-VAR_3] = 0;
  FUNC_1(VAR_7, sizeof VAR_7, "%s%d%s", VAR_6, VAR_8, VAR_4);
  FUNC_5(&VAR_1.input_file, VAR_7);
 }
}
