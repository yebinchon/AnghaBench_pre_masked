
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct inode {scalar_t__ i_uid; scalar_t__ i_gid; int i_mode; } ;
typedef scalar_t__ gid_t ;
struct TYPE_3__ {scalar_t__ uid; scalar_t__ gid; int Flags; scalar_t__ euid; scalar_t__ egid; } ;
typedef TYPE_1__* PEXT2_VCB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int VAR_3 ;

int FUNC_5(PEXT2_VCB VAR_4, struct inode *VAR_5, int VAR_6)
{
    int VAR_7 = 0;

    uid_t VAR_8 = VAR_4->uid;
    gid_t VAR_9 = VAR_4->gid;

    if (FUNC_4(VAR_4->Flags, VAR_3)) {
        VAR_8 = VAR_4->euid;
        VAR_9 = VAR_4->egid;
    }

    if (!VAR_8 || VAR_8 == VAR_5->i_uid) {

        VAR_7 = VAR_1 | VAR_2 | VAR_0;
    } else if (VAR_9 == VAR_5->i_gid) {
        if (FUNC_0(VAR_5->i_mode))
            VAR_7 = VAR_1 | VAR_0;
        else if (FUNC_1(VAR_5->i_mode))
            VAR_7 = VAR_1 | VAR_2 | VAR_0;
    } else {
        if (FUNC_2(VAR_5->i_mode))
            VAR_7 = VAR_1 | VAR_0;
        else if (FUNC_3(VAR_5->i_mode))
            VAR_7 = VAR_1 | VAR_2 | VAR_0;

    }

    return FUNC_4(VAR_7, VAR_6);
}
