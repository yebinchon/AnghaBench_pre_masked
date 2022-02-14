
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt_array {int end; int start; int base_type; } ;
struct module {int dummy; } ;
typedef scalar_t__ DWORD64 ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct module*,int ,int ,scalar_t__*) ;

__attribute__((used)) static inline DWORD FUNC_1(struct module* VAR_1, const struct symt_array* VAR_2)
{
    if (VAR_2->end < 0)
    {
        DWORD64 VAR_3;



        if (FUNC_0(VAR_1, VAR_2->base_type, VAR_0, &VAR_3) && VAR_3)
            return -VAR_2->end / (DWORD)VAR_3;
        return 0;
    }
    return VAR_2->end - VAR_2->start + 1;
}
