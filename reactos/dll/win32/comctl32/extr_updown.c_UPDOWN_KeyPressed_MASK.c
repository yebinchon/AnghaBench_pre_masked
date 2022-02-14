
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Flags; TYPE_1__* AccelVect; scalar_t__ AccelCount; int Self; } ;
typedef TYPE_2__ UPDOWN_INFO ;
struct TYPE_6__ {int nInc; } ;
typedef int LRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static LRESULT FUNC_4(UPDOWN_INFO *VAR_9, int VAR_10)
{
    int VAR_11, VAR_12;

    if (VAR_10 == VAR_8) VAR_11 = VAR_4;
    else if (VAR_10 == VAR_7) VAR_11 = VAR_3;
    else return 1;

    FUNC_3 (VAR_9);
    VAR_9->Flags &= ~VAR_2;
    VAR_9->Flags |= VAR_5 | VAR_11;
    FUNC_0 (VAR_9->Self, ((void*)0), VAR_1);
    FUNC_1(VAR_9->Self, VAR_6, VAR_0, 0);
    VAR_12 = (VAR_9->AccelCount && VAR_9->AccelVect) ? VAR_9->AccelVect[0].nInc : 1;
    FUNC_2 (VAR_9, VAR_12, VAR_11);
    return 0;
}
