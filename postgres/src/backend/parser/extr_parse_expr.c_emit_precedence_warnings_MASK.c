
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ParseState ;
typedef int Node ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char const*,char const*) ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_3 (int *,char const**) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(ParseState *VAR_8,
       int VAR_9, const char *VAR_10,
       Node *VAR_11, Node *VAR_12,
       int VAR_13)
{
 int VAR_14;
 const char *VAR_15;

 FUNC_0(VAR_9 > 0);
 VAR_14 = FUNC_3(VAR_11, &VAR_15);
 if (VAR_14 > 0)
 {
  if (VAR_6[VAR_14] < VAR_7[VAR_9] &&
   VAR_14 != VAR_0 &&
   VAR_14 != VAR_1 &&
   VAR_14 != VAR_3 &&
   VAR_14 != VAR_2)
   FUNC_1(VAR_5,
     (FUNC_2("operator precedence change: %s is now lower precedence than %s",
       VAR_10, VAR_15),
      FUNC_4(VAR_8, VAR_13)));
 }
 VAR_14 = FUNC_3(VAR_12, &VAR_15);
 if (VAR_14 > 0)
 {
  if (VAR_7[VAR_14] <= VAR_6[VAR_9] &&
   VAR_14 != VAR_4)
   FUNC_1(VAR_5,
     (FUNC_2("operator precedence change: %s is now lower precedence than %s",
       VAR_10, VAR_15),
      FUNC_4(VAR_8, VAR_13)));
 }
}
