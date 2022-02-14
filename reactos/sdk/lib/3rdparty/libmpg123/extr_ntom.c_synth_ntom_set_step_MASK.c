
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {long rate; } ;
struct TYPE_7__ {unsigned long ntom_step; int num; int * ntom_val; void* err; TYPE_1__ af; } ;
typedef TYPE_2__ mpg123_handle ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,unsigned long,unsigned long) ;
 int FUNC_2 (int ,char*,long,long) ;
 long FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_6 ;

int FUNC_5(mpg123_handle *VAR_7)
{
 long VAR_8,VAR_9;
 VAR_8 = FUNC_3(VAR_7);
 VAR_9 = VAR_7->af.rate;
 if(VAR_5)
  FUNC_2(VAR_6,"Init rate converter: %ld->%ld\n",VAR_8,VAR_9);

 if(VAR_9 > VAR_3 || VAR_8 > VAR_3 || VAR_8 <= 0 || VAR_9 <= 0) {
  if(VAR_1) FUNC_0("NtoM converter: illegal rates");
  VAR_7->err = VAR_0;
  return -1;
 }

 VAR_9 *= VAR_4;
 VAR_7->ntom_step = (unsigned long) VAR_9 / VAR_8;

 if(VAR_7->ntom_step > (unsigned long)VAR_2*VAR_4) {
  if(VAR_1) FUNC_1("max. 1:%i conversion allowed (%lu vs %lu)!", VAR_2, VAR_7->ntom_step, (unsigned long)8*VAR_4);
  VAR_7->err = VAR_0;
  return -1;
 }

 VAR_7->ntom_val[0] = VAR_7->ntom_val[1] = FUNC_4(VAR_7, VAR_7->num);
 return 0;
}
