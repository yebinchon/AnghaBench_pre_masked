
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wname ;
struct process {int dummy; } ;
struct module {int dummy; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int) ;
 struct module* FUNC_1 (struct process const*,int *) ;

struct module* FUNC_2(const struct process* VAR_2, const char* VAR_3)
{
    WCHAR VAR_4[VAR_1];

    FUNC_0(VAR_0, 0, VAR_3, -1, VAR_4, sizeof(VAR_4) / sizeof(WCHAR));
    return FUNC_1(VAR_2, VAR_4);
}
