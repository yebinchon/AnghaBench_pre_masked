
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int subtype; int majortype; } ;
typedef int BOOL ;
typedef TYPE_1__ AM_MEDIA_TYPE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static BOOL FUNC_3(const AM_MEDIA_TYPE * VAR_1, const AM_MEDIA_TYPE * VAR_2, BOOL VAR_3)
{
    FUNC_1("pmt1: ");
    FUNC_2(VAR_1);
    FUNC_1("pmt2: ");
    FUNC_2(VAR_2);
    return (((VAR_3 && (FUNC_0(&VAR_1->majortype, &VAR_0) || FUNC_0(&VAR_2->majortype, &VAR_0))) || FUNC_0(&VAR_1->majortype, &VAR_2->majortype)) &&
            ((VAR_3 && (FUNC_0(&VAR_1->subtype, &VAR_0) || FUNC_0(&VAR_2->subtype, &VAR_0))) || FUNC_0(&VAR_1->subtype, &VAR_2->subtype)));
}
