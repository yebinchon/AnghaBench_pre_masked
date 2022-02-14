
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int buffer; } ;
struct TYPE_5__ {TYPE_1__ rdat; } ;
typedef TYPE_2__ mpg123_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_1(mpg123_handle *VAR_1, unsigned char *VAR_2, ssize_t VAR_3)
{
 ssize_t VAR_4 = FUNC_0(&VAR_1->rdat.buffer, VAR_2, VAR_3);
 if(VAR_4 >= 0 && VAR_4 != VAR_3) return VAR_0;
 else return VAR_4;
}
