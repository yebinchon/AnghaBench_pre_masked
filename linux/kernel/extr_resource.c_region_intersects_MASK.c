
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {unsigned long flags; unsigned long desc; struct resource* sibling; void* end; void* start; } ;
typedef void* resource_size_t ;
struct TYPE_2__ {struct resource* child; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct resource*,struct resource*) ;

int FUNC_3(resource_size_t VAR_6, size_t VAR_7, unsigned long VAR_8,
        unsigned long VAR_9)
{
 struct resource VAR_10;
 int VAR_11 = 0; int VAR_12 = 0;
 struct resource *VAR_13;

 VAR_10.start = VAR_6;
 VAR_10.end = VAR_6 + VAR_7 - 1;

 FUNC_0(&VAR_5);
 for (VAR_13 = VAR_4.child; VAR_13 ; VAR_13 = VAR_13->sibling) {
  bool VAR_14 = (((VAR_13->flags & VAR_8) == VAR_8) &&
    ((VAR_9 == VAR_0) ||
     (VAR_9 == VAR_13->desc)));

  if (FUNC_2(VAR_13, &VAR_10))
   VAR_14 ? VAR_11++ : VAR_12++;
 }
 FUNC_1(&VAR_5);

 if (VAR_12 == 0)
  return VAR_11 ? VAR_2 : VAR_1;

 if (VAR_11)
  return VAR_3;

 return VAR_1;
}
