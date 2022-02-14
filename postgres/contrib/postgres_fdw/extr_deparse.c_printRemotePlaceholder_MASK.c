
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


 int FUNC_0 (int ,char*,char*,char*) ;
 char* FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(Oid VAR_0, int32 VAR_1,
        deparse_expr_cxt *VAR_2)
{
 StringInfo VAR_3 = VAR_2->buf;
 char *VAR_4 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_3, "((SELECT null::%s)::%s)", VAR_4, VAR_4);
}
