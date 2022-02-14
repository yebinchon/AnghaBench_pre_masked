
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct parser {TYPE_1__* head; } ;
struct TYPE_4__ {struct TYPE_4__* up; } ;
typedef TYPE_1__ fz_xml ;
typedef int fz_context ;
struct TYPE_5__ {int flags; char* tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_1 (TYPE_1__*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,struct parser*) ;
 int FUNC_4 (int *,struct parser*,char*,char*,int ) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_9, struct parser *VAR_10, int VAR_11)
{
 fz_xml *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;

 if (VAR_11 == VAR_6)
  return;

 VAR_13 = (VAR_8[VAR_11].flags >> VAR_1) & VAR_0;
 VAR_14 = (VAR_8[VAR_11].flags >> VAR_2) & VAR_0;
 VAR_15 = (VAR_8[VAR_11].flags >> VAR_3) & VAR_0;
 if (VAR_13 == VAR_6)
  return;
 if (VAR_14 == VAR_6)
  VAR_14 = VAR_13;
 if (VAR_15 == VAR_6)
  VAR_15 = VAR_13;


 VAR_17 = (VAR_8[VAR_11].flags>>VAR_5) & VAR_4;
 if (VAR_17 != 0)
 {


  fz_xml *VAR_18 = ((void*)0);
  int VAR_19 = 0;
  for (VAR_12 = VAR_10->head; VAR_12; VAR_12 = VAR_12->up)
  {
   char *VAR_20 = FUNC_1(VAR_12);
   int VAR_21;

   if (VAR_20 == ((void*)0))
    continue;
   VAR_16 = FUNC_0(VAR_20, FUNC_2(VAR_20));
   VAR_21 = (VAR_8[VAR_16].flags>>VAR_5) & VAR_4;
   if (VAR_21 >= VAR_17)
    VAR_18 = VAR_12;
   if (VAR_16 == VAR_13 || VAR_16 == VAR_14 || VAR_16 == VAR_15)
    VAR_19 = 1;
   if (VAR_16 == VAR_7)
    break;
  }
  if (VAR_18)
  {
   for (VAR_12 = VAR_10->head; VAR_12; VAR_12 = VAR_12->up)
   {
    FUNC_3(VAR_9, VAR_10);
    if (VAR_12 == VAR_18)
     break;
   }
  }
  if (!VAR_19)
  {
   char *VAR_22 = VAR_8[VAR_13].tag;
   FUNC_5(VAR_9, VAR_10, VAR_13);
   FUNC_4(VAR_9, VAR_10, VAR_22, VAR_22 + FUNC_2(VAR_22), 0);
  }
 }
 else
 {

  for (VAR_12 = VAR_10->head; VAR_12; VAR_12 = VAR_12->up)
  {
   char *VAR_23 = FUNC_1(VAR_12);

   if (VAR_23 == ((void*)0))
    continue;
   VAR_16 = FUNC_0(VAR_23, FUNC_2(VAR_23));
   if (VAR_16 == VAR_13 || VAR_16 == VAR_14 || VAR_16 == VAR_15)
    break;
  }
  if (VAR_12 == ((void*)0))
  {
   char *VAR_24 = VAR_8[VAR_13].tag;
   FUNC_5(VAR_9, VAR_10, VAR_13);
   (void)FUNC_4(VAR_9, VAR_10, VAR_24, VAR_24+FUNC_2(VAR_24), 0);
  }
 }
}
