
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (int ,char*,int ,int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static Datum
FUNC_4(Datum VAR_0, Oid VAR_1)
{
 Oid VAR_2,
    VAR_3;
 char *VAR_4;
 Datum VAR_5;

 FUNC_2(VAR_1, &VAR_2, &VAR_3);
 VAR_4 = FUNC_1(VAR_0);
 VAR_5 = FUNC_0(VAR_2, VAR_4,
           VAR_3, -1);
 FUNC_3(VAR_4);
 return VAR_5;
}
