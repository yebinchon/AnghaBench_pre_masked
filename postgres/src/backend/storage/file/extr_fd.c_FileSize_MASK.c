
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_2__ {int fd; int fileName; } ;
typedef size_t File ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (int ,char*,size_t,int ) ;
 int FUNC_6 (int ,int ,int ) ;

off_t
FUNC_7(File VAR_3)
{
 FUNC_0(FUNC_4(VAR_3));

 FUNC_1(FUNC_5(VAR_0, "FileSize %d (%s)",
      VAR_3, VAR_2[VAR_3].fileName));

 if (FUNC_3(VAR_3))
 {
  if (FUNC_2(VAR_3) < 0)
   return (off_t) -1;
 }

 return FUNC_6(VAR_2[VAR_3].fd, 0, VAR_1);
}
