
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_3(int VAR_11)
{
 char VAR_12[128];
 ssize_t VAR_13, VAR_14;

 VAR_13 = FUNC_1(VAR_2, VAR_12, sizeof(VAR_12));
 if (VAR_13 == 0) {
  FUNC_0(VAR_9, "Read HUP on stdin\n");
  return -VAR_1;
 } else if (VAR_13 < 0) {
  FUNC_0(VAR_9, "Cannot read stdin: %m\n");
  return -VAR_8;
 }

 for (VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14) {
  switch (VAR_12[VAR_14]) {
  case '1':
   VAR_5 = !VAR_5;
   VAR_13 = FUNC_2(VAR_11);
   if (VAR_13)
    return VAR_13;
   break;
  case '2':
   VAR_6 = !VAR_6;
   VAR_13 = FUNC_2(VAR_11);
   if (VAR_13)
    return VAR_13;
   break;
  case '3':
   VAR_7 = !VAR_7;
   VAR_13 = FUNC_2(VAR_11);
   if (VAR_13)
    return VAR_13;
   break;
  case 'a':
   VAR_3 = -20;
   VAR_13 = FUNC_2(VAR_11);
   VAR_3 = 0;
   if (VAR_13)
    return VAR_13;
   break;
  case 'd':
   VAR_3 = 20;
   VAR_13 = FUNC_2(VAR_11);
   VAR_3 = 0;
   if (VAR_13)
    return VAR_13;
   break;
  case 'w':
   VAR_4 = -20;
   VAR_13 = FUNC_2(VAR_11);
   VAR_4 = 0;
   if (VAR_13)
    return VAR_13;
   break;
  case 's':
   VAR_4 = 20;
   VAR_13 = FUNC_2(VAR_11);
   VAR_4 = 0;
   if (VAR_13)
    return VAR_13;
   break;
  case 'r':
   VAR_10 = 1;
   VAR_13 = FUNC_2(VAR_11);
   VAR_10 = 0;
   if (VAR_13)
    return VAR_13;
   break;
  case 'f':
   VAR_10 = -1;
   VAR_13 = FUNC_2(VAR_11);
   VAR_10 = 0;
   if (VAR_13)
    return VAR_13;
   break;
  case 'q':
   return -VAR_0;
  default:
   FUNC_0(VAR_9, "Invalid input: %c\n", VAR_12[VAR_14]);
  }
 }

 return 0;
}
