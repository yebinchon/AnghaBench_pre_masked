
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {int test_num; TYPE_1__ duration; } ;
struct testdev {char* name; int test; scalar_t__ forever; TYPE_2__ param; int ifnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int,int,...) ;
 int FUNC_5 (char*,int,char*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int,char*,int) ;
 int FUNC_7 (int,int ,int ,TYPE_2__*) ;

__attribute__((used)) static void *FUNC_8 (void *VAR_6)
{
 struct testdev *VAR_7 = VAR_6;
 int VAR_8, VAR_9;
 int VAR_10;

 if ((VAR_8 = FUNC_2 (VAR_7->name, VAR_1)) < 0) {
  FUNC_3 ("can't open dev file r/w");
  return 0;
 }

restart:
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (VAR_7->test != -1 && VAR_7->test != VAR_9)
   continue;
  VAR_7->param.test_num = VAR_9;

  VAR_10 = FUNC_7 (VAR_8, VAR_7->ifnum,
    VAR_3, &VAR_7->param);
  if (VAR_10 < 0 && VAR_4 == VAR_0)
   continue;




  if (VAR_10 < 0) {
   char VAR_11 [80];
   int VAR_12 = VAR_4;

   if (FUNC_6 (VAR_4, VAR_11, sizeof VAR_11)) {
    FUNC_5 (VAR_11, sizeof VAR_11, "error %d", VAR_12);
    VAR_4 = VAR_12;
   }
   FUNC_4 ("%s test %d --> %d (%s)\n",
    VAR_7->name, VAR_9, VAR_4, VAR_11);
  } else
   FUNC_4 ("%s test %d, %4d.%.06d secs\n", VAR_7->name, VAR_9,
    (int) VAR_7->param.duration.tv_sec,
    (int) VAR_7->param.duration.tv_usec);

  FUNC_1 (VAR_5);
 }
 if (VAR_7->forever)
  goto restart;

 FUNC_0 (VAR_8);
 return VAR_6;
}
