
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rd; } ;
typedef TYPE_2__ mpg123_handle ;
struct TYPE_5__ {long (* fullread ) (TYPE_2__*,unsigned char*,int) ;} ;


 int VAR_0 ;
 long FUNC_0 (TYPE_2__*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(mpg123_handle *VAR_1,unsigned char *VAR_2, int VAR_3)
{
 long VAR_4;

 if((VAR_4=VAR_1->rd->fullread(VAR_1,VAR_2,VAR_3)) != VAR_3)
 {
  long VAR_5 = VAR_4;
  if(VAR_5 <= 0) VAR_5 = 0;
  return VAR_0;
 }
 return VAR_4;
}
