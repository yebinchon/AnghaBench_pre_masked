
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* __u32 ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char**) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (int*,char***) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (int) ;
 char* FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(int VAR_8, char **VAR_9)
{
 __u32 VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 if (VAR_7)
  FUNC_3(&VAR_6, VAR_0);

 if (VAR_8 == 2) {
  VAR_12 = FUNC_8(&VAR_8, &VAR_9);
  if (VAR_12 < 0)
   return -1;

  VAR_11 = FUNC_9(VAR_12);
  FUNC_4(VAR_12);
  return VAR_11;
 }

 if (VAR_8)
  return FUNC_0();

 if (VAR_4)
  FUNC_6(VAR_5);
 while (1) {
  VAR_11 = FUNC_2(VAR_10, &VAR_10);
  if (VAR_11) {
   if (VAR_3 == VAR_2) {
    VAR_11 = 0;
    break;
   }
   FUNC_7("can't get next program: %s%s", FUNC_10(VAR_3),
         VAR_3 == VAR_1 ? " -- kernel too old?" : "");
   VAR_11 = -1;
   break;
  }

  VAR_12 = FUNC_1(VAR_10);
  if (VAR_12 < 0) {
   if (VAR_3 == VAR_2)
    continue;
   FUNC_7("can't get prog by id (%u): %s",
         VAR_10, FUNC_10(VAR_3));
   VAR_11 = -1;
   break;
  }

  VAR_11 = FUNC_9(VAR_12);
  FUNC_4(VAR_12);
  if (VAR_11)
   break;
 }

 if (VAR_4)
  FUNC_5(VAR_5);

 return VAR_11;
}
