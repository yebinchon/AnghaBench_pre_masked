
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tms {int tms_cstime; int tms_cutime; int tms_stime; int tms_utime; } ;
struct TYPE_6__ {long tv_sec; long tv_usec; } ;
struct TYPE_5__ {long tv_sec; long tv_usec; } ;
struct rusage {TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;
typedef int clock_t ;
struct TYPE_7__ {long QuadPart; } ;
typedef TYPE_3__ ULARGE_INTEGER ;
typedef int FILETIME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *,int *,int *,int *) ;


 void* FUNC_3 (int ,int) ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_3__*,int *,int) ;
 int FUNC_7 (struct rusage*,int ,int) ;
 scalar_t__ FUNC_8 (struct tms*) ;

int
FUNC_9(int VAR_4, struct rusage *VAR_5)
{
 struct tms VAR_6;
 int VAR_7 = VAR_0;
 clock_t VAR_8,
    VAR_9;

 if (VAR_5 == (struct rusage *) ((void*)0))
 {
  VAR_3 = VAR_1;
  return -1;
 }
 if (FUNC_8(&VAR_6) < 0)
 {

  return -1;
 }
 switch (VAR_4)
 {
  case 128:
   VAR_8 = VAR_6.tms_utime;
   VAR_9 = VAR_6.tms_stime;
   break;
  case 129:
   VAR_8 = VAR_6.tms_cutime;
   VAR_9 = VAR_6.tms_cstime;
   break;
  default:
   VAR_3 = VAR_2;
   return -1;
 }


 VAR_5->ru_utime.tv_sec = ((VAR_8)/(VAR_7));
 VAR_5->ru_utime.tv_usec = (((VAR_8)%(VAR_7)*1000000)/VAR_7);
 VAR_5->ru_stime.tv_sec = ((VAR_9)/(VAR_7));
 VAR_5->ru_stime.tv_usec = (((VAR_8)%(VAR_7)*1000000)/VAR_7);


 return 0;
}
