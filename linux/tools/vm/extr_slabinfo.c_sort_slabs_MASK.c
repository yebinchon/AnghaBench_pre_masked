
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {scalar_t__ partial; int name; } ;


 int FUNC_0 (struct slabinfo*,struct slabinfo*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct slabinfo*) ;
 scalar_t__ FUNC_2 (struct slabinfo*) ;
 scalar_t__ FUNC_3 (struct slabinfo*) ;
 struct slabinfo* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct slabinfo *VAR_7,*VAR_8;

 for (VAR_7 = VAR_1; VAR_7 < VAR_1 + VAR_2; VAR_7++) {
  for (VAR_8 = VAR_7 + 1; VAR_8 < VAR_1 + VAR_2; VAR_8++) {
   int VAR_9;

   if (VAR_6)
    VAR_9 = FUNC_2(VAR_7) < FUNC_2(VAR_8);
   else if (VAR_3)
    VAR_9 = FUNC_1(VAR_7) < FUNC_1(VAR_8);
   else if (VAR_4)
    VAR_9 = FUNC_3(VAR_7) < FUNC_3(VAR_8);
   else if (VAR_5)
    VAR_9 = VAR_7->partial < VAR_8->partial;
   else
    VAR_9 = FUNC_4(VAR_7->name, VAR_8->name);

   if (VAR_0)
    VAR_9 = -VAR_9;

   if (VAR_9 > 0) {
    struct slabinfo VAR_10;

    FUNC_0(&VAR_10, VAR_7, sizeof(struct slabinfo));
    FUNC_0(VAR_7, VAR_8, sizeof(struct slabinfo));
    FUNC_0(VAR_8, &VAR_10, sizeof(struct slabinfo));
   }
  }
 }
}
