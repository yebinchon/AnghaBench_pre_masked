
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const char *VAR_1){
  FUNC_1(VAR_0, "Usage: %s FILENAME COMMAND ...\n", VAR_1);
  FUNC_1(VAR_0,
    "COMMANDs:\n"
    "   apply DB           Apply the changeset to database file DB\n"
    "   concat FILE2 OUT   Concatenate FILENAME and FILE2 into OUT\n"
    "   dump               Show the complete content of the changeset\n"
    "   invert OUT         Write an inverted changeset into file OUT\n"
    "   sql                Give a pseudo-SQL rendering of the changeset\n"
  );
  FUNC_0(1);
}
