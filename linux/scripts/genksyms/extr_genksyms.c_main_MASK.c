
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {size_t type; char* name; struct symbol* visited; int defn; scalar_t__ is_extern; scalar_t__ is_override; } ;
struct option {char* member_0; int member_1; char member_3; int member_2; } ;
struct TYPE_2__ {char n; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,int,int,double) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (int,char**,char*,struct option*,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (char,int *) ;
 int FUNC_10 (int *) ;
 int * VAR_13 ;
 TYPE_1__* VAR_14 ;
 struct symbol* VAR_15 ;
 int FUNC_11 () ;

int FUNC_12(int VAR_16, char **VAR_17)
{
 FILE *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 int VAR_20;
 while ((VAR_20 = FUNC_5(VAR_16, VAR_17, "s:dwqVDr:T:phR")) != VAR_0)

  switch (VAR_20) {
  case 'd':
   VAR_4++;
   break;
  case 'w':
   VAR_10 = 1;
   break;
  case 'q':
   VAR_10 = 0;
   break;
  case 'V':
   FUNC_3("genksyms version 2.5.60\n", VAR_13);
   break;
  case 'D':
   VAR_5 = 1;
   break;
  case 'r':
   VAR_8 = 1;
   VAR_19 = FUNC_1(VAR_12, "r");
   if (!VAR_19) {
    FUNC_7(VAR_12);
    return 1;
   }
   break;
  case 'T':
   VAR_6 = 1;
   VAR_18 = FUNC_1(VAR_12, "w");
   if (!VAR_18) {
    FUNC_7(VAR_12);
    return 1;
   }
   break;
  case 'p':
   VAR_7 = 1;
   break;
  case 'h':
   FUNC_4();
   return 0;
  case 'R':
   VAR_9 = 1;
   break;
  default:
   FUNC_4();
   return 1;
  }
 {
  extern int VAR_21;
  extern int VAR_22;

  VAR_21 = (VAR_4 > 1);
  VAR_22 = (VAR_4 > 2);

  VAR_2 = VAR_13;

 }

 if (VAR_8) {
  FUNC_10(VAR_19);
  FUNC_0(VAR_19);
 }

 FUNC_11();

 if (VAR_6 && VAR_15) {
  while (VAR_15 != (struct symbol *)-1L) {
   struct symbol *VAR_23 = VAR_15;

   if (VAR_23->is_override)
    FUNC_3("override ", VAR_18);
   if (VAR_14[VAR_23->type].n) {
    FUNC_9(VAR_14[VAR_23->type].n, VAR_18);
    FUNC_9('#', VAR_18);
   }
   FUNC_3(VAR_23->name, VAR_18);
   FUNC_9(' ', VAR_18);
   if (VAR_23->is_extern)
    FUNC_3("extern ", VAR_18);
   FUNC_8(VAR_18, VAR_23->defn);
   FUNC_9('\n', VAR_18);

   VAR_15 = VAR_23->visited;
   VAR_23->visited = ((void*)0);
  }
 }

 if (VAR_4) {
  FUNC_2(VAR_2, "Hash table occupancy %d/%d = %g\n",
   VAR_11, VAR_1,
   (double)VAR_11 / (double)VAR_1);
 }

 if (VAR_18)
  FUNC_0(VAR_18);

 return VAR_3 != 0;
}
