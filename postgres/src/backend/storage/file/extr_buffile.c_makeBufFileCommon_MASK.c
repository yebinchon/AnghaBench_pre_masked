
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numFiles; int isInterXact; int dirty; long curOffset; scalar_t__ nbytes; scalar_t__ pos; scalar_t__ curFile; int resowner; } ;
typedef TYPE_1__ BufFile ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static BufFile *
FUNC_1(int VAR_1)
{
 BufFile *VAR_2 = (BufFile *) FUNC_0(sizeof(BufFile));

 VAR_2->numFiles = VAR_1;
 VAR_2->isInterXact = 0;
 VAR_2->dirty = 0;
 VAR_2->resowner = VAR_0;
 VAR_2->curFile = 0;
 VAR_2->curOffset = 0L;
 VAR_2->pos = 0;
 VAR_2->nbytes = 0;

 return VAR_2;
}
