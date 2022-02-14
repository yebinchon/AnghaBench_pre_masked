
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct kmemleak_object*) ;
 struct kmemleak_object* FUNC_1 (unsigned long,int ) ;
 scalar_t__ FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (char*,unsigned long) ;
 int FUNC_4 (struct kmemleak_object*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(const char *VAR_1)
{
 unsigned long VAR_2;
 struct kmemleak_object *VAR_3;
 unsigned long VAR_4;

 if (FUNC_2(VAR_1, 0, &VAR_4))
  return -VAR_0;
 VAR_3 = FUNC_1(VAR_4, 0);
 if (!VAR_3) {
  FUNC_3("Unknown object at 0x%08lx\n", VAR_4);
  return -VAR_0;
 }

 FUNC_5(&VAR_3->lock, VAR_2);
 FUNC_0(VAR_3);
 FUNC_6(&VAR_3->lock, VAR_2);

 FUNC_4(VAR_3);
 return 0;
}
