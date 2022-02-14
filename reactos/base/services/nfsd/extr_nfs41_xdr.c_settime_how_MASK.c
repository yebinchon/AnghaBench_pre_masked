
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {scalar_t__ seconds; } ;
typedef TYPE_1__ const nfstime4 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;

__attribute__((used)) static uint32_t FUNC_3(
    nfstime4 *VAR_2,
    const nfstime4 *VAR_3)
{
    nfstime4 VAR_4;
    FUNC_0(&VAR_4);

    FUNC_2(&VAR_4, VAR_2, &VAR_4);
    FUNC_1(&VAR_4, &VAR_4);

    FUNC_2(VAR_3, &VAR_4, &VAR_4);

    return VAR_4.seconds < 0 ? VAR_0 : VAR_1;
}
