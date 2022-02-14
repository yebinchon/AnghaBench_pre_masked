
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; } ;
struct TYPE_11__ {long framesize; TYPE_2__* rd; TYPE_1__ rdat; } ;
typedef TYPE_3__ mpg123_handle ;
struct TYPE_10__ {int (* head_read ) (TYPE_3__*,unsigned long*) ;int (* head_shift ) (TYPE_3__*,unsigned long*) ;int (* back_bytes ) (TYPE_3__*,long) ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*,unsigned long*) ;
 int FUNC_2 (TYPE_3__*,unsigned long*) ;
 int FUNC_3 (TYPE_3__*,long) ;
 int FUNC_4 (TYPE_3__*,long) ;

__attribute__((used)) static int FUNC_5(mpg123_handle *VAR_7, unsigned long VAR_8)
{
 long VAR_9;
 int VAR_10;
 unsigned long VAR_11;
 if(!(VAR_7->rdat.flags & (VAR_6|VAR_5)))
 {
  if(VAR_2) FUNC_0("Cannot look for freeformat frame size with non-seekable and non-buffered stream!");

  return VAR_3;
 }
 if((VAR_10=VAR_7->rd->head_read(VAR_7,&VAR_11))<=0)
 return VAR_10;


 for(VAR_9=4;VAR_9<VAR_1+4;VAR_9++)
 {
  if((VAR_10=VAR_7->rd->head_shift(VAR_7,&VAR_11))<=0) return VAR_10;


  if((VAR_11 & VAR_0) == (VAR_8 & VAR_0))
  {
   VAR_7->rd->back_bytes(VAR_7,VAR_9+1);
   VAR_7->framesize = VAR_9-3;
   return VAR_4;
  }
 }
 VAR_7->rd->back_bytes(VAR_7,VAR_9);
 return VAR_3;
}
