
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_5__ {int buffer; } ;
struct TYPE_6__ {TYPE_1__ rdat; } ;
typedef TYPE_2__ mpg123_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(mpg123_handle *VAR_1, off_t VAR_2)
{
 if(VAR_2 >=0)
 return FUNC_0(&VAR_1->rdat.buffer, (ssize_t)VAR_2) >= 0 ? 0 : VAR_0;
 else
 return FUNC_1(VAR_1, -VAR_2) >= 0 ? 0 : VAR_0;
}
