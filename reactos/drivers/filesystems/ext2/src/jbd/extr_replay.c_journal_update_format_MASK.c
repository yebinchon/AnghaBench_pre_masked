
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* j_superblock; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_8__ {int h_blocktype; } ;
struct TYPE_10__ {TYPE_1__ s_header; } ;
typedef TYPE_3__ journal_superblock_t ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3 (journal_t *VAR_1)
{
    journal_superblock_t *VAR_2;
    int VAR_3;

    VAR_3 = FUNC_2(VAR_1);
    if (VAR_3)
        return VAR_3;

    VAR_2 = VAR_1->j_superblock;

    switch (FUNC_0(VAR_2->s_header.h_blocktype)) {
    case 128:
        return 0;
    case 129:
        return FUNC_1(VAR_1, VAR_2);
    default:
        break;
    }
    return -VAR_0;
}
