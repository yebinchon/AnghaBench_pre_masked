
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,struct rlimit*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (int*,int) ;

__attribute__((used)) static void
FUNC_9(int VAR_6, int *VAR_7, int *VAR_8)
{
 int *VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13;






 VAR_10 = 1024;
 VAR_9 = (int *) FUNC_6(VAR_10 * sizeof(int));
 for (;;)
 {
  int VAR_14;
  VAR_14 = FUNC_1(0);
  if (VAR_14 < 0)
  {

   if (VAR_5 != VAR_0 && VAR_5 != VAR_1)
    FUNC_2(VAR_4, "dup(0) failed after %d successes: %m", VAR_11);
   break;
  }

  if (VAR_11 >= VAR_10)
  {
   VAR_10 *= 2;
   VAR_9 = (int *) FUNC_8(VAR_9, VAR_10 * sizeof(int));
  }
  VAR_9[VAR_11++] = VAR_14;

  if (VAR_12 < VAR_14)
   VAR_12 = VAR_14;

  if (VAR_11 >= VAR_6)
   break;
 }


 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
  FUNC_0(VAR_9[VAR_13]);

 FUNC_7(VAR_9);






 *VAR_7 = VAR_11;
 *VAR_8 = VAR_12 + 1 - VAR_11;
}
