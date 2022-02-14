
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zic_t ;
struct TYPE_4__ {int dontmerge; int type; int at; } ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int,size_t,int *) ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(zic_t VAR_3, int VAR_4)
{
 VAR_0 = FUNC_0(VAR_0, sizeof *VAR_0, VAR_1, &VAR_2);
 VAR_0[VAR_1].at = VAR_3;
 VAR_0[VAR_1].dontmerge = 0;
 VAR_0[VAR_1].type = VAR_4;
 ++VAR_1;
}
