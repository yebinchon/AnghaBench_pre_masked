
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t lruLessRecently; int fileName; } ;
typedef size_t File ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int VAR_0 ;
 int FUNC_4 (size_t) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (int ,char*,size_t,int ) ;

__attribute__((used)) static int
FUNC_6(File VAR_2)
{
 int VAR_3;

 FUNC_0(FUNC_5(VAR_0, "FileAccess %d (%s)",
      VAR_2, VAR_1[VAR_2].fileName));






 if (FUNC_2(VAR_2))
 {
  VAR_3 = FUNC_4(VAR_2);
  if (VAR_3 != 0)
   return VAR_3;
 }
 else if (VAR_1[0].lruLessRecently != VAR_2)
 {





  FUNC_1(VAR_2);
  FUNC_3(VAR_2);
 }

 return 0;
}
