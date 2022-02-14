
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rd; } ;
typedef TYPE_2__ mpg123_handle ;
struct TYPE_5__ {int (* fullread ) (TYPE_2__*,unsigned char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(mpg123_handle *VAR_3,unsigned long *VAR_4)
{
 unsigned char VAR_5[4];
 int VAR_6 = VAR_3->rd->fullread(VAR_3,VAR_5,4);
 if(VAR_6 == VAR_1) return VAR_6;
 if(VAR_6 != 4) return VAR_0;

 *VAR_4 = ((unsigned long) VAR_5[0] << 24) |
            ((unsigned long) VAR_5[1] << 16) |
            ((unsigned long) VAR_5[2] << 8) |
             (unsigned long) VAR_5[3];

 return VAR_2;
}
