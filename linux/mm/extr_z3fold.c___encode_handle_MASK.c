
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_header {unsigned long last_chunks; } ;
struct z3fold_buddy_slots {unsigned long* slot; } ;
typedef enum buddy { ____Placeholder_buddy } buddy ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct z3fold_header*,int) ;

__attribute__((used)) static unsigned long FUNC_1(struct z3fold_header *VAR_4,
    struct z3fold_buddy_slots *VAR_5,
    enum buddy VAR_6)
{
 unsigned long VAR_7 = (unsigned long)VAR_4;
 int VAR_8 = 0;





 if (VAR_6 == VAR_1)
  return VAR_7 | (1 << VAR_3);


 VAR_8 = FUNC_0(VAR_4, VAR_6);
 VAR_7 += VAR_8;
 if (VAR_6 == VAR_2)
  VAR_7 |= (VAR_4->last_chunks << VAR_0);

 VAR_5->slot[VAR_8] = VAR_7;
 return (unsigned long)&VAR_5->slot[VAR_8];
}
