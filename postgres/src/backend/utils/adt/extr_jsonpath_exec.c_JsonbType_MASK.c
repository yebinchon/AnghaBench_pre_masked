
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int header; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_10__ {TYPE_1__ binary; } ;
struct TYPE_11__ {int type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;
typedef TYPE_4__ JsonbContainer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(JsonbValue *VAR_4)
{
 int VAR_5 = VAR_4->type;

 if (VAR_4->type == VAR_2)
 {
  JsonbContainer *VAR_6 = (void *) VAR_4->val.binary.data;


  FUNC_0(!FUNC_3(VAR_6));

  if (FUNC_2(VAR_6))
   VAR_5 = VAR_3;
  else if (FUNC_1(VAR_6))
   VAR_5 = VAR_1;
  else
   FUNC_4(VAR_0, "invalid jsonb container type: 0x%08x", VAR_6->header);
 }

 return VAR_5;
}
