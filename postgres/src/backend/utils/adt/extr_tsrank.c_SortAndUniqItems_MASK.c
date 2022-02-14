
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
typedef int TSQuery ;
typedef int QueryOperand ;
typedef TYPE_1__ QueryItem ;


 char* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (void*,void*,void*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int **,int,int,scalar_t__ (*) (void*,void*,void*),void*) ;

__attribute__((used)) static QueryOperand **
FUNC_5(TSQuery VAR_1, int *VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_1);
 QueryItem *VAR_4 = FUNC_1(VAR_1);
 QueryOperand **VAR_5,
     **VAR_6,
     **VAR_7;

 VAR_6 = VAR_5 = (QueryOperand **) FUNC_3(sizeof(QueryOperand *) * *VAR_2);


 while ((*VAR_2)--)
 {
  if (VAR_4->type == VAR_0)
  {
   *VAR_6 = (QueryOperand *) VAR_4;
   VAR_6++;
  }
  VAR_4++;
 }

 *VAR_2 = VAR_6 - VAR_5;
 if (*VAR_2 < 2)
  return VAR_5;

 FUNC_4(VAR_5, *VAR_2, sizeof(QueryOperand *), FUNC_2, (void *) VAR_3);

 VAR_6 = VAR_5 + 1;
 VAR_7 = VAR_5;


 while (VAR_6 - VAR_5 < *VAR_2)
 {
  if (FUNC_2((void *) VAR_6, (void *) VAR_7, (void *) VAR_3) != 0)
  {
   VAR_7++;
   *VAR_7 = *VAR_6;
  }
  VAR_6++;
 }

 *VAR_2 = VAR_7 + 1 - VAR_5;
 return VAR_5;
}
