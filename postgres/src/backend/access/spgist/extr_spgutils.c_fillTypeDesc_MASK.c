
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int attbyval; int attlen; int type; } ;
typedef TYPE_1__ SpGistTypeDesc ;
typedef int Oid ;


 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_1(SpGistTypeDesc *VAR_0, Oid VAR_1)
{
 VAR_0->type = VAR_1;
 FUNC_0(VAR_1, &VAR_0->attlen, &VAR_0->attbyval);
}
