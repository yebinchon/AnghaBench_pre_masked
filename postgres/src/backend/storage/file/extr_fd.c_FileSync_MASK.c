
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int fd; int fileName; } ;
typedef size_t File ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (int ,char*,size_t,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

int
FUNC_8(File VAR_2, uint32 VAR_3)
{
 int VAR_4;

 FUNC_0(FUNC_3(VAR_2));

 FUNC_1(FUNC_4(VAR_0, "FileSync: %d (%s)",
      VAR_2, VAR_1[VAR_2].fileName));

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_7(VAR_3);
 VAR_4 = FUNC_5(VAR_1[VAR_2].fd);
 FUNC_6();

 return VAR_4;
}
