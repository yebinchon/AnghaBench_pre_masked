
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bytea ;
struct TYPE_3__ {int len; scalar_t__ data; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

bytea *
FUNC_2(StringInfo VAR_1)
{
 bytea *VAR_2 = (bytea *) VAR_1->data;


 FUNC_0(VAR_1->len >= VAR_0);
 FUNC_1(VAR_2, VAR_1->len);

 return VAR_2;
}
