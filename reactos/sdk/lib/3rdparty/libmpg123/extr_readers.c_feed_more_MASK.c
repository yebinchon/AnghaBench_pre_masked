
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ size; TYPE_1__* last; } ;
struct TYPE_7__ {TYPE_5__ buffer; } ;
struct TYPE_8__ {TYPE_2__ rdat; } ;
typedef TYPE_3__ mpg123_handle ;
struct TYPE_6__ {scalar_t__ size; int data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_5__*,unsigned char const*,long) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,unsigned long,unsigned long) ;
 int FUNC_3 (char*,int) ;

int FUNC_4(mpg123_handle *VAR_3, const unsigned char *VAR_4, long VAR_5)
{
 int VAR_6 = 0;
 if(VAR_2) FUNC_1("feed_more");
 if((VAR_6 = FUNC_0(&VAR_3->rdat.buffer, VAR_4, VAR_5)) != 0)
 {
  VAR_6 = VAR_1;
  if(VAR_0) FUNC_3("Failed to add buffer, return: %i", VAR_6);
 }
 else

 if(VAR_2) FUNC_2("feed_more: %p %luB bufsize=%lu", VAR_3->rdat.buffer.last->data,
  (unsigned long)VAR_3->rdat.buffer.last->size, (unsigned long)VAR_3->rdat.buffer.size);
 return VAR_6;
}
