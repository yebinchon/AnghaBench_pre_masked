
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef int LogicalRepTupleData ;
typedef int LogicalRepRelId ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char) ;
 int FUNC_1 (int ,int *) ;
 char FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

LogicalRepRelId
FUNC_4(StringInfo VAR_1, LogicalRepTupleData *VAR_2)
{
 char VAR_3;
 LogicalRepRelId VAR_4;


 VAR_4 = FUNC_3(VAR_1, 4);

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 != 'N')
  FUNC_0(VAR_0, "expected new tuple but got %d",
    VAR_3);

 FUNC_1(VAR_1, VAR_2);

 return VAR_4;
}
