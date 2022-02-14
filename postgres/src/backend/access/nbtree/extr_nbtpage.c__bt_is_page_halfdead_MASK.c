
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef int BlockNumber ;
typedef scalar_t__ BTPageOpaque ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static bool
FUNC_5(Relation VAR_1, BlockNumber VAR_2)
{
 Buffer VAR_3;
 Page VAR_4;
 BTPageOpaque VAR_5;
 bool VAR_6;

 VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_0);
 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = (BTPageOpaque) FUNC_2(VAR_4);

 VAR_6 = FUNC_1(VAR_5);
 FUNC_4(VAR_1, VAR_3);

 return VAR_6;
}
