
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mp_log*,char*,char*,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static bool FUNC_2(struct mp_log *VAR_4)
{
    FUNC_1(&VAR_1, VAR_0);
    if (!VAR_3 || !VAR_2) {
        FUNC_0(VAR_4, "Failed to load base d3d11 functionality: "
                      "CreateDevice: %s, CreateDXGIFactory1: %s\n",
                 VAR_3 ? "success" : "failure",
                 VAR_2 ? "success": "failure");
        return 0;
    }

    return 1;
}
