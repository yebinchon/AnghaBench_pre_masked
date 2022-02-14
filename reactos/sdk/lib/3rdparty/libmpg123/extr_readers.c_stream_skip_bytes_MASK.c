
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_10__ {scalar_t__ pos; } ;
struct TYPE_11__ {int flags; TYPE_1__ buffer; } ;
struct TYPE_13__ {void* err; TYPE_3__* rd; TYPE_2__ rdat; } ;
typedef TYPE_4__ mpg123_handle ;
typedef int buf ;
struct TYPE_12__ {scalar_t__ (* fullread ) (TYPE_4__*,unsigned char*,scalar_t__) ;scalar_t__ (* tell ) (TYPE_4__*) ;} ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_4__*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static off_t FUNC_4(mpg123_handle *VAR_5,off_t VAR_6)
{
 if(VAR_5->rdat.flags & VAR_3)
 {
  off_t VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_4);
  return (VAR_7 < 0) ? VAR_2 : VAR_7;
 }
 else if(VAR_6 >= 0)
 {
  unsigned char VAR_8[1024];
  ssize_t VAR_9;
  while (VAR_6 > 0)
  {
   ssize_t VAR_10 = VAR_6 < (off_t)sizeof(VAR_8) ? (ssize_t)VAR_6 : (ssize_t)sizeof(VAR_8);
   VAR_9 = VAR_5->rd->fullread(VAR_5, VAR_8, VAR_10);
   if (VAR_9 < 0) return VAR_9;
   else if(VAR_9 == 0) break;
   VAR_6 -= VAR_9;
  }
  return VAR_5->rd->tell(VAR_5);
 }

 else if(VAR_5->rdat.flags & VAR_1)
 {
  if(VAR_5->rdat.buffer.pos >= -VAR_6)
  {
   VAR_5->rdat.buffer.pos += VAR_6;
   return VAR_5->rd->tell(VAR_5);
  }
  else
  {
   VAR_5->err = VAR_0;
   return VAR_2;
  }
 }

 else
 {
  VAR_5->err = VAR_0;
  return VAR_2;
 }
}
