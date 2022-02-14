
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; unsigned long flags; unsigned long desc; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_2__ {struct resource* child; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 struct resource* FUNC_2 (struct resource*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(resource_size_t VAR_5, resource_size_t VAR_6,
          unsigned long VAR_7, unsigned long VAR_8,
          bool VAR_9, struct resource *VAR_10)
{
 bool VAR_11 = 1;
 struct resource *VAR_12;

 if (!VAR_10)
  return -VAR_0;

 if (VAR_5 >= VAR_6)
  return -VAR_0;

 FUNC_3(&VAR_4);

 for (VAR_12 = VAR_3.child; VAR_12; VAR_12 = FUNC_2(VAR_12, VAR_11)) {

  if (VAR_12->start > VAR_6) {
   VAR_12 = ((void*)0);
   break;
  }


  if (VAR_12->end < VAR_5)
   continue;






  VAR_11 = VAR_9;

  if ((VAR_12->flags & VAR_7) != VAR_7)
   continue;
  if ((VAR_8 != VAR_2) && (VAR_8 != VAR_12->desc))
   continue;


  break;
 }

 if (VAR_12) {

  VAR_10->start = FUNC_0(VAR_5, VAR_12->start);
  VAR_10->end = FUNC_1(VAR_6, VAR_12->end);
  VAR_10->flags = VAR_12->flags;
  VAR_10->desc = VAR_12->desc;
 }

 FUNC_4(&VAR_4);
 return VAR_12 ? 0 : -VAR_1;
}
