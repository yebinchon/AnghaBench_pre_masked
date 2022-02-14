
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int loff_t ;
typedef int geom ;
struct TYPE_8__ {scalar_t__ nFileSizeLow; scalar_t__ nFileSizeHigh; } ;
struct TYPE_6__ {int QuadPart; } ;
struct TYPE_7__ {int TracksPerCylinder; int SectorsPerTrack; TYPE_1__ Cylinders; } ;
typedef int HANDLE ;
typedef int DWORD ;
typedef TYPE_2__ DISK_GEOMETRY ;
typedef TYPE_3__ BY_HANDLE_FILE_INFORMATION ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,TYPE_2__*,int,int *,int *) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int,int const) ;

__attribute__((used)) static int
FUNC_9 (char *VAR_5)
{
  loff_t VAR_6, VAR_7;
  int VAR_8;

  if ((VAR_8 = FUNC_6 (VAR_5, VAR_2)) < 0)
    {
      FUNC_7 (VAR_5);
      FUNC_5 (1);
    }
  VAR_7 = 0;

  for (VAR_6 = 1; FUNC_8 (VAR_8, VAR_6); VAR_6 *= 2)
    VAR_7 = VAR_6;
  while (VAR_7 < VAR_6 - 1)
    {
      const loff_t VAR_9 = (VAR_7 + VAR_6) / 2;

      if (FUNC_8 (VAR_8, VAR_9))
 VAR_7 = VAR_9;
      else
 VAR_6 = VAR_9;
    }
  FUNC_8 (VAR_8, 0);
  FUNC_3 (VAR_8);

  return (VAR_7 + 1) / VAR_0;

}
