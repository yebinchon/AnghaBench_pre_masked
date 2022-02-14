
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_header {scalar_t__ middle_chunks; int first_chunks; int start_middle; int last_chunks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct z3fold_header *VAR_3)
{
 int VAR_4;





 if (VAR_3->middle_chunks != 0) {
  int VAR_5 = VAR_3->first_chunks ?
   0 : VAR_3->start_middle - VAR_2;
  int VAR_6 = VAR_3->last_chunks ?
   0 : VAR_1 -
    (VAR_3->start_middle + VAR_3->middle_chunks);
  VAR_4 = FUNC_0(VAR_5, VAR_6);
 } else
  VAR_4 = VAR_0 - VAR_3->first_chunks - VAR_3->last_chunks;
 return VAR_4;
}
