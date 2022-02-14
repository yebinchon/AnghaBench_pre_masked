
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 struct kmem_cache* FUNC_4 (struct kmem_cache*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct kmem_cache*,int) ;

__attribute__((used)) static inline struct kmem_cache *FUNC_7(struct kmem_cache *VAR_3,
           gfp_t VAR_4)
{
 VAR_4 &= VAR_2;

 FUNC_0(VAR_4);
 FUNC_1(VAR_4);

 FUNC_5(FUNC_2(VAR_4));

 if (FUNC_6(VAR_3, VAR_4))
  return ((void*)0);

 if (FUNC_3() &&
     ((VAR_4 & VAR_1) || (VAR_3->flags & VAR_0)))
  return FUNC_4(VAR_3);

 return VAR_3;
}
