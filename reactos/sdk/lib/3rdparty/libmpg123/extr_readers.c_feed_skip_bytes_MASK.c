
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_7__ {scalar_t__ fileoff; } ;
struct TYPE_5__ {TYPE_4__ buffer; } ;
struct TYPE_6__ {TYPE_1__ rdat; } ;
typedef TYPE_2__ mpg123_handle ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;

__attribute__((used)) static off_t FUNC_1(mpg123_handle *VAR_0,off_t VAR_1)
{

 off_t VAR_2 = FUNC_0(&VAR_0->rdat.buffer, (ssize_t)VAR_1);
 if(VAR_2 < 0) return VAR_2;

 return VAR_0->rdat.buffer.fileoff+VAR_2;
}
