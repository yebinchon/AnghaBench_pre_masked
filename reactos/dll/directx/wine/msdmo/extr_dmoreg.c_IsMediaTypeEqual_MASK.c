
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int subtype; int type; } ;
typedef TYPE_1__ DMO_PARTIAL_MEDIATYPE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static BOOL FUNC_1(const DMO_PARTIAL_MEDIATYPE* VAR_1, const DMO_PARTIAL_MEDIATYPE* VAR_2)
{

    return (FUNC_0(&VAR_1->type, &VAR_2->type) ||
            FUNC_0(&VAR_2->type, &VAR_0) ||
            FUNC_0(&VAR_1->type, &VAR_0)) &&
            (FUNC_0(&VAR_1->subtype, &VAR_2->subtype) ||
            FUNC_0(&VAR_2->subtype, &VAR_0) ||
            FUNC_0(&VAR_1->subtype, &VAR_0));
}
