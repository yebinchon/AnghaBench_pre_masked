
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct MPContext {TYPE_1__ current_seek; TYPE_1__ seek; } ;
typedef enum seek_precision { ____Placeholder_seek_precision } seek_precision ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (struct MPContext*,int ,int ,int,int ) ;

void FUNC_3(struct MPContext *VAR_1, enum seek_precision VAR_2)
{

    if (VAR_1->seek.type) {
        FUNC_1(VAR_1);
        return;
    }

    if (VAR_1->current_seek.type) {
        VAR_1->seek = VAR_1->current_seek;
        FUNC_1(VAR_1);
        return;
    }
    FUNC_2(VAR_1, VAR_0, FUNC_0(VAR_1), VAR_2, 0);
}
