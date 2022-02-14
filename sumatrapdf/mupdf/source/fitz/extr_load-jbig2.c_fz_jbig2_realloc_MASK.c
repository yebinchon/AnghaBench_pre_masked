
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fz_jbig2_alloc_s {int * ctx; } ;
typedef int fz_context ;
typedef int Jbig2Allocator ;


 int FUNC_0 (int *,void*) ;
 void* FUNC_1 (int *,size_t) ;
 void* FUNC_2 (int *,void*,size_t) ;

__attribute__((used)) static void *FUNC_3(Jbig2Allocator *VAR_0, void *VAR_1, size_t VAR_2)
{
 fz_context *VAR_3 = ((struct fz_jbig2_alloc_s *) VAR_0)->ctx;
 if (VAR_2 == 0)
 {
  FUNC_0(VAR_3, VAR_1);
  return ((void*)0);
 }
 if (VAR_1 == ((void*)0))
  return FUNC_1(VAR_3, VAR_2);
 return FUNC_2(VAR_3, VAR_1, VAR_2);
}
