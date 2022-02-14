
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* who; int acemask; int aceflag; int acetype; } ;
typedef TYPE_1__ nfsace4 ;
typedef int bool_t ;
struct TYPE_8__ {scalar_t__ x_op; } ;
typedef TYPE_2__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,char**,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_4,
    nfsace4 *VAR_5)
{
    char *VAR_6 = VAR_5->who;

    if (!FUNC_1(VAR_4, &VAR_5->acetype))
        return VAR_0;

    if (!FUNC_1(VAR_4, &VAR_5->aceflag))
        return VAR_0;

    if (!FUNC_1(VAR_4, &VAR_5->acemask))
        return VAR_0;


    if (VAR_4->x_op == VAR_3)
        return VAR_2;

    return FUNC_0(VAR_4, &VAR_6, VAR_1);
}
