
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nm256 {scalar_t__ badintrcount; TYPE_1__* streams; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ running; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct nm256*) ;
 int FUNC_1 (struct nm256*) ;

__attribute__((used)) static irqreturn_t
FUNC_2(struct nm256 *VAR_4)
{
 if (VAR_4->badintrcount++ > 1000) {
  if (VAR_4->streams[VAR_3].running)
   FUNC_1(VAR_4);
  if (VAR_4->streams[VAR_2].running)
   FUNC_0(VAR_4);
  VAR_4->badintrcount = 0;
  return VAR_0;
 }
 return VAR_1;
}
