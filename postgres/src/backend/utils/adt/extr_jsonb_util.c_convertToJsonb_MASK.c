
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_8__ {int len; scalar_t__ data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ JsonbValue ;
typedef int Jsonb ;
typedef int JEntry ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static Jsonb *
FUNC_5(JsonbValue *VAR_2)
{
 StringInfoData VAR_3;
 JEntry VAR_4;
 Jsonb *VAR_5;


 FUNC_0(VAR_2->type != VAR_1);


 FUNC_3(&VAR_3);


 FUNC_4(&VAR_3, VAR_0);

 FUNC_2(&VAR_3, &VAR_4, VAR_2, 0);







 VAR_5 = (Jsonb *) VAR_3.data;

 FUNC_1(VAR_5, VAR_3.len);

 return VAR_5;
}
