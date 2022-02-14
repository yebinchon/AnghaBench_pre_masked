
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int guchar ;
typedef int gsize ;
typedef int gint64 ;
typedef int ctime_n ;
struct TYPE_3__ {int commit_id; int ctime; scalar_t__ desc; scalar_t__ creator_name; scalar_t__ creator_id; scalar_t__ root_id; } ;
typedef TYPE_1__ SeafCommit ;
typedef int GChecksum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7 (SeafCommit* VAR_1)
{
    GChecksum *VAR_2 = FUNC_2(VAR_0);
    uint8_t VAR_3[20];
    gint64 VAR_4;

    FUNC_3 (VAR_2, (guchar *)VAR_1->root_id, 41);
    FUNC_3 (VAR_2, (guchar *)VAR_1->creator_id, 41);
    if (VAR_1->creator_name)
        FUNC_3 (VAR_2, (guchar *)VAR_1->creator_name, FUNC_6(VAR_1->creator_name)+1);
    FUNC_3 (VAR_2, (guchar *)VAR_1->desc, FUNC_6(VAR_1->desc)+1);


    VAR_4 = FUNC_4 (VAR_1->ctime);
    FUNC_3 (VAR_2, (guchar *)&VAR_4, sizeof(VAR_4));

    gsize VAR_5 = 20;
    FUNC_1 (VAR_2, VAR_3, &VAR_5);

    FUNC_5 (VAR_3, VAR_1->commit_id, 20);
    FUNC_0 (VAR_2);
}
