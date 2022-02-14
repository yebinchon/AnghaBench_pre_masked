
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_10__ {scalar_t__ type; int distance; int length; } ;
struct TYPE_9__ {scalar_t__ size; } ;
typedef TYPE_1__* TSQuery ;
typedef TYPE_2__ QueryOperand ;
typedef char QueryItem ;
typedef int NODE ;


 int FUNC_0 (int,int) ;
 char* FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int*,int*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;
 TYPE_1__* FUNC_10 (int) ;
 char* FUNC_11 (int *,int*) ;

TSQuery
FUNC_12(TSQuery VAR_3)
{
 int32 VAR_4,
    VAR_5,
    VAR_6,
    VAR_7;
 NODE *VAR_8;
 int VAR_9,
    VAR_10;
 TSQuery VAR_11;
 QueryItem *VAR_12;
 char *VAR_13;

 if (VAR_3->size == 0)
  return VAR_3;


 VAR_8 = FUNC_5(FUNC_8(FUNC_2(VAR_3)), &VAR_9, &VAR_10);
 if (VAR_8 == ((void*)0))
 {
  FUNC_6(VAR_1,
    (FUNC_7("text-search query contains only stop words or doesn't contain lexemes, ignored")));
  VAR_11 = FUNC_10(VAR_0);
  VAR_11->size = 0;
  FUNC_3(VAR_11, VAR_0);
  return VAR_11;
 }





 VAR_5 = FUNC_4(VAR_8);
 VAR_12 = FUNC_11(VAR_8, &VAR_4);
 VAR_6 = FUNC_0(VAR_4, VAR_5);

 VAR_11 = FUNC_10(VAR_6);
 FUNC_3(VAR_11, VAR_6);
 VAR_11->size = VAR_4;

 FUNC_9(FUNC_2(VAR_11), VAR_12, VAR_4 * sizeof(QueryItem));

 VAR_12 = FUNC_2(VAR_11);
 VAR_13 = FUNC_1(VAR_11);
 for (VAR_7 = 0; VAR_7 < VAR_11->size; VAR_7++)
 {
  QueryOperand *VAR_14 = (QueryOperand *) &VAR_12[VAR_7];

  if (VAR_14->type != VAR_2)
   continue;

  FUNC_9(VAR_13, FUNC_1(VAR_3) + VAR_14->distance, VAR_14->length);
  VAR_13[VAR_14->length] = '\0';
  VAR_14->distance = VAR_13 - FUNC_1(VAR_11);
  VAR_13 += VAR_14->length + 1;
 }

 return VAR_11;
}
