
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int timebuf ;
typedef int time_t ;
struct TYPE_7__ {scalar_t__ pager; } ;
struct TYPE_8__ {char* title; TYPE_1__ topt; } ;
typedef TYPE_2__ printQueryOpt ;
struct TYPE_10__ {TYPE_2__ popt; } ;
struct TYPE_9__ {scalar_t__ len; int data; } ;
typedef TYPE_3__* PQExpBuffer ;


 long FUNC_0 (long,long) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (long) ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 (char*,int,char*,char const*,...) ;
 int FUNC_10 (char*,int,char const*,int ) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static bool
FUNC_13(PQExpBuffer VAR_4, double VAR_5)
{
 long VAR_6 = (long) (VAR_5 * 1000);
 printQueryOpt VAR_7 = VAR_1.popt;
 const char *VAR_8;
 const char *VAR_9;
 char *VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 if (!VAR_4 || VAR_4->len <= 0)
 {
  FUNC_5("\\watch cannot be used with an empty query");
  return 0;
 }






 VAR_8 = "%c";





 VAR_7.topt.pager = 0;






 VAR_9 = VAR_7.title;
 VAR_11 = (VAR_9 ? FUNC_11(VAR_9) : 0) + 256;
 VAR_10 = FUNC_6(VAR_11);

 for (;;)
 {
  time_t VAR_13;
  char VAR_14[128];
  long VAR_15;






  VAR_13 = FUNC_12(((void*)0));
  FUNC_10(VAR_14, sizeof(VAR_14), VAR_8, FUNC_3(&VAR_13));

  if (VAR_9)
   FUNC_9(VAR_10, VAR_11, FUNC_2("%s\t%s (every %gs)\n"),
      VAR_9, VAR_14, VAR_5);
  else
   FUNC_9(VAR_10, VAR_11, FUNC_2("%s (every %gs)\n"),
      VAR_14, VAR_5);
  VAR_7.title = VAR_10;


  VAR_12 = FUNC_1(VAR_4->data, &VAR_7);





  if (VAR_12 <= 0)
   break;






  if (FUNC_8(VAR_3, 1) != 0)
   break;






  VAR_2 = 1;
  VAR_15 = VAR_6;
  while (VAR_15 > 0)
  {
   long VAR_16 = FUNC_0(VAR_15, 1000L);

   FUNC_7(VAR_16 * 1000L);
   if (VAR_0)
    break;
   VAR_15 -= VAR_16;
  }
  VAR_2 = 0;
 }

 FUNC_4(VAR_10);
 return (VAR_12 >= 0);
}
