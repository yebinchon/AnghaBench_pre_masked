
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {int dummy; } ;
struct kmem_cache {int flags; unsigned int object_size; unsigned int inuse; unsigned int offset; int red_left_pad; int align; unsigned int size; void* oo; void* max; void* min; int allocflags; scalar_t__ ctor; } ;
typedef int slab_flags_t ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct kmem_cache*,unsigned int*,int*) ;
 void* FUNC_4 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct kmem_cache *VAR_12, int VAR_13)
{
 slab_flags_t VAR_14 = VAR_12->flags;
 unsigned int VAR_15 = VAR_12->object_size;
 unsigned int VAR_16;






 VAR_15 = FUNC_0(VAR_15, sizeof(void *));
 VAR_12->inuse = VAR_15;

 if (((VAR_14 & (VAR_8 | VAR_4)) ||
  VAR_12->ctor)) {
  VAR_12->offset = VAR_15;
  VAR_15 += sizeof(void *);
 }
 FUNC_3(VAR_12, &VAR_15, &VAR_12->flags);
 VAR_15 = FUNC_0(VAR_15, VAR_12->align);
 VAR_12->size = VAR_15;
 if (VAR_13 >= 0)
  VAR_16 = VAR_13;
 else
  VAR_16 = FUNC_1(VAR_15);

 if ((int)VAR_16 < 0)
  return 0;

 VAR_12->allocflags = 0;
 if (VAR_16)
  VAR_12->allocflags |= VAR_9;

 if (VAR_12->flags & VAR_2)
  VAR_12->allocflags |= VAR_0;

 if (VAR_12->flags & VAR_3)
  VAR_12->allocflags |= VAR_1;

 if (VAR_12->flags & VAR_5)
  VAR_12->allocflags |= VAR_10;




 VAR_12->oo = FUNC_4(VAR_16, VAR_15);
 VAR_12->min = FUNC_4(FUNC_2(VAR_15), VAR_15);
 if (FUNC_5(VAR_12->oo) > FUNC_5(VAR_12->max))
  VAR_12->max = VAR_12->oo;

 return !!FUNC_5(VAR_12->oo);
}
