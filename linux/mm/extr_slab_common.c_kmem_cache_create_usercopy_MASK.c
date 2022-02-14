
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
typedef int slab_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct kmem_cache*) ;
 int FUNC_1 (struct kmem_cache*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 struct kmem_cache* FUNC_3 (char const*,unsigned int,unsigned int,int,void (*) (void*)) ;
 int FUNC_4 (int,unsigned int,unsigned int) ;
 struct kmem_cache* FUNC_5 (char const*,unsigned int,int ,int,unsigned int,unsigned int,void (*) (void*),int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*,unsigned int) ;
 char* FUNC_11 (char const*,int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,char const*,int) ;
 int FUNC_17 (char*,char const*,int) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int VAR_6 ;

struct kmem_cache *
FUNC_20(const char *VAR_7,
    unsigned int VAR_8, unsigned int VAR_9,
    slab_flags_t VAR_10,
    unsigned int VAR_11, unsigned int VAR_12,
    void (*VAR_13)(void *))
{
 struct kmem_cache *VAR_14 = ((void*)0);
 const char *VAR_15;
 int VAR_16;

 FUNC_7();
 FUNC_8();
 FUNC_12();

 FUNC_14(&VAR_6);

 VAR_16 = FUNC_10(VAR_7, VAR_8);
 if (VAR_16) {
  goto out_unlock;
 }


 if (VAR_10 & ~VAR_4) {
  VAR_16 = -VAR_1;
  goto out_unlock;
 }







 VAR_10 &= VAR_0;


 if (FUNC_2(!VAR_12 && VAR_11) ||
     FUNC_2(VAR_8 < VAR_12 || VAR_8 - VAR_12 < VAR_11))
  VAR_12 = VAR_11 = 0;

 if (!VAR_12)
  VAR_14 = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10, VAR_13);
 if (VAR_14)
  goto out_unlock;

 VAR_15 = FUNC_11(VAR_7, VAR_3);
 if (!VAR_15) {
  VAR_16 = -VAR_2;
  goto out_unlock;
 }

 VAR_14 = FUNC_5(VAR_15, VAR_8,
    FUNC_4(VAR_10, VAR_9, VAR_8),
    VAR_10, VAR_11, VAR_12, VAR_13, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_14)) {
  VAR_16 = FUNC_1(VAR_14);
  FUNC_9(VAR_15);
 }

out_unlock:
 FUNC_15(&VAR_6);

 FUNC_13();
 FUNC_19();
 FUNC_18();

 if (VAR_16) {
  if (VAR_10 & VAR_5)
   FUNC_16("kmem_cache_create: Failed to create slab '%s'. Error %d\n",
    VAR_7, VAR_16);
  else {
   FUNC_17("kmem_cache_create(%s) failed with error %d\n",
    VAR_7, VAR_16);
   FUNC_6();
  }
  return ((void*)0);
 }
 return VAR_14;
}
