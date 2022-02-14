
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PgStat_StatDBEntry ;
typedef int Oid ;
typedef int HASHACTION ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static PgStat_StatDBEntry *
FUNC_2(Oid VAR_3, bool VAR_4)
{
 PgStat_StatDBEntry *VAR_5;
 bool VAR_6;
 HASHACTION VAR_7 = (VAR_4 ? VAR_0 : VAR_1);


 VAR_5 = (PgStat_StatDBEntry *) FUNC_0(VAR_2,
            &VAR_3,
            VAR_7, &VAR_6);

 if (!VAR_4 && !VAR_6)
  return ((void*)0);





 if (!VAR_6)
  FUNC_1(VAR_5);

 return VAR_5;
}
