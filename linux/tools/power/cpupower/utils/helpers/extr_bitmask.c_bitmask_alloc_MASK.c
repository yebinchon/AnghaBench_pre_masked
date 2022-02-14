
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmask {unsigned int size; scalar_t__ maskp; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct bitmask*) ;
 int FUNC_2 (unsigned int) ;
 struct bitmask* FUNC_3 (int) ;

struct bitmask *FUNC_4(unsigned int VAR_0)
{
 struct bitmask *VAR_1;

 VAR_1 = FUNC_3(sizeof(*VAR_1));
 if (VAR_1 == 0)
  return 0;
 VAR_1->size = VAR_0;
 VAR_1->maskp = FUNC_0(FUNC_2(VAR_0), sizeof(unsigned long));
 if (VAR_1->maskp == 0) {
  FUNC_1(VAR_1);
  return 0;
 }
 return VAR_1;
}
