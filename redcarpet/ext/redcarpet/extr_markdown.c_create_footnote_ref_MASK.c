
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct footnote_ref {int id; } ;
struct footnote_list {int dummy; } ;


 struct footnote_ref* FUNC_0 (int,int) ;
 int FUNC_1 (int const*,size_t) ;

__attribute__((used)) static struct footnote_ref *
FUNC_2(struct footnote_list *VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
 struct footnote_ref *VAR_3 = FUNC_0(1, sizeof(struct footnote_ref));
 if (!VAR_3)
  return ((void*)0);

 VAR_3->id = FUNC_1(VAR_1, VAR_2);

 return VAR_3;
}
