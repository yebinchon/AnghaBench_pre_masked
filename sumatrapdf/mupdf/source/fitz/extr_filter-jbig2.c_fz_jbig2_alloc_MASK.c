
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fz_jbig2_alloc_s {int * ctx; } ;
typedef int fz_context ;
typedef int Jbig2Allocator ;


 void* FUNC_0 (int *,size_t) ;

__attribute__((used)) static void *FUNC_1(Jbig2Allocator *VAR_0, size_t VAR_1)
{
 fz_context *VAR_2 = ((struct fz_jbig2_alloc_s *) VAR_0)->ctx;
 return FUNC_0(VAR_2, VAR_1);
}
