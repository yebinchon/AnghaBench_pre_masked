
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;
typedef int TupOutputState ;
typedef int DestReceiver ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 char* FUNC_1 (char const*,char const**,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,char const*,int ,int,int ) ;
 int * FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_2, DestReceiver *VAR_3)
{
 TupOutputState *VAR_4;
 TupleDesc VAR_5;
 const char *VAR_6;
 char *VAR_7;


 VAR_7 = FUNC_1(VAR_2, &VAR_6, 0);


 VAR_5 = FUNC_0(1);
 FUNC_2(VAR_5, (AttrNumber) 1, VAR_6,
         VAR_0, -1, 0);


 VAR_4 = FUNC_3(VAR_3, VAR_5, &VAR_1);


 FUNC_4(VAR_4, VAR_7);

 FUNC_5(VAR_4);
}
