
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {int buf; } ;
typedef TYPE_1__ deparse_expr_cxt ;
typedef int StringInfo ;
typedef int Oid ;


 int FUNC_0 (int ,char*,int,char*) ;
 char* FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, Oid VAR_1, int32 VAR_2,
     deparse_expr_cxt *VAR_3)
{
 StringInfo VAR_4 = VAR_3->buf;
 char *VAR_5 = FUNC_1(VAR_1, VAR_2);

 FUNC_0(VAR_4, "$%d::%s", VAR_0, VAR_5);
}
