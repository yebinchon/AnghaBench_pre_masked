
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zerobuf ;
struct TYPE_5__ {scalar_t__ avail_out; scalar_t__ avail_in; int * next_in; } ;
struct TYPE_4__ {int fd; char* zlibOut; int tarfilename; scalar_t__ sync; TYPE_2__* zp; int compression; scalar_t__ currentfile; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 TYPE_1__* VAR_8 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int,int) ;
 size_t FUNC_11 (int,char*,size_t) ;

__attribute__((used)) static bool
FUNC_12(void)
{
 char VAR_9[1024];

 FUNC_7();

 if (VAR_8->currentfile)
 {
  if (FUNC_8(VAR_8->currentfile, VAR_0) != 0)
   return 0;
 }


 FUNC_0(VAR_9, 0, sizeof(VAR_9));
 if (!VAR_8->compression)
 {
  VAR_7 = 0;
  if (FUNC_11(VAR_8->fd, VAR_9, sizeof(VAR_9)) != sizeof(VAR_9))
  {

   if (VAR_7 == 0)
    VAR_7 = VAR_1;
   return 0;
  }
 }
 if (VAR_8->sync)
 {
  if (FUNC_4(VAR_8->fd) != 0)
   return 0;
 }

 if (FUNC_1(VAR_8->fd) != 0)
  return 0;

 VAR_8->fd = -1;

 if (VAR_8->sync)
 {
  if (FUNC_5(VAR_8->tarfilename, 0) != 0)
   return 0;
  if (FUNC_6(VAR_8->tarfilename) != 0)
   return 0;
 }

 return 1;
}
