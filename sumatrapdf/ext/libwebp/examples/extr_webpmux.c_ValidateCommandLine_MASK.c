
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CommandLineArguments ;


 int FUNC_0 (int const* const,char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(const CommandLineArguments* const VAR_1,
                               int* VAR_2) {
  int VAR_3;
  int VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7 = 1;

  FUNC_2(VAR_2 != ((void*)0));
  *VAR_2 = 0;


  if (FUNC_0(VAR_1, "-get") > 1) {
    FUNC_1("ERROR: Multiple '-get' arguments specified.\n", VAR_0);
  }
  if (FUNC_0(VAR_1, "-set") > 1) {
    FUNC_1("ERROR: Multiple '-set' arguments specified.\n", VAR_0);
  }
  if (FUNC_0(VAR_1, "-strip") > 1) {
    FUNC_1("ERROR: Multiple '-strip' arguments specified.\n", VAR_0);
  }
  if (FUNC_0(VAR_1, "-info") > 1) {
    FUNC_1("ERROR: Multiple '-info' arguments specified.\n", VAR_0);
  }
  if (FUNC_0(VAR_1, "-o") > 1) {
    FUNC_1("ERROR: Multiple output files specified.\n", VAR_0);
  }


  VAR_3 = FUNC_0(VAR_1, "-frame");
  VAR_4 = FUNC_0(VAR_1, "-loop");
  VAR_5 = FUNC_0(VAR_1, "-bgcolor");
  VAR_6 = FUNC_0(VAR_1, "-duration");

  if (VAR_4 > 1) {
    FUNC_1("ERROR: Multiple loop counts specified.\n", VAR_0);
  }
  if (VAR_5 > 1) {
    FUNC_1("ERROR: Multiple background colors specified.\n", VAR_0);
  }

  if ((VAR_3 == 0) && (VAR_4 + VAR_5 > 0)) {
    FUNC_1("ERROR: Loop count and background color are relevant only in "
                "case of animation.\n", VAR_0);
  }
  if (VAR_6 > 0 && VAR_3 != 0) {
    FUNC_1("ERROR: Can not combine -duration and -frame commands.\n",
                VAR_0);
  }

  FUNC_2(VAR_7 == 1);
  if (VAR_6 > 0) {
    *VAR_2 = VAR_6;
  } else if (VAR_3 == 0) {

    *VAR_2 = 1;
  } else {

    *VAR_2 = VAR_3 + VAR_4 + VAR_5;
  }

 ErrValidate:
  return VAR_7;
}
