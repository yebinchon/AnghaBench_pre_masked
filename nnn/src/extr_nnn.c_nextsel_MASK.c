
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
struct kevent {int dummy; } ;
struct inotify_event {int len; int wd; int mask; } ;
struct TYPE_5__ {int sym; int act; } ;
struct TYPE_4__ {int blkorder; int selmode; scalar_t__ filtermode; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_1__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_5 (int ,int ,int,struct kevent*,int ,int *) ;
 int VAR_14 ;
 int FUNC_6 (void*,int,int) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int FUNC_8(int VAR_15)
{
 int VAR_16 = VAR_15;
 uint VAR_17;
 const uint VAR_18 = FUNC_3(VAR_6);
 if (VAR_16 == 0 || VAR_16 == VAR_3) {
  VAR_16 = FUNC_4();
  FUNC_1(VAR_16);

  if (VAR_15 == VAR_3) {
   if (VAR_7.filtermode)
    VAR_16 = VAR_1;
   else
    VAR_16 = FUNC_0('L');
  }
 }

 if (VAR_16 == -1) {
  ++VAR_11;
 } else
  VAR_11 = 0;

 for (VAR_17 = 0; VAR_17 < VAR_18; ++VAR_17)
  if (VAR_16 == VAR_6[VAR_17].sym)
   return VAR_6[VAR_17].act;

 return 0;
}
