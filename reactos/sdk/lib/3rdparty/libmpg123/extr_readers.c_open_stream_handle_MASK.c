
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int filelen; int filept; int flags; void* iohandle; } ;
struct TYPE_6__ {TYPE_1__ rdat; int icy; } ;
typedef TYPE_2__ mpg123_handle ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(mpg123_handle *VAR_1, void *VAR_2)
{
 FUNC_0(&VAR_1->icy);
 VAR_1->rdat.filelen = -1;
 VAR_1->rdat.filept = -1;
 VAR_1->rdat.iohandle = VAR_2;
 VAR_1->rdat.flags = 0;
 VAR_1->rdat.flags |= VAR_0;

 return FUNC_1(VAR_1);
}
