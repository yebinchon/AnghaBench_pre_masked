
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vsigproc_t ;
struct winsize {int ws_col; } ;
typedef int sigproc_t ;
typedef int felix ;
struct TYPE_4__ {scalar_t__ X; } ;
struct TYPE_5__ {TYPE_1__ dwSize; } ;
typedef int FILE ;
typedef TYPE_2__ CONSOLE_SCREEN_BUFFER_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,char*,int*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ,int ,struct winsize*) ;
 int FUNC_11 (struct winsize*,int ,int) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (char*,char*) ;

void
FUNC_14(void)
{
 char *VAR_10;

 if ((VAR_10 = (char *) FUNC_9("COLUMNS")) == ((void*)0)) {
  VAR_8 = 80;
 } else {
  VAR_8 = FUNC_6(VAR_10);
  return;
 }
}
