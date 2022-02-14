
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_4__ {char xferType; char xferMode; int isUnix; scalar_t__ deleted; scalar_t__ lastCall; void* hasPASV; void* hasUTIME; void* hasMDTM; void* hasSIZE; } ;
typedef TYPE_1__* BookmarkPtr ;
typedef int Bookmark ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void
FUNC_1(BookmarkPtr VAR_1)
{
 (void) FUNC_0(VAR_1, 0, sizeof(Bookmark));

 VAR_1->xferType = 'I';
 VAR_1->xferMode = 'S';
 VAR_1->hasSIZE = VAR_0;
 VAR_1->hasMDTM = VAR_0;
 VAR_1->hasUTIME = VAR_0;
 VAR_1->hasPASV = VAR_0;
 VAR_1->isUnix = 1;
 VAR_1->lastCall = (time_t) 0;
 VAR_1->deleted = 0;
}
