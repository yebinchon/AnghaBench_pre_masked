
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_pool {int dummy; } ;
struct z3fold_header {int start_middle; int mapped_count; } ;
struct page {int private; } ;
typedef enum buddy { ____Placeholder_buddy } buddy ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct z3fold_header* FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 struct page* FUNC_7 (struct z3fold_header*) ;
 int FUNC_8 (struct z3fold_header*) ;
 int FUNC_9 (struct z3fold_header*) ;

__attribute__((used)) static void *FUNC_10(struct z3fold_pool *VAR_5, unsigned long VAR_6)
{
 struct z3fold_header *VAR_7;
 struct page *VAR_8;
 void *VAR_9;
 enum buddy VAR_10;

 VAR_7 = FUNC_3(VAR_6);
 VAR_9 = VAR_7;
 VAR_8 = FUNC_7(VAR_7);

 if (FUNC_6(VAR_2, &VAR_8->private))
  goto out;

 FUNC_8(VAR_7);
 VAR_10 = FUNC_1(VAR_6);
 switch (VAR_10) {
 case 130:
  VAR_9 += VAR_4;
  break;
 case 128:
  VAR_9 += VAR_7->start_middle << VAR_0;
  FUNC_5(VAR_1, &VAR_8->private);
  break;
 case 129:
  VAR_9 += VAR_3 - (FUNC_2(VAR_6) << VAR_0);
  break;
 default:
  FUNC_4("unknown buddy id %d\n", VAR_10);
  FUNC_0(1);
  VAR_9 = ((void*)0);
  break;
 }

 if (VAR_9)
  VAR_7->mapped_count++;
 FUNC_9(VAR_7);
out:
 return VAR_9;
}
