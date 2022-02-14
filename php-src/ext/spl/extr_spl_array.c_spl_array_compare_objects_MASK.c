
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {int * properties; } ;
struct TYPE_6__ {TYPE_1__ std; } ;
typedef TYPE_2__ spl_array_object ;
typedef int HashTable ;


 int FUNC_0 (int *,int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(zval *VAR_0, zval *VAR_1)
{
 HashTable *VAR_2,
      *VAR_3;
 spl_array_object *VAR_4,
      *VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_0, VAR_1);

 VAR_4 = FUNC_1(VAR_0);
 VAR_5 = FUNC_1(VAR_1);
 VAR_2 = FUNC_2(VAR_4);
 VAR_3 = FUNC_2(VAR_5);

 VAR_6 = FUNC_3(VAR_2, VAR_3);

 if (VAR_6 == 0 &&
   !(VAR_2 == VAR_4->std.properties && VAR_3 == VAR_5->std.properties)) {
  VAR_6 = FUNC_4(VAR_0, VAR_1);
 }
 return VAR_6;
}
