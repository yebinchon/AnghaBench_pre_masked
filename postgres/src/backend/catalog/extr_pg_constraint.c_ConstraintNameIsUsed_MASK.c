
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef scalar_t__ ConstraintCategory ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int *,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

bool
FUNC_9(ConstraintCategory VAR_12, Oid VAR_13,
      const char *VAR_14)
{
 bool VAR_15;
 Relation VAR_16;
 SysScanDesc VAR_17;
 ScanKeyData VAR_18[3];

 VAR_16 = FUNC_8(VAR_7, VAR_0);

 FUNC_3(&VAR_18[0],
    VAR_2,
    VAR_4, VAR_10,
    FUNC_2((VAR_12 == VAR_6)
         ? VAR_13 : VAR_11));
 FUNC_3(&VAR_18[1],
    VAR_3,
    VAR_4, VAR_10,
    FUNC_2((VAR_12 == VAR_5)
         ? VAR_13 : VAR_11));
 FUNC_3(&VAR_18[2],
    VAR_1,
    VAR_4, VAR_9,
    FUNC_0(VAR_14));

 VAR_17 = FUNC_4(VAR_16, VAR_8,
         1, ((void*)0), 3, VAR_18);


 VAR_15 = (FUNC_1(FUNC_6(VAR_17)));

 FUNC_5(VAR_17);
 FUNC_7(VAR_16, VAR_0);

 return VAR_15;
}
