
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pivot_field ;
struct TYPE_7__ {int count; int root; } ;
typedef TYPE_1__ avl_tree ;
struct TYPE_8__ {int ** ctv_args; } ;
typedef int PGresult ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int const*,int,int) ;
 char* FUNC_2 (int const*,int,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (TYPE_1__*,int ,int *,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*,char*) ;
 int FUNC_10 (int *,int const*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,...) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int const*,int,int *,int,int,int *,int,int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_15 (int,int *) ;

bool
FUNC_16(const PGresult *VAR_3)
{
 bool VAR_4 = 0;
 avl_tree VAR_5;
 avl_tree VAR_6;
 pivot_field *VAR_7 = ((void*)0);
 pivot_field *VAR_8 = ((void*)0);
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_8(&VAR_6);
 FUNC_8(&VAR_5);

 if (FUNC_5(VAR_3) != VAR_1)
 {
  FUNC_12("\\crosstabview: statement did not return a result set");
  goto error_return;
 }

 if (FUNC_3(VAR_3) < 3)
 {
  FUNC_12("\\crosstabview: query must return at least three columns");
  goto error_return;
 }


 if (VAR_2.ctv_args[0] == ((void*)0))
  VAR_11 = 0;
 else
 {
  VAR_11 = FUNC_10(VAR_2.ctv_args[0], VAR_3);
  if (VAR_11 < 0)
   goto error_return;
 }


 if (VAR_2.ctv_args[1] == ((void*)0))
  VAR_12 = 1;
 else
 {
  VAR_12 = FUNC_10(VAR_2.ctv_args[1], VAR_3);
  if (VAR_12 < 0)
   goto error_return;
 }


 if (VAR_12 == VAR_11)
 {
  FUNC_12("\\crosstabview: vertical and horizontal headers must be different columns");
  goto error_return;
 }


 if (VAR_2.ctv_args[2] == ((void*)0))
 {
  int VAR_16;






  if (FUNC_3(VAR_3) != 3)
  {
   FUNC_12("\\crosstabview: data column must be specified when query returns more than three columns");
   goto error_return;
  }

  VAR_13 = -1;
  for (VAR_16 = 0; VAR_16 < FUNC_3(VAR_3); VAR_16++)
  {
   if (VAR_16 != VAR_11 && VAR_16 != VAR_12)
   {
    VAR_13 = VAR_16;
    break;
   }
  }
  FUNC_0(VAR_13 >= 0);
 }
 else
 {
  VAR_13 = FUNC_10(VAR_2.ctv_args[2], VAR_3);
  if (VAR_13 < 0)
   goto error_return;
 }


 if (VAR_2.ctv_args[3] == ((void*)0))
  VAR_14 = -1;
 else
 {
  VAR_14 = FUNC_10(VAR_2.ctv_args[3], VAR_3);
  if (VAR_14 < 0)
   goto error_return;
 }







 for (VAR_15 = 0; VAR_15 < FUNC_4(VAR_3); VAR_15++)
 {
  char *VAR_17;
  char *VAR_18;


  VAR_17 = FUNC_1(VAR_3, VAR_15, VAR_12) ? ((void*)0) :
   FUNC_2(VAR_3, VAR_15, VAR_12);
  VAR_18 = ((void*)0);

  if (VAR_14 >= 0 &&
   !FUNC_1(VAR_3, VAR_15, VAR_14))
   VAR_18 = FUNC_2(VAR_3, VAR_15, VAR_14);

  FUNC_9(&VAR_5, VAR_17, VAR_18);

  if (VAR_5.count > VAR_0)
  {
   FUNC_12("\\crosstabview: maximum number of columns (%d) exceeded",
       VAR_0);
   goto error_return;
  }


  VAR_17 = FUNC_1(VAR_3, VAR_15, VAR_11) ? ((void*)0) :
   FUNC_2(VAR_3, VAR_15, VAR_11);

  FUNC_9(&VAR_6, VAR_17, ((void*)0));
 }





 VAR_9 = VAR_5.count;
 VAR_10 = VAR_6.count;

 VAR_7 = (pivot_field *)
  FUNC_13(sizeof(pivot_field) * VAR_9);

 VAR_8 = (pivot_field *)
  FUNC_13(sizeof(pivot_field) * VAR_10);

 FUNC_6(&VAR_5, VAR_5.root, VAR_7, 0);
 FUNC_6(&VAR_6, VAR_6.root, VAR_8, 0);





 if (VAR_14 >= 0)
  FUNC_15(VAR_9, VAR_7);




 VAR_4 = FUNC_14(VAR_3,
         VAR_9, VAR_7, VAR_12,
         VAR_10, VAR_8, VAR_11,
         VAR_13);

error_return:
 FUNC_7(&VAR_5, VAR_5.root);
 FUNC_7(&VAR_6, VAR_6.root);
 FUNC_11(VAR_7);
 FUNC_11(VAR_8);

 return VAR_4;
}
