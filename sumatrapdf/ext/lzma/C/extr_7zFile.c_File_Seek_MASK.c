
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WRes ;
typedef int UInt64 ;
struct TYPE_5__ {int file; int handle; } ;
struct TYPE_4__ {int LowPart; scalar_t__ HighPart; } ;
typedef scalar_t__ LONG ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int Int64 ;
typedef int ESzSeek ;
typedef int DWORD ;
typedef TYPE_2__ CSzFile ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_1 (int ,int,scalar_t__*,int) ;
 int FUNC_2 (int ,long,int) ;
 int FUNC_3 (int ) ;

WRes FUNC_4(CSzFile *VAR_8, Int64 *VAR_9, ESzSeek VAR_10)
{
  int VAR_11;
  int VAR_12;
  switch (VAR_10)
  {
    case 128: VAR_11 = VAR_7; break;
    case 130: VAR_11 = VAR_5; break;
    case 129: VAR_11 = VAR_6; break;
    default: return 1;
  }
  VAR_12 = FUNC_2(VAR_8->file, (long)*VAR_9, VAR_11);
  *VAR_9 = FUNC_3(VAR_8->file);
  return VAR_12;


}
