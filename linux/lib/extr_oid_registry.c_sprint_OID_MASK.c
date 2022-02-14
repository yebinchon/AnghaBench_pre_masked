
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum OID { ____Placeholder_OID } OID ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (scalar_t__,scalar_t__,char*,size_t) ;

int FUNC_2(enum OID VAR_4, char *VAR_5, size_t VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_4 >= VAR_1);

 VAR_7 = FUNC_1(VAR_2 + VAR_3[VAR_4],
    VAR_3[VAR_4 + 1] - VAR_3[VAR_4],
    VAR_5, VAR_6);
 FUNC_0(VAR_7 == -VAR_0);
 return VAR_7;
}
