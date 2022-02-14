
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int dummy; } ;
typedef int pgprot_t ;
typedef int gfp_t ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct vm_struct* FUNC_1 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,int,int ,void const*) ;
 void* FUNC_2 (struct vm_struct*,int ,int ,int) ;
 int FUNC_3 (struct vm_struct*) ;
 int FUNC_4 (struct vm_struct*,unsigned long,int ) ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (int ,int *,char*,unsigned long) ;

void *FUNC_7(unsigned long VAR_3, unsigned long VAR_4,
   unsigned long VAR_5, unsigned long VAR_6, gfp_t VAR_7,
   pgprot_t VAR_8, unsigned long VAR_9, int VAR_10,
   const void *VAR_11)
{
 struct vm_struct *VAR_12;
 void *VAR_13;
 unsigned long VAR_14 = VAR_3;

 VAR_3 = FUNC_0(VAR_3);
 if (!VAR_3 || (VAR_3 >> VAR_0) > FUNC_5())
  goto fail;

 VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_1 | VAR_2 |
    VAR_9, VAR_5, VAR_6, VAR_10, VAR_7, VAR_11);
 if (!VAR_12)
  goto fail;

 VAR_13 = FUNC_2(VAR_12, VAR_7, VAR_8, VAR_10);
 if (!VAR_13)
  return ((void*)0);






 FUNC_3(VAR_12);

 FUNC_4(VAR_12, VAR_3, VAR_7);

 return VAR_13;

fail:
 FUNC_6(VAR_7, ((void*)0),
     "vmalloc: allocation failure: %lu bytes", VAR_14);
 return ((void*)0);
}
