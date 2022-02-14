
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_lookup {int dummy; } ;


 int FUNC_0 (struct lock_lookup*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct lock_lookup* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 struct lock_lookup* FUNC_3 (int) ;

__attribute__((used)) static struct lock_lookup *FUNC_4(void)
{
 if (VAR_2 != VAR_5) {
  int VAR_6 = VAR_4++;
  if (VAR_6 >= FUNC_0(VAR_3)) {
   FUNC_1(VAR_1,
  "LOCKDEP error: insufficient LIBLOCKDEP_STATIC_ENTRIES\n");
   FUNC_2(VAR_0);
  }
  return VAR_3 + VAR_6;
 }

 return FUNC_3(sizeof(struct lock_lookup));
}
