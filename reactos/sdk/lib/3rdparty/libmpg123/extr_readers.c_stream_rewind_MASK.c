
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fileoff; scalar_t__ firstpos; scalar_t__ pos; } ;
struct TYPE_7__ {int flags; TYPE_1__ buffer; int filepos; } ;
struct TYPE_8__ {TYPE_2__ rdat; } ;
typedef TYPE_3__ mpg123_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_1(mpg123_handle *VAR_3)
{
 if(VAR_3->rdat.flags & VAR_1)
 {
  VAR_3->rdat.filepos = FUNC_0(VAR_3,0,VAR_2);

  VAR_3->rdat.buffer.fileoff = VAR_3->rdat.filepos;

 }

 if(VAR_3->rdat.flags & VAR_0)
 {
  VAR_3->rdat.buffer.pos = 0;
  VAR_3->rdat.buffer.firstpos = 0;
  VAR_3->rdat.filepos = VAR_3->rdat.buffer.fileoff;
 }

}
