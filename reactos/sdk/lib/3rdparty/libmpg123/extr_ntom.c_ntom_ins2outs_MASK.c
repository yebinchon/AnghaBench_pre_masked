
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_4__ {scalar_t__ spf; scalar_t__ ntom_step; } ;
typedef TYPE_1__ mpg123_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;

off_t FUNC_1(mpg123_handle *VAR_1, off_t VAR_2)
{
 off_t VAR_3 = 0;
 off_t VAR_4 = FUNC_0(VAR_1,0);
 VAR_3 = ((off_t)VAR_4 + (off_t)VAR_2*(off_t)VAR_1->ntom_step)/(off_t)VAR_0;

 return VAR_3;
}
