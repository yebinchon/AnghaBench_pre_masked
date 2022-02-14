
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int mapping; } ;
struct address_space {TYPE_1__* a_ops; } ;
typedef int pgoff_t ;
typedef int gfp_t ;
struct TYPE_2__ {int (* readpage ) (void*,struct page*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ) ;
 int FUNC_4 (struct page*,struct address_space*,int ,int ) ;
 struct page* FUNC_5 (struct address_space*,int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (void*,struct page*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 struct page* FUNC_13 (struct page*) ;

__attribute__((used)) static struct page *FUNC_14(struct address_space *VAR_2,
    pgoff_t VAR_3,
    int (*VAR_4)(void *, struct page *),
    void *VAR_5,
    gfp_t VAR_6)
{
 struct page *VAR_7;
 int VAR_8;
repeat:
 VAR_7 = FUNC_5(VAR_2, VAR_3);
 if (!VAR_7) {
  VAR_7 = FUNC_3(VAR_6);
  if (!VAR_7)
   return FUNC_0(-VAR_1);
  VAR_8 = FUNC_4(VAR_7, VAR_2, VAR_3, VAR_6);
  if (FUNC_10(VAR_8)) {
   FUNC_8(VAR_7);
   if (VAR_8 == -VAR_0)
    goto repeat;

   return FUNC_0(VAR_8);
  }

filler:
  if (VAR_4)
   VAR_8 = VAR_4(VAR_5, VAR_7);
  else
   VAR_8 = VAR_2->a_ops->readpage(VAR_5, VAR_7);

  if (VAR_8 < 0) {
   FUNC_8(VAR_7);
   return FUNC_0(VAR_8);
  }

  VAR_7 = FUNC_13(VAR_7);
  if (FUNC_1(VAR_7))
   return VAR_7;
  goto out;
 }
 if (FUNC_2(VAR_7))
  goto out;
 FUNC_12(VAR_7);
 if (FUNC_2(VAR_7))
  goto out;


 FUNC_6(VAR_7);


 if (!VAR_7->mapping) {
  FUNC_11(VAR_7);
  FUNC_8(VAR_7);
  goto repeat;
 }


 if (FUNC_2(VAR_7)) {
  FUNC_11(VAR_7);
  goto out;
 }
 goto filler;

out:
 FUNC_7(VAR_7);
 return VAR_7;
}
