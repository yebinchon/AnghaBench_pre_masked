
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voice {int flags; } ;
struct sis7019 {struct voice* voices; } ;


 int VAR_0 ;

__attribute__((used)) static struct voice *FUNC_0(struct sis7019 *VAR_1)
{

 struct voice *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 64; VAR_3++) {
  VAR_2 = &VAR_1->voices[VAR_3];
  if (VAR_2->flags & VAR_0)
   continue;
  VAR_2->flags |= VAR_0;
  goto found_one;
 }
 VAR_2 = ((void*)0);

found_one:
 return VAR_2;
}
