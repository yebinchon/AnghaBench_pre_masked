
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ interval; scalar_t__ next; } ;
struct TYPE_8__ {scalar_t__ icy_interval; } ;
struct TYPE_9__ {TYPE_5__* rd; TYPE_1__ icy; TYPE_2__ p; } ;
typedef TYPE_3__ mpg123_handle ;
struct TYPE_10__ {scalar_t__ (* init ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_5__* VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(mpg123_handle *VAR_4)
{

 if(VAR_4->p.icy_interval > 0)
 {
  FUNC_0("ICY reader");
  VAR_4->icy.interval = VAR_4->p.icy_interval;
  VAR_4->icy.next = VAR_4->icy.interval;
  VAR_4->rd = &VAR_3[VAR_1];
 }
 else

 {
  VAR_4->rd = &VAR_3[VAR_2];
  FUNC_0("stream reader");
 }

 if(VAR_4->rd->init(VAR_4) < 0) return -1;

 return VAR_0;
}
