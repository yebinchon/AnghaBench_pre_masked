
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TSTree ;
typedef int TSParser ;
typedef int TSNode ;
typedef int RCore ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *,char const*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int * FUNC_8 (int *,int *,char const*,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static bool FUNC_12(RCore *VAR_0, const char *VAR_1, bool VAR_2) {
 TSParser *VAR_3 = FUNC_7 ();

 FUNC_9 (VAR_3, FUNC_4 ());

 TSTree *VAR_4 = FUNC_8 (VAR_3, ((void*)0), VAR_1, FUNC_3 (VAR_1));
 TSNode VAR_5 = FUNC_11 (VAR_4);
 bool VAR_6 = 0;
 if (FUNC_2 (VAR_5) && !FUNC_5 (VAR_5)) {
  VAR_6 = FUNC_1 (VAR_0, VAR_1, VAR_5, VAR_2);
 } else {
  FUNC_0 ("Error while parsing command: `%s`\n", VAR_1);
 }

 FUNC_10 (VAR_4);
 FUNC_6 (VAR_3);
 return VAR_6;
}
