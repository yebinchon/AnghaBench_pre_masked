
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_5__ {scalar_t__ filepos; } ;
struct TYPE_4__ {int err; TYPE_3__ rdat; } ;
typedef TYPE_1__ mpg123_handle ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,scalar_t__,int) ;

__attribute__((used)) static off_t FUNC_1(mpg123_handle *VAR_2, off_t VAR_3, int VAR_4)
{
 off_t VAR_5;
 VAR_5 = FUNC_0(&VAR_2->rdat, VAR_3, VAR_4);
 if (VAR_5 >= 0) VAR_2->rdat.filepos = VAR_5;
 else
 {
  VAR_2->err = VAR_0;
  VAR_5 = VAR_1;
 }
 return VAR_5;
}
