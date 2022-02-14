
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevaluator {int pool; } ;
struct pdb_cmd_pair {int * pvalue; scalar_t__ name; } ;
typedef int DWORD_PTR ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pevaluator*,scalar_t__,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static BOOL FUNC_2(struct pevaluator* VAR_1, struct pdb_cmd_pair* VAR_2)
{
    DWORD_PTR VAR_3;

    if (VAR_2) for (; VAR_2->name; VAR_2++)
    {
        if (FUNC_0(VAR_1, VAR_2->name, &VAR_3))
            *VAR_2->pvalue = VAR_3;
    }
    FUNC_1(&VAR_1->pool);
    return VAR_0;
}
