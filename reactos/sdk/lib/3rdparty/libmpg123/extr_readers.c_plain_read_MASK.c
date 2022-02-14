
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int rdat; } ;
typedef TYPE_1__ mpg123_handle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,long,long) ;
 scalar_t__ FUNC_1 (int *,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(mpg123_handle *VAR_1, void *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4 = FUNC_1(&VAR_1->rdat, VAR_2, VAR_3);
 if(VAR_0) FUNC_0("read %li bytes of %li", (long)VAR_4, (long)VAR_3);
 return VAR_4;
}
