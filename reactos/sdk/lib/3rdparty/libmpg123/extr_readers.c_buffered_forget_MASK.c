
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pos; scalar_t__ fileoff; } ;
struct TYPE_5__ {TYPE_4__ buffer; scalar_t__ filepos; } ;
struct TYPE_6__ {TYPE_1__ rdat; } ;
typedef TYPE_2__ mpg123_handle ;


 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_1(mpg123_handle *VAR_0)
{
 FUNC_0(&VAR_0->rdat.buffer);
 VAR_0->rdat.filepos = VAR_0->rdat.buffer.fileoff + VAR_0->rdat.buffer.pos;
}
