
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring {int dummy; } ;
typedef int ring ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct ring*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct ring*,int ,int) ;
 int FUNC_5 (int,struct ring*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,struct ring*,int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 char** VAR_3 ;
 char** VAR_4 ;
 int FUNC_10 (int,struct ring*) ;
 int FUNC_11 (int,struct ring*) ;

__attribute__((used)) static int FUNC_12(int VAR_5, int VAR_6)
{
 int VAR_7;
 struct ring VAR_8;

 FUNC_3(VAR_2, "test: %s with %s ", VAR_3[VAR_5],
  VAR_4[VAR_6]);
 FUNC_2(VAR_2);

 if (VAR_5 == VAR_1 &&
     FUNC_8() != FUNC_9()) {
  FUNC_3(VAR_2, "test: skip %s %s since user and kernel "
   "space have different bit width\n",
   VAR_3[VAR_5], VAR_4[VAR_6]);
  return VAR_0;
 }

 VAR_7 = FUNC_6(VAR_5);
 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 FUNC_7(VAR_7, &VAR_8, VAR_5, VAR_6);
 FUNC_5(VAR_7, &VAR_8);
 FUNC_0(VAR_7, &VAR_8);
 FUNC_11(VAR_7, &VAR_8);
 FUNC_10(VAR_7, &VAR_8);
 FUNC_1(VAR_7);

 FUNC_3(VAR_2, "\n");
 return 0;
}
