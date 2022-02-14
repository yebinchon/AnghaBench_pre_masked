
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Datum ;
typedef int ArrayType ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int *,int,int ,int,int,char) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static Datum
FUNC_4(Oid *VAR_1, int VAR_2)
{
 Datum *VAR_3;
 ArrayType *VAR_4;
 int VAR_5;

 VAR_3 = (Datum *) FUNC_3(VAR_2 * sizeof(Datum));

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_3[VAR_5] = FUNC_0(VAR_1[VAR_5]);


 VAR_4 = FUNC_2(VAR_3, VAR_2, VAR_0, 4, 1, 'i');
 return FUNC_1(VAR_4);
}
