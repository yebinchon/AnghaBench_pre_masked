
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ filepos; scalar_t__ filelen; int buffer; } ;
struct TYPE_5__ {TYPE_1__ rdat; } ;
typedef TYPE_2__ mpg123_handle ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(mpg123_handle *VAR_1)
{
 FUNC_1(&VAR_1->rdat.buffer);
 FUNC_0(&VAR_1->rdat.buffer);
 VAR_1->rdat.filelen = 0;
 VAR_1->rdat.filepos = 0;
 VAR_1->rdat.flags |= VAR_0;
 return 0;
}
