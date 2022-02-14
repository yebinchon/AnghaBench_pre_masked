
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_19__ {struct TYPE_19__* first; int offset; } ;
struct TYPE_18__ {int cluster_size; } ;
typedef int FDSC ;
typedef TYPE_1__ DOS_FS ;
typedef TYPE_2__ DOS_FILE ;
typedef int DIR_ENT ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__***,TYPE_2__*,scalar_t__,int **) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__**,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int **) ;

__attribute__((used)) static int FUNC_9(DOS_FS * VAR_0, DOS_FILE * VAR_1, FDSC ** VAR_2)
{
    DOS_FILE **VAR_3;
    int VAR_4;
    uint32_t VAR_5;

    VAR_3 = &VAR_1->first;
    VAR_4 = 0;
    VAR_5 = FUNC_0(VAR_1, VAR_0);
    FUNC_6();
    while (VAR_5 > 0 && VAR_5 != -1) {
 FUNC_1(VAR_0, &VAR_3, VAR_1,
   FUNC_4(VAR_0, VAR_5) + (VAR_4 % VAR_0->cluster_size), VAR_2);
 VAR_4 += sizeof(DIR_ENT);
 if (!(VAR_4 % VAR_0->cluster_size))
     if ((VAR_5 = FUNC_7(VAR_0, VAR_5)) == 0 || VAR_5 == -1)
  break;
    }
    FUNC_5();
    if (FUNC_2(VAR_0, &VAR_1->first, VAR_1->offset))
 return 0;
    if (FUNC_3(VAR_0, VAR_1->first))
 return 1;
    return FUNC_8(VAR_0, VAR_1, VAR_2);
}
