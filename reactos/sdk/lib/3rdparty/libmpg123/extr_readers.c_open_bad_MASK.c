
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filelen; int buffer; scalar_t__ flags; } ;
struct TYPE_5__ {TYPE_1__ rdat; int * rd; int icy; } ;
typedef TYPE_2__ mpg123_handle ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

void FUNC_3(mpg123_handle *VAR_1)
{
 FUNC_2("open_bad");

 FUNC_1(&VAR_1->icy);

 VAR_1->rd = &VAR_0;
 VAR_1->rdat.flags = 0;

 FUNC_0(&VAR_1->rdat.buffer);

 VAR_1->rdat.filelen = -1;
}
