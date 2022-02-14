
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voice {int dummy; } ;
struct sis7019 {int voice_lock; } ;


 struct voice* FUNC_0 (struct sis7019*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct voice *FUNC_3(struct sis7019 *VAR_0)
{
 struct voice *VAR_1;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->voice_lock, VAR_2);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->voice_lock, VAR_2);

 return VAR_1;
}
