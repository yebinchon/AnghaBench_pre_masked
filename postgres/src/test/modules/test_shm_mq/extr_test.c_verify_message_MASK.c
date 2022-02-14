
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Size ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(Size VAR_1, char *VAR_2, Size VAR_3, char *VAR_4)
{
 Size VAR_5;

 if (VAR_1 != VAR_3)
  FUNC_0(VAR_0,
    (FUNC_2("message corrupted"),
     FUNC_1("The original message was %zu bytes but the final message is %zu bytes.",
         VAR_1, VAR_3)));

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  if (VAR_2[VAR_5] != VAR_4[VAR_5])
   FUNC_0(VAR_0,
     (FUNC_2("message corrupted"),
      FUNC_1("The new and original messages differ at byte %zu of %zu.", VAR_5, VAR_1)));
}
