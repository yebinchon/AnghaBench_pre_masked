
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_6__ {int rdat; scalar_t__ id3buf; TYPE_1__* rd; } ;
typedef TYPE_2__ mpg123_handle ;
struct TYPE_5__ {int (* fullread ) (TYPE_2__*,unsigned char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (TYPE_2__*,unsigned char*,int) ;

__attribute__((used)) static off_t FUNC_3(mpg123_handle *VAR_2)
{
 off_t VAR_3;

 if((VAR_3=FUNC_0(&VAR_2->rdat,0,VAR_0)) < 0) return -1;

 if(FUNC_0(&VAR_2->rdat,-128,VAR_0) < 0) return -1;

 if(VAR_2->rd->fullread(VAR_2,(unsigned char *)VAR_2->id3buf,128) != 128) return -1;

 if(!FUNC_1((char*)VAR_2->id3buf,"TAG",3)) VAR_3 -= 128;

 if(FUNC_0(&VAR_2->rdat,0,VAR_1) < 0) return -1;

 if(VAR_3 <= 0) return -1;

 return VAR_3;
}
