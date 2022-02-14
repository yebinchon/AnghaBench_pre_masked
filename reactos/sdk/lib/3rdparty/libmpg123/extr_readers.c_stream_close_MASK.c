
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int * iohandle; int (* cleanup_handle ) (int *) ;int buffer; scalar_t__ filept; } ;
struct TYPE_5__ {TYPE_1__ rdat; } ;
typedef TYPE_2__ mpg123_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(mpg123_handle *VAR_3)
{
 if(VAR_3->rdat.flags & VAR_1) FUNC_1(VAR_3->rdat.filept);

 VAR_3->rdat.filept = 0;


 if(VAR_3->rdat.flags & VAR_0) FUNC_0(&VAR_3->rdat.buffer);

 if(VAR_3->rdat.flags & VAR_2)
 {
  if(VAR_3->rdat.cleanup_handle != ((void*)0)) VAR_3->rdat.cleanup_handle(VAR_3->rdat.iohandle);

  VAR_3->rdat.iohandle = ((void*)0);
 }
}
