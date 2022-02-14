
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {scalar_t__ fileSize; int fdstate; int fd; int fileName; } ;
typedef size_t File ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (int ,char*,size_t,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_3 ;

int
FUNC_8(File VAR_4, off_t VAR_5, uint32 VAR_6)
{
 int VAR_7;

 FUNC_0(FUNC_3(VAR_4));

 FUNC_1(FUNC_4(VAR_1, "FileTruncate %d (%s)",
      VAR_4, VAR_2[VAR_4].fileName));

 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_7(VAR_6);
 VAR_7 = FUNC_5(VAR_2[VAR_4].fd, VAR_5);
 FUNC_6();

 if (VAR_7 == 0 && VAR_2[VAR_4].fileSize > VAR_5)
 {

  FUNC_0(VAR_2[VAR_4].fdstate & VAR_0);
  VAR_3 -= VAR_2[VAR_4].fileSize - VAR_5;
  VAR_2[VAR_4].fileSize = VAR_5;
 }

 return VAR_7;
}
