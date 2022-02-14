
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char const**,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,char const*,int ,int,int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

TupleDesc
FUNC_4(const char *VAR_1)
{
 TupleDesc VAR_2;

 if (FUNC_3(VAR_1, "all") == 0)
 {

  VAR_2 = FUNC_0(3);
  FUNC_2(VAR_2, (AttrNumber) 1, "name",
         VAR_0, -1, 0);
  FUNC_2(VAR_2, (AttrNumber) 2, "setting",
         VAR_0, -1, 0);
  FUNC_2(VAR_2, (AttrNumber) 3, "description",
         VAR_0, -1, 0);
 }
 else
 {
  const char *VAR_3;


  (void) FUNC_1(VAR_1, &VAR_3, 0);


  VAR_2 = FUNC_0(1);
  FUNC_2(VAR_2, (AttrNumber) 1, VAR_3,
         VAR_0, -1, 0);
 }
 return VAR_2;
}
