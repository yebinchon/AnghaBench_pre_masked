
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_header {scalar_t__ middle_chunks; scalar_t__ first_chunks; scalar_t__ last_chunks; scalar_t__ start_middle; int first_num; } ;
struct page {int private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct z3fold_header*,unsigned short) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 struct page* FUNC_4 (struct z3fold_header*) ;

__attribute__((used)) static int FUNC_5(struct z3fold_header *VAR_4)
{
 struct page *VAR_5 = FUNC_4(VAR_4);

 if (FUNC_2(VAR_1, &VAR_5->private))
  return 0;

 if (FUNC_3(FUNC_0(VAR_5)))
  return 0;

 if (VAR_4->middle_chunks == 0)
  return 0;

 if (VAR_4->first_chunks == 0 && VAR_4->last_chunks == 0) {

  FUNC_1(VAR_4, VAR_3);
  VAR_4->first_chunks = VAR_4->middle_chunks;
  VAR_4->middle_chunks = 0;
  VAR_4->start_middle = 0;
  VAR_4->first_num++;
  return 1;
 }





 if (VAR_4->first_chunks != 0 && VAR_4->last_chunks == 0 &&
     VAR_4->start_middle - (VAR_4->first_chunks + VAR_3) >=
   VAR_0) {
  FUNC_1(VAR_4, VAR_4->first_chunks + VAR_3);
  VAR_4->start_middle = VAR_4->first_chunks + VAR_3;
  return 1;
 } else if (VAR_4->last_chunks != 0 && VAR_4->first_chunks == 0 &&
     VAR_2 - (VAR_4->last_chunks + VAR_4->start_middle
     + VAR_4->middle_chunks) >=
   VAR_0) {
  unsigned short VAR_6 = VAR_2 - VAR_4->last_chunks -
   VAR_4->middle_chunks;
  FUNC_1(VAR_4, VAR_6);
  VAR_4->start_middle = VAR_6;
  return 1;
 }

 return 0;
}
