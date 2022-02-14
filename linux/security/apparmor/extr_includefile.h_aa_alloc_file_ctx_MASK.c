
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_label {int dummy; } ;
struct aa_file_ctx {int label; int lock; } ;
typedef int gfp_t ;


 int FUNC_0 (struct aa_label*) ;
 struct aa_file_ctx* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline struct aa_file_ctx *FUNC_4(struct aa_label *VAR_0,
          gfp_t VAR_1)
{
 struct aa_file_ctx *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct aa_file_ctx), VAR_1);
 if (VAR_2) {
  FUNC_3(&VAR_2->lock);
  FUNC_2(VAR_2->label, FUNC_0(VAR_0));
 }
 return VAR_2;
}
