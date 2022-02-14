
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_5__ {scalar_t__ pos; scalar_t__ fileoff; } ;
struct TYPE_6__ {int flags; scalar_t__ filepos; TYPE_1__ buffer; } ;
struct TYPE_7__ {TYPE_2__ rdat; } ;
typedef TYPE_3__ mpg123_handle ;


 int VAR_0 ;

__attribute__((used)) static off_t FUNC_0(mpg123_handle *VAR_1)
{

 if(VAR_1->rdat.flags & VAR_0)
 VAR_1->rdat.filepos = VAR_1->rdat.buffer.fileoff+VAR_1->rdat.buffer.pos;


 return VAR_1->rdat.filepos;
}
