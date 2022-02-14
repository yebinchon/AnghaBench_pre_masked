
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {struct kexec_file_ops* fops; } ;
struct kexec_file_ops {int (* probe ) (void*,unsigned long) ;} ;


 int VAR_0 ;
 struct kexec_file_ops** VAR_1 ;
 int FUNC_0 (void*,unsigned long) ;

int FUNC_1(struct kimage *VAR_2, void *VAR_3,
         unsigned long VAR_4)
{
 const struct kexec_file_ops * const *VAR_5;
 int VAR_6 = -VAR_0;

 for (VAR_5 = &VAR_1[0]; *VAR_5 && (*VAR_5)->probe; ++VAR_5) {
  VAR_6 = (*VAR_5)->probe(VAR_3, VAR_4);
  if (!VAR_6) {
   VAR_2->fops = *VAR_5;
   return VAR_6;
  }
 }

 return VAR_6;
}
