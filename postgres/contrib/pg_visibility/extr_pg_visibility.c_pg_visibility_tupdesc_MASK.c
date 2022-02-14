
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;
typedef scalar_t__ AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int ,scalar_t__,char*,int ,int,int ) ;

__attribute__((used)) static TupleDesc
FUNC_4(bool VAR_2, bool VAR_3)
{
 TupleDesc VAR_4;
 AttrNumber VAR_5 = 2;
 AttrNumber VAR_6 = 0;

 if (VAR_2)
  ++VAR_5;
 if (VAR_3)
  ++VAR_5;
 VAR_4 = FUNC_2(VAR_5);
 if (VAR_2)
  FUNC_3(VAR_4, ++VAR_6, "blkno", VAR_1, -1, 0);
 FUNC_3(VAR_4, ++VAR_6, "all_visible", VAR_0, -1, 0);
 FUNC_3(VAR_4, ++VAR_6, "all_frozen", VAR_0, -1, 0);
 if (VAR_3)
  FUNC_3(VAR_4, ++VAR_6, "pd_all_visible", VAR_0, -1, 0);
 FUNC_0(VAR_6 == VAR_5);

 return FUNC_1(VAR_4);
}
