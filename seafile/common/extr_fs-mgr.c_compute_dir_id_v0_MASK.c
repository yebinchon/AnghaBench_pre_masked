
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int mode_le ;
typedef int guint32 ;
typedef int gsize ;
struct TYPE_8__ {scalar_t__ data; struct TYPE_8__* next; } ;
struct TYPE_7__ {int dir_id; } ;
struct TYPE_6__ {int name_len; int mode; scalar_t__ name; scalar_t__ id; } ;
typedef TYPE_1__ SeafDirent ;
typedef TYPE_2__ SeafDir ;
typedef TYPE_3__ GList ;
typedef int GChecksum ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void FUNC_6 (SeafDir *VAR_3, GList *VAR_4)
{
    GChecksum *VAR_5;
    GList *VAR_6;
    uint8_t VAR_7[20];
    gsize VAR_8 = 20;
    SeafDirent *VAR_9;
    guint32 VAR_10;


    if (VAR_4 == ((void*)0)) {
        FUNC_4 (VAR_3->dir_id, '0', 40);
        return;
    }

    VAR_5 = FUNC_2 (VAR_2);
    for (VAR_6 = VAR_4; VAR_6; VAR_6 = VAR_6->next) {
        VAR_9 = (SeafDirent *)VAR_6->data;
        FUNC_3 (VAR_5, (unsigned char *)VAR_9->id, 40);
        FUNC_3 (VAR_5, (unsigned char *)VAR_9->name, VAR_9->name_len);

        if (VAR_1 == VAR_0)
            VAR_10 = FUNC_0 (VAR_9->mode);
        else
            VAR_10 = VAR_9->mode;
        FUNC_3 (VAR_5, (unsigned char *)&VAR_10, sizeof(VAR_10));
    }
    FUNC_1 (VAR_5, VAR_7, &VAR_8);

    FUNC_5 (VAR_7, VAR_3->dir_id, 20);
}
