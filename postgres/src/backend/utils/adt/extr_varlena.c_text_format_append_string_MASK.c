
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(StringInfo VAR_4, const char *VAR_5,
        int VAR_6, int VAR_7)
{
 bool VAR_8 = 0;
 int VAR_9;


 if (VAR_7 == 0)
 {
  FUNC_1(VAR_4, VAR_5);
  return;
 }

 if (VAR_7 < 0)
 {

  VAR_8 = 1;

  if (VAR_7 <= VAR_2)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_4("number is out of range")));
  VAR_7 = -VAR_7;
 }
 else if (VAR_6 & VAR_3)
  VAR_8 = 1;

 VAR_9 = FUNC_5(VAR_5);
 if (VAR_8)
 {

  FUNC_1(VAR_4, VAR_5);
  if (VAR_9 < VAR_7)
   FUNC_0(VAR_4, VAR_7 - VAR_9);
 }
 else
 {

  if (VAR_9 < VAR_7)
   FUNC_0(VAR_4, VAR_7 - VAR_9);
  FUNC_1(VAR_4, VAR_5);
 }
}
