
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ atom; scalar_t__ number2; scalar_t__ offset; int number; } ;
typedef TYPE_1__ Dwarf_Op ;
typedef int Dwarf_Frame ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__**,size_t*) ;
 int FUNC_2 (int *,int,TYPE_1__*,TYPE_1__**,size_t*) ;
 int FUNC_3 (char*,int,...) ;

__attribute__((used)) static int FUNC_4(int VAR_2, Dwarf_Frame *VAR_3)
{
 Dwarf_Op VAR_4[2];
 Dwarf_Op VAR_5;
 Dwarf_Op *VAR_6 = &VAR_5;
 size_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, VAR_2, VAR_4, &VAR_6, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_3("dwarf_frame_register() %s\n", FUNC_0(-1));
  return -1;
 }






 if ((VAR_7 != 0 || VAR_6 != ((void*)0)) &&
  !(VAR_7 == 1 && VAR_6[0].atom == VAR_1 &&
   VAR_6[0].number2 == 0 && VAR_6[0].offset == 0))
  return 0;





 VAR_8 = FUNC_1(VAR_3, &VAR_6, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_3("dwarf_frame_cfa() returns %d, %s\n", VAR_8,
     FUNC_0(-1));
  return -1;
 }




 if (VAR_7 == 1 && VAR_6[0].atom == VAR_0 && VAR_6[0].number == 1 &&
    VAR_6[0].number2 == 0)
  return 1;




 return 2;
}
