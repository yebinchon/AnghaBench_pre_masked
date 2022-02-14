
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {int flags; scalar_t__ name; int vartype; } ;
struct config_string {struct config_generic gen; } ;
struct config_real {struct config_generic gen; } ;
struct config_int {struct config_generic gen; } ;
struct config_enum {struct config_generic gen; } ;
struct config_bool {struct config_generic gen; } ;


 struct config_bool* VAR_0 ;
 struct config_enum* VAR_1 ;
 struct config_int* VAR_2 ;
 struct config_real* VAR_3 ;
 struct config_string* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct config_generic**) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_12 ;
 struct config_generic** VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (void*,int,int,int ) ;
 int VAR_16 ;

void
FUNC_3(void)
{
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19 = 0;
 struct config_generic **VAR_20;
 int VAR_21;

 for (VAR_21 = 0; VAR_0[VAR_21].gen.name; VAR_21++)
 {
  struct config_bool *VAR_22 = &VAR_0[VAR_21];


  VAR_22->gen.vartype = VAR_7;
  VAR_18++;

  if (VAR_22->gen.flags & VAR_6)
   VAR_19++;
 }

 for (VAR_21 = 0; VAR_2[VAR_21].gen.name; VAR_21++)
 {
  struct config_int *VAR_23 = &VAR_2[VAR_21];

  VAR_23->gen.vartype = VAR_9;
  VAR_18++;

  if (VAR_23->gen.flags & VAR_6)
   VAR_19++;
 }

 for (VAR_21 = 0; VAR_3[VAR_21].gen.name; VAR_21++)
 {
  struct config_real *VAR_24 = &VAR_3[VAR_21];

  VAR_24->gen.vartype = VAR_10;
  VAR_18++;

  if (VAR_24->gen.flags & VAR_6)
   VAR_19++;
 }

 for (VAR_21 = 0; VAR_4[VAR_21].gen.name; VAR_21++)
 {
  struct config_string *VAR_25 = &VAR_4[VAR_21];

  VAR_25->gen.vartype = VAR_11;
  VAR_18++;

  if (VAR_25->gen.flags & VAR_6)
   VAR_19++;
 }

 for (VAR_21 = 0; VAR_1[VAR_21].gen.name; VAR_21++)
 {
  struct config_enum *VAR_26 = &VAR_1[VAR_21];

  VAR_26->gen.vartype = VAR_8;
  VAR_18++;

  if (VAR_26->gen.flags & VAR_6)
   VAR_19++;
 }




 VAR_17 = VAR_18 + VAR_18 / 4;

 VAR_20 = (struct config_generic **)
  FUNC_1(VAR_5, VAR_17 * sizeof(struct config_generic *));

 VAR_18 = 0;

 for (VAR_21 = 0; VAR_0[VAR_21].gen.name; VAR_21++)
  VAR_20[VAR_18++] = &VAR_0[VAR_21].gen;

 for (VAR_21 = 0; VAR_2[VAR_21].gen.name; VAR_21++)
  VAR_20[VAR_18++] = &VAR_2[VAR_21].gen;

 for (VAR_21 = 0; VAR_3[VAR_21].gen.name; VAR_21++)
  VAR_20[VAR_18++] = &VAR_3[VAR_21].gen;

 for (VAR_21 = 0; VAR_4[VAR_21].gen.name; VAR_21++)
  VAR_20[VAR_18++] = &VAR_4[VAR_21].gen;

 for (VAR_21 = 0; VAR_1[VAR_21].gen.name; VAR_21++)
  VAR_20[VAR_18++] = &VAR_1[VAR_21].gen;

 if (VAR_13)
  FUNC_0(VAR_13);
 VAR_13 = VAR_20;
 VAR_15 = VAR_18;
 VAR_14 = VAR_19;
 VAR_16 = VAR_17;
 FUNC_2((void *) VAR_13, VAR_15,
    sizeof(struct config_generic *), VAR_12);
}
