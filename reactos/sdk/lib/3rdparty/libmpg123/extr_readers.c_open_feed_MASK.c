
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ flags; } ;
struct TYPE_8__ {scalar_t__ icy_interval; } ;
struct TYPE_9__ {TYPE_5__* rd; TYPE_1__ rdat; int icy; TYPE_2__ p; int err; } ;
typedef TYPE_3__ mpg123_handle ;
struct TYPE_10__ {scalar_t__ (* init ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 TYPE_5__* VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

int FUNC_4(mpg123_handle *VAR_4)
{
 FUNC_1("feed reader");






 if(VAR_4->p.icy_interval > 0)
 {
  if(VAR_1) FUNC_2("Feed reader cannot do ICY parsing!");

  return -1;
 }
 FUNC_0(&VAR_4->icy);

 VAR_4->rd = &VAR_3[VAR_2];
 VAR_4->rdat.flags = 0;
 if(VAR_4->rd->init(VAR_4) < 0) return -1;

 FUNC_1("feed reader init successful");
 return 0;

}
