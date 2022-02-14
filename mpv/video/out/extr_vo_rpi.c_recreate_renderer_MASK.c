
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {scalar_t__ params; } ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (struct vo*,char*) ;
 int FUNC_2 (struct vo*) ;
 scalar_t__ FUNC_3 (struct vo*,scalar_t__) ;
 int FUNC_4 (struct vo*) ;

__attribute__((used)) static void FUNC_5(struct vo *VAR_0)
{
    FUNC_1(VAR_0, "Recreating renderer after display change.\n");

    FUNC_2(VAR_0);
    FUNC_4(VAR_0);

    if (VAR_0->params) {
        if (FUNC_3(VAR_0, VAR_0->params) < 0)
            FUNC_0(VAR_0, "Recreation failed.\n");
    }
}
