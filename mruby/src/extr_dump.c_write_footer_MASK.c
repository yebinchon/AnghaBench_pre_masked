
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rite_binary_footer {int section_size; int * section_ident; } ;
typedef int mrb_state ;


 struct rite_binary_footer* VAR_0 ;
 int FUNC_0 (int *,struct rite_binary_footer*,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(mrb_state *VAR_1, uint8_t *VAR_2)
{
  struct rite_binary_footer VAR_3;

  FUNC_0(VAR_3.section_ident, VAR_0, sizeof(VAR_3.section_ident));
  FUNC_1(sizeof(struct rite_binary_footer), VAR_3.section_size);
  FUNC_0(VAR_2, &VAR_3, sizeof(struct rite_binary_footer));

  return sizeof(struct rite_binary_footer);
}
