
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int url ;
typedef scalar_t__ sigproc_t ;
struct TYPE_4__ {char* bookmarkName; } ;
typedef int FILE ;
typedef TYPE_1__ Bookmark ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int *,char*,...) ;

__attribute__((used)) static int
FUNC_8(void)
{
 FILE *VAR_2;
 FILE *VAR_3;
 int VAR_4 = 0;
 Bookmark VAR_5;
 char VAR_6[128];




 VAR_2 = FUNC_5(((void*)0));
 if (VAR_2 == ((void*)0))
  return (0);




 VAR_3 = FUNC_6();

 while (FUNC_3(VAR_2, &VAR_5) == 0) {
  VAR_4++;
  if (VAR_4 == 1) {

   (void) FUNC_7(VAR_3, "--BOOKMARK----------URL--------------------------------------------------------\n");
  }
  FUNC_0(&VAR_5, VAR_6, sizeof(VAR_6));
  (void) FUNC_7(VAR_3, "  %-16s  %s\n", VAR_5.bookmarkName, VAR_6);
 }

 FUNC_2(VAR_3);
 FUNC_1(VAR_2);




 return (VAR_4);
}
