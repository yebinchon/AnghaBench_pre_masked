
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10;


 FUNC_6(&VAR_9);

 VAR_10 = 0;

 if (FUNC_0(VAR_9) == VAR_2) {
  VAR_8 = FUNC_4(VAR_0, VAR_3,
     &VAR_5, 0);
  if (VAR_8 == VAR_5)
   VAR_10 = 1;
  if (FUNC_4(VAR_1, VAR_3, &VAR_6, 1))
   FUNC_1("Can't poke: %s\n", FUNC_5(VAR_4));
 }

 VAR_5++;

 if (VAR_10)
  FUNC_3(VAR_7);
 else
  FUNC_2(VAR_7);
}
