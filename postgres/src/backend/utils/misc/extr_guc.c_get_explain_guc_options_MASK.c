
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_string {int * variable; int boot_val; } ;
struct config_real {int * variable; int boot_val; } ;
struct config_int {int * variable; int boot_val; } ;
struct config_generic {int flags; int vartype; } ;
struct config_enum {int * variable; int boot_val; } ;
struct config_bool {int * variable; int boot_val; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;





 int FUNC_2 (int ,char*,int) ;
 struct config_generic** VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct config_generic** FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;

struct config_generic **
FUNC_6(int *VAR_8)
{
 int VAR_9;
 struct config_generic **VAR_10;

 *VAR_8 = 0;






 VAR_10 = FUNC_4(sizeof(struct config_generic *) * VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
 {
  bool VAR_11;
  struct config_generic *VAR_12 = VAR_5[VAR_9];


  if ((VAR_12->flags & VAR_3) ||
   ((VAR_12->flags & VAR_4) &&
    !FUNC_3(FUNC_1(), VAR_0)))
   continue;


  if (!(VAR_12->flags & VAR_2))
   continue;


  VAR_11 = 0;

  switch (VAR_12->vartype)
  {
   case 132:
    {
     struct config_bool *VAR_13 = (struct config_bool *) VAR_12;

     VAR_11 = (VAR_13->boot_val != *(VAR_13->variable));
    }
    break;

   case 130:
    {
     struct config_int *VAR_14 = (struct config_int *) VAR_12;

     VAR_11 = (VAR_14->boot_val != *(VAR_14->variable));
    }
    break;

   case 129:
    {
     struct config_real *VAR_15 = (struct config_real *) VAR_12;

     VAR_11 = (VAR_15->boot_val != *(VAR_15->variable));
    }
    break;

   case 128:
    {
     struct config_string *VAR_16 = (struct config_string *) VAR_12;

     VAR_11 = (FUNC_5(VAR_16->boot_val, *(VAR_16->variable)) != 0);
    }
    break;

   case 131:
    {
     struct config_enum *VAR_17 = (struct config_enum *) VAR_12;

     VAR_11 = (VAR_17->boot_val != *(VAR_17->variable));
    }
    break;

   default:
    FUNC_2(VAR_1, "unexpected GUC type: %d", VAR_12->vartype);
  }


  if (!VAR_11)
   continue;


  VAR_10[*VAR_8] = VAR_12;
  *VAR_8 = *VAR_8 + 1;

  FUNC_0(*VAR_8 <= VAR_6);
 }

 return VAR_10;
}
