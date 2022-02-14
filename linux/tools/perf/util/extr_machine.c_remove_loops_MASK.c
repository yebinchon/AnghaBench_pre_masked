
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iterations {scalar_t__ from; } ;
struct branch_entry {scalar_t__ from; } ;
typedef int chash ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct iterations*,struct iterations*,int) ;
 int FUNC_3 (unsigned char*,unsigned char,int) ;
 int FUNC_4 (struct iterations*,struct iterations*,int) ;

__attribute__((used)) static int FUNC_5(struct branch_entry *VAR_4, int VAR_5,
   struct iterations *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 unsigned char VAR_10[VAR_1];

 FUNC_3(VAR_10, VAR_2, sizeof(VAR_10));

 FUNC_0(VAR_3 > 255);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  int VAR_11 = FUNC_1(VAR_4[VAR_7].from, VAR_0) % VAR_1;


  if (VAR_10[VAR_11] == VAR_2) {
   VAR_10[VAR_11] = VAR_7;
  } else if (VAR_4[VAR_10[VAR_11]].from == VAR_4[VAR_7].from) {
   bool VAR_12 = 1;

   VAR_9 = 0;
   for (VAR_8 = VAR_10[VAR_11]; VAR_8 < VAR_7 && VAR_7 + VAR_9 < VAR_5; VAR_8++, VAR_9++)
    if (VAR_4[VAR_8].from != VAR_4[VAR_7 + VAR_9].from) {
     VAR_12 = 0;
     break;
    }
   if (VAR_12) {
    VAR_8 = VAR_5 - (VAR_7 + VAR_9);
    if (VAR_8 > 0) {
     FUNC_4(VAR_6 + VAR_7 + VAR_9,
      VAR_4 + VAR_7, VAR_9);

     FUNC_2(VAR_6 + VAR_7, VAR_6 + VAR_7 + VAR_9,
      VAR_8 * sizeof(*VAR_6));

     FUNC_2(VAR_4 + VAR_7, VAR_4 + VAR_7 + VAR_9,
      VAR_8 * sizeof(*VAR_4));
    }

    VAR_5 -= VAR_9;
   }
  }
 }
 return VAR_5;
}
