
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable {int arrsize; int ind_arrsize; int varcharsize; char* value; int const type; int offset; scalar_t__ ind_varcharsize; char* ind_value; int ind_offset; int ind_type; int * ind_pointer; scalar_t__ pointer; } ;
struct statement {int force_indicator; int compat; int lineno; } ;
typedef enum ARRAY_TYPE { ____Placeholder_ARRAY_TYPE } ARRAY_TYPE ;
typedef int PGresult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*,int) ;
 scalar_t__ FUNC_3 (int const*,int,int) ;
 int FUNC_4 (int const*,int,int) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int,int ) ;
 int FUNC_7 (int const*,int,int,int ,int const,int ,char*,char*,int,int,int,int,int ,int ) ;
 int FUNC_8 (int ,struct statement const*,struct variable*) ;
 int FUNC_9 (char*,int ,int,...) ;
 int FUNC_10 (int ,int ,int ,int *) ;
 int FUNC_11 (int ) ;

bool
FUNC_12(const PGresult *VAR_9, int VAR_10,
      const struct statement *VAR_11, struct variable *VAR_12)
{
 enum ARRAY_TYPE VAR_13;
 int VAR_14,
    VAR_15 = FUNC_5(VAR_9);
 bool VAR_16 = 1;

 if ((VAR_13 = FUNC_8(FUNC_2(VAR_9, VAR_10), VAR_11, VAR_12)) == VAR_0)
 {
  FUNC_10(VAR_11->lineno, VAR_4, VAR_7, ((void*)0));
  return 0;
 }

 if (VAR_13 == VAR_1)
 {



  if ((VAR_12->arrsize > 0 && VAR_15 > VAR_12->arrsize) || (VAR_12->ind_arrsize > 0 && VAR_15 > VAR_12->ind_arrsize))
  {
   FUNC_9("ecpg_store_result on line %d: incorrect number of matches; %d don't fit into array of %ld\n",
      VAR_11->lineno, VAR_15, VAR_12->arrsize);
   FUNC_10(VAR_11->lineno, FUNC_0(VAR_11->compat) ? VAR_2 : VAR_8, VAR_5, ((void*)0));
   return 0;
  }
 }
 else
 {



  if (VAR_12->arrsize == 0)
  {
   FUNC_10(VAR_11->lineno, VAR_3, VAR_6, ((void*)0));
   return 0;
  }
 }




 if ((VAR_12->arrsize == 0 || VAR_12->varcharsize == 0) && VAR_12->value == ((void*)0))
 {
  int VAR_17 = 0;

  if (!FUNC_1(VAR_9, VAR_10))
  {
   switch (VAR_12->type)
   {
    case 131:
    case 129:
    case 130:
     if (!VAR_12->varcharsize && !VAR_12->arrsize)
     {

      for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
       VAR_17 += FUNC_11(FUNC_4(VAR_9, VAR_14, VAR_10)) + 1;
      VAR_17 *= VAR_12->offset;
      VAR_17 += (VAR_15 + 1) * sizeof(char *);
     }
     else
     {
      VAR_12->varcharsize = 0;

      for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
      {
       int VAR_18 = FUNC_11(FUNC_4(VAR_9, VAR_14, VAR_10)) + 1;

       if (VAR_18 > VAR_12->varcharsize)
        VAR_12->varcharsize = VAR_18;
      }
      VAR_12->offset *= VAR_12->varcharsize;
      VAR_17 = VAR_12->offset * VAR_15;
     }
     break;
    case 128:
     VAR_17 = VAR_15 * (VAR_12->varcharsize + sizeof(int));
     break;
    default:
     VAR_17 = VAR_12->offset * VAR_15;
     break;
   }
  }
  else
  {
   for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
    VAR_17 += FUNC_3(VAR_9, VAR_14, VAR_10);
  }

  FUNC_9("ecpg_store_result on line %d: allocating memory for %d tuples\n", VAR_11->lineno, VAR_15);
  VAR_12->value = (char *) FUNC_6(VAR_17, VAR_11->lineno);
  if (!VAR_12->value)
   return 0;
  *((char **) VAR_12->pointer) = VAR_12->value;
 }


 if ((VAR_12->ind_arrsize == 0 || VAR_12->ind_varcharsize == 0) && VAR_12->ind_value == ((void*)0) && VAR_12->ind_pointer != ((void*)0))
 {
  int VAR_19 = VAR_12->ind_offset * VAR_15;

  VAR_12->ind_value = (char *) FUNC_6(VAR_19, VAR_11->lineno);
  if (!VAR_12->ind_value)
   return 0;
  *((char **) VAR_12->ind_pointer) = VAR_12->ind_value;
 }


 if (!VAR_12->varcharsize && !VAR_12->arrsize &&
  (VAR_12->type == 131 || VAR_12->type == 129 || VAR_12->type == 130))
 {



  char **VAR_20 = (char **) VAR_12->value;


  char *VAR_21 = (char *) &VAR_20[VAR_15 + 1];

  for (VAR_14 = 0; VAR_14 < VAR_15 && VAR_16; VAR_14++)
  {
   int VAR_22 = FUNC_11(FUNC_4(VAR_9, VAR_14, VAR_10)) + 1;

   if (!FUNC_7(VAR_9, VAR_14, VAR_10, VAR_11->lineno,
          VAR_12->type, VAR_12->ind_type, VAR_21,
          VAR_12->ind_value, VAR_22, 0, VAR_12->ind_offset, VAR_13, VAR_11->compat, VAR_11->force_indicator))
    VAR_16 = 0;
   else
   {
    *VAR_20 = VAR_21;
    VAR_21 += VAR_22;
    VAR_20++;
   }
  }


  *VAR_20 = ((void*)0);
 }
 else
 {
  for (VAR_14 = 0; VAR_14 < VAR_15 && VAR_16; VAR_14++)
  {
   if (!FUNC_7(VAR_9, VAR_14, VAR_10, VAR_11->lineno,
          VAR_12->type, VAR_12->ind_type, VAR_12->value,
          VAR_12->ind_value, VAR_12->varcharsize, VAR_12->offset, VAR_12->ind_offset, VAR_13, VAR_11->compat, VAR_11->force_indicator))
    VAR_16 = 0;
  }
 }
 return VAR_16;
}
