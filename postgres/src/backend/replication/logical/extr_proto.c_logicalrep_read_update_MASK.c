
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
FUNC_4(StringInfo VAR_1, bool *VAR_2,
        LogicalRepTupleData *VAR_3,
        LogicalRepTupleData *VAR_4)
{
 char VAR_5;
 LogicalRepRelId VAR_6;


 VAR_6 = FUNC_3(VAR_1, 4);


 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5 != 'K' && VAR_5 != 'O' && VAR_5 != 'N')
  FUNC_0(VAR_0, "expected action 'N', 'O' or 'K', got %c",
    VAR_5);


 if (VAR_5 == 'K' || VAR_5 == 'O')
 {
  FUNC_1(VAR_1, VAR_3);
  *VAR_2 = 1;

  VAR_5 = FUNC_2(VAR_1);
 }
 else
  *VAR_2 = 0;


 if (VAR_5 != 'N')
  FUNC_0(VAR_0, "expected action 'N', got %c",
    VAR_5);

 FUNC_1(VAR_1, VAR_4);

 return VAR_6;
}
