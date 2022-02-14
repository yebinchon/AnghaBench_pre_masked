
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (char*,int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (char*,int *,int *,char*,int ) ;

__attribute__((used)) static bool FUNC_4(int VAR_5, char *VAR_6, char *VAR_7, int *VAR_8)
{
 if (!VAR_4)
  return VAR_0;


 if (!FUNC_0(VAR_3[VAR_5].mode)) {
  FUNC_2("not regular file", VAR_8);
  return VAR_0;
 }


 if (!(VAR_3[VAR_5].mode & 0100)) {
  FUNC_2("permission denied", VAR_8);
  return VAR_0;
 }

 FUNC_1(VAR_6, VAR_3[VAR_5].name, VAR_7);
 FUNC_3(VAR_7, ((void*)0), ((void*)0), VAR_6, VAR_1);

 return VAR_2;
}
