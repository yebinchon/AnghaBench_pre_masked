
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keypairs_t {int keypairs_nb; char** keypairs; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct keypairs_t*) ;
 struct keypairs_t* FUNC_2 (char*,int) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static int FUNC_7(char *VAR_0, int VAR_1) {
  FUNC_0("enduser: write data from posted form");
  FUNC_0(VAR_0);




  struct keypairs_t *VAR_2 = FUNC_2(VAR_0, VAR_1);
  if (VAR_2 == ((void*)0) || VAR_2->keypairs_nb == 0) {
    FUNC_0("enduser: No extra configuration.");
    if (VAR_2 != ((void*)0)) FUNC_1(VAR_2);
    return 1;
  }


  int VAR_3 = FUNC_5("eus_params.lua", "w");
  if (VAR_3 == 0)
  {
    FUNC_0("Can't open file in write mode!");
    FUNC_1(VAR_2);
    return 1;
  }







  FUNC_6(VAR_3, "local p={}\n", 11);
  int VAR_4 = 0;
  for( VAR_4 = 0; VAR_4 < VAR_2->keypairs_nb*2; VAR_4=VAR_4+2){
    char* VAR_5 = VAR_2->keypairs[VAR_4];
    size_t VAR_6 = FUNC_3(VAR_5);

    FUNC_6(VAR_3, "p.", 2);

    FUNC_6(VAR_3, VAR_5, VAR_6);

    FUNC_6(VAR_3, "=\"", 2);

    VAR_5 = VAR_2->keypairs[VAR_4+1];
    VAR_6 = FUNC_3(VAR_5);
    FUNC_6(VAR_3, VAR_5, VAR_6);

    FUNC_6(VAR_3, "\"\n", 2);
  }
  FUNC_6(VAR_3, "return p\n", 9);

  FUNC_4(VAR_3);
  FUNC_1(VAR_2);

  return 0;
}
